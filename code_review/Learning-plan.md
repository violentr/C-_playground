# C++ for Vulnerability Research: Learning Plan

A progressive, 1-hour-per-day curriculum that takes you from basic C++ to efficient code review, taught through interactive, security-focused drills anchored to the `dhcp6relay` codebase.

**Mentor:** opencode (mentor mode)
**Setting:** 1 hour/day, 7 days/week
**Style:** Interactive code — small runnable C++ programs with deliberate bugs; you find, explain, and fix
**Target:** Follow the sink-to-source workflow in `CODE-REVIEW-WORKFLOW.md`

---

## How Each Session Works

Every session follows this pattern:

1. **Concept** (2-3 min) — short explanation of the day's topic and *why* it matters for security
2. **Drill program** — a small runnable C++ program demonstrating the concept (you compile + run)
3. **Bug program** — the concept shown with a deliberate flaw (you find & explain it)
4. **Connect to real code** — how the same pattern appears in `relay.cpp` / `relay.h`

Each lesson lives in a numbered directory (day-specific), containing:
- `lesson.md` — concept + reading material
- `drill.cpp` — runnable demonstration program
- `bug.cpp` — program with a deliberate bug to find
- `answers.md` — the breakdown (attempt the drills first, then read)

---

## Module A — The Memory Model (Days 1-21, ~3 weeks)

**Goal:** Understand where data lives (stack / heap / static-BSS) and how pointers move through memory. This is the foundation for every overflow class.

| Day | Topic | Why it matters for security |
|-----|-------|------------------------------|
| 1 | Three memory regions: stack, heap, static/BSS | Know what a buffer overflow overwrites (saved RIP vs heap chunk vs global state) |
| 2 | Stack frames, local variables, `static` locals | The `static uint8_t buffer[4096]` in `relay_relay_reply` lives in BSS, not the stack — changes exploitability |
| 3 | Pointers: address-of, dereference, `*`/`&` semantics | Reading parser functions requires instant pointer comprehension |
| 4 | Pointer arithmetic: `ptr + n`, indexing equivalence | `buffer + sizeof(struct)` patterns are everywhere in parsers |
| 5 | Arrays decay to pointers; `sizeof` vs actual bound | `sizeof(buffer)` in a function param is a pointer size — a classic bug |
| 6 | **Weekly review: drill with 3 deliberate bugs** | Apply the week's concepts |
| 7 | Heap: `new`/`delete`, `malloc`/`free` | Use-after-free and heap overflow classes later |
| 8 | Heap vs stack vs BSS — why location determines impact | Overflow impact table |
| 9 | Memory addressing quiz | Confirm mental model before moving on |
| 10 | Pointers to structs, `->` operator | Parsing `dhcpv6_option` etc. |
| 11 | `void*`, casts, reinterpret_cast | Unsafe casts in `parse_dhcpv6_hdr` |
| 12 | **Weekly review** | |
| 13 | References vs pointers; when each is used | Reading C++ API signatures |
| 14 | `const` correctness and what it does *not* protect | `const uint8_t *msg` still lets you read OOB |
| 15 | Common pointer bug patterns | Dangling, NULL, uninitialized, OOB |
| 16 | Reading real parsers: overview | Introduction to `parse_ether_frame`, `parse_ip6_hdr`, `parse_udp`, `parse_dhcpv6_opt` |
| 17 | **Weekly review** | |
| 18 | Buffer overflow basics (CWE-787) intro | First glance at the overflow class you'll chase |
| 19 | Stack overflow vs BSS overflow vs heap overflow | The `static buffer` question resolved |
| 20 | Connecting it all: the `relay_relay_reply` overflow revisited | See the real bug with full memory-model understanding |
| 21 | **Module A exam: hunt all bugs in a single buggy program** | |

---

## Module B — Structs & Network Parsing (Days 22-42, ~3 weeks)

**Goal:** Read wire-format parsing code correctly — struct layout, packing, alignment, endianness, and the unsafe casts parsers rely on.

| Day | Topic | Why it matters |
|-----|-------|----------------|
| 22 | Struct layout and field sizes | `sizeof(dhcpv6_relay_msg)` = 34 when packed |
| 23 | Struct padding and alignment | Unpacked structs have hidden padding bytes |
| 24 | `#pragma pack` and `__attribute__((packed))` | `struct PACKED dhcpv6_relay_msg` — read it correctly |
| 25 | `offsetof` and field offsets | Finding where each field really is |
| 26 | **Weekly review: packed vs unpacked sizing drill** | |
| 27 | Casting byte buffers to structs | Reading `parse_dhcpv6_hdr` as a cast |
| 28 | Unaligned access and why it's dangerous | `parse_dhcpv6_opt` reads `*(uint16_t*)(buffer+2)` |
| 29 | Reading multi-byte fields from buffer | Manual byte extraction |
| 30 | Endianness: network vs host byte order | `ntohs`/`htons` are security flags |
| 31 | **Weekly review** | |
| 32 | Writing a safe parser | What parsers *should* do |
| 33 | Common parser bugs: no bounds check | The core of `parse_dhcpv6_opt` |
| 34 | Out-of-bounds read (CWE-125) | Reading past the received packet |
| 35 | Parsing the DHCPv6 relay message correctly | Map the real structs to the wire format |
| 36 | **Weekly review** | |
| 37 | Option parsing pattern (code + length) | How `dhcpv6_option` works |
| 38 | The trust boundary in parsers | Network data vs assumed-trusted data |
| 39 | Real code deep-read: `parse_dhcpv6_opt` | Step through it, find the flaw |
| 40 | Real code deep-read: the option-walk loop | Follow `current_position` |
| 41 | **Weekly review** | |
| 42 | **Module B exam: find all OOB reads in a buggy parser** | |

---

## Module C — Integer Semantics (Days 43-63, ~3 weeks)

**Goal:** Master signed/unsigned, overflow, underflow, and how integer confusion becomes memory corruption.

| Day | Topic | Why it matters |
|-----|-------|----------------|
| 43 | Signed vs unsigned integers | `int32_t len` vs `uint16_t option_length` |
| 44 | Implicit conversions (the silent bug) | Comparing/assigning across signedness |
| 45 | Integer overflow (CWE-190) | Addition wrapping to a small value |
| 46 | Integer underflow (CWE-191) | `ntohs(udp_header->len) - sizeof(udphdr)` going negative |
| 47 | **Weekly review** | |
| 48 | How underflow becomes a huge length | The `relay_client` `len` path |
| 49 | Width vs sign: `uint16_t` into `int32_t` | The `len` parameter mismatch in `relay_relay_reply` |
| 50 | Arithmetic in bounds checks | `current_position + option_length` wrapping |
| 51 | Integer-to-pointer interactions | Pointer arithmetic with wrapped values |
| 52 | **Weekly review** | |
| 53 | Bounds check bypass via integer wrap | The classic bypass pattern |
| 54 | Detecting integer bugs in real code | Signature scanning |
| 55 | Real code: `ntohs` usage in relay.cpp | Every `ntohs` = attacker-trusted value |
| 56 | Real code: the `len` computation in `callback` | Trace `udp_header->len - sizeof(udphdr)` |
| 57 | **Weekly review** | |
| 58 | Loop termination & integer comparison | `(current_position - msg) != len` |
| 59 | Off-by-one (CWE-193) | `< vs <=` implications |
| 60 | Infinite loops as DoS (CWE-835) | The `!=` loop bug |
| 61 | Review CWE-190/191/193/835 with real examples | |
| 62 | **Weekly review** | |
| 63 | **Module C exam: integer-to-overflow chain** | |

---

## Module D — Sink & Source Recognition (Days 64-84, ~3 weeks)

**Goal:** Build the mechanical skills from `CODE-REVIEW-WORKFLOW.md` — recognizing sinks, sources, and tracing data flow with speed.

| Day | Topic |
|-----|-------|
| 64 | Sink recognition: what counts as a sink |
| 65 | Grep fluency: finding sinks & sources fast |
| 66 | Source recognition: recv/recvfrom/socket callbacks |
| 67 | Classifying a sink's size parameter (constant/recv/header) |
| 68 | **Drill: classify every `memcpy` in relay.cpp** |
| 69 | **Weekly review** |
| 70 | Data flow tracing on paper, part 1 (single hop) |
| 71 | Data flow tracing on paper, part 2 (multi-hop) |
| 72 | Tracing `current_position` through `callback` |
| 73 | Tracing `option_length` through `relay_relay_reply` |
| 74 | **Drill: trace a full source → sink chain** |
| 75 | **Weekly review** |
| 76 | Validation inference: recognizing a *missing* bounds check |
| 77 | Loop semantics in review: `!= vs <` |
| 78 | Reading event-loop callbacks (libevent) |
| 79 | Reading socket setup & bind |
| 80 | **Drill: full recon of one component** |
| 81 | **Weekly review** |
| 82 | Putting it together: the 7-step workflow end-to-end |
| 83 | Speed practice: audit a small function under time pressure |
| 84 | **Module D exam: complete audit of one function** |

---

## Module E — Vulnerability Classes & Exploitability (Days 85-105, ~3 weeks)

**Goal:** Recognize the full bug classes and judge whether a bug is exploitable (crash vs write vs code exec).

| Day | Topic |
|-----|-------|
| 85 | Buffer overflow (CWE-787) in depth |
| 86 | Out-of-bounds read (CWE-125) in depth |
| 87 | Integer overflow/underflow (CWE-190/191) recap |
| 88 | Off-by-one & loop termination (CWE-193/835) |
| 89 | **Weekly review** |
| 90 | Stack vs BSS vs heap: exploitability impact |
| 91 | What each overflow can reach (saved RIP, function ptr, heap meta) |
| 92 | Crash analysis: SIGSEGV, SIGABRT, where it points |
| 93 | Read-only vs writable: information leaks (OOB send) |
| 94 | **Drill: given a bug, judge crash / write / code-exec** |
| 95 | **Weekly review** |
| 96 | The chained-bug mindset: how one OOB read enables another write |
| 97 | Multi-hop traces and compound vulnerabilities |
| 98 | Writing a structured vulnerability report |
| 99 | Writing a reproduction (packet layout description) |
| 100 | **Weekly review** |
| 101 | Full audit part 1: `relay_client` path |
| 102 | Full audit part 2: `relay_relay_reply` path |
| 103 | Full audit part 3: `callback` extension-header walk |
| 104 | Final review + gaps check |
| 105 | **Capstone: independent audit of a new function, full report** |

---

## Environment

- **OS:** macOS
- **Compiler:** g++ (configured)
- **IDE:** CLion (optional, plus terminal)
- **Workspace:** `learn-cpp/` — separate repo, location to be provided by trainee

### Toolchain Fundamentals To Pick Up Along The Way
- Compiling with `-g`, `-Wall`, `-fsanitize=address,undefined` (ASan) to confirm overflows
- Using a debugger (lldb) to inspect memory at a crash
- Running buggy programs under ASan to *see* the overflow when the static trace predicts it

---

## Progress Tracking

- Each module ends with an exam (one buggy program / function / audit)
- Each weekly review reinforces the previous week
- The capstone (day 105) is an independent audit producing a full vulnerability report using the `CODE-REVIEW-WORKFLOW.md` template

---

## Success Criteria

By the end of this plan you will be able to:

1. Read any parser in `relay.cpp` and identify unsafe casts, missing bounds checks, and OOB reads
2. Trace an attacker-controlled value from a socket `recvfrom` to a `memcpy` sink without an editor
3. Classify a bug by its size parameter origin (constant / recv-bounded / header-controlled)
4. Judge a confirmed bug's exploitability (crash / memory corruption / code exec)
5. Produce a structured, reproducible vulnerability report
6. Independently audit a new component using the 7-step workflow

---

*Learning plan for vulnerability research. Mentor-guided, 1 hour/day, interactive code drills.*

