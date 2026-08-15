# C++ Learning Roadmap — PPP2

Source: *Programming: Principles and Practice Using C++* (2nd ed., Bjarne Stroustrup)

- Goal: solid Junior C++ developer
- Pace: 1 hour/day, 7 days/week
- Conventions: all drills + half of exercises per chapter (all "hard" ones included)
- Progress: mark `[x]` as you finish each item

## Weekly cadence
- 3 days: read + do the drill
- 2 days: exercises
- 1 day: spaced repetition — redo one exercise from ~2 chapters back
- 1 day: lighter (notes review, catch-up, or git cleanup)
- Commit to Git at the end of every chapter.

## Milestones
- **M1** — Calculator (ch 6–7): a real program built incrementally, redo from scratch once
- **M2** — Date class (ch 9): invariants, `const`, operator overloading
- **M3** — STL fluency (ch 20–21): containers, iterators, algorithms, maps; switch to smart pointers

---

## Phase A — Foundations

### Week 1 — Setup + hello world
- [ ] Toolchain verified: `clang++ -std=c++14 -Wall -Wextra -g` compiles a hello-world cleanly
- [ ] Repo convention: `chXX_name/` dirs with `drill.cpp`, `eNN.cpp`, `notes.md`
- [ ] `compile.sh` / Makefile helper checked in
- [ ] Git habit: first chapter commit made

### Ch 0–2 — Notes, computers, hello world
- [ ] Read ch 0–2
- [ ] `ch02_hello/` drill done
- [ ] `notes.md` written

### Ch 3 — Objects, types, values (wk 2–3)
- [ ] Read + drill
- [ ] Half the exercises done

### Ch 4 — Computation (wk 3–4)
- [ ] Read + drill
- [ ] Half the exercises done

### Ch 5 — Errors (wk 4–5) — slow, read deliberately
- [ ] Read + drill (debugging, pre-/post-conditions, testing)
- [ ] Half the exercises done

### Ch 6–7 — Calculator project (wk 5–7) — MILESTONE 1
- [ ] Ch 6 drill (token/parser)
- [ ] Ch 7 completion: negative numbers, remainder, vars
- [ ] Final version redone from scratch once
- [ ] Exercises from both chapters done (half)

### Ch 8 — Functions, headers, namespaces (wk 7–8)
- [ ] Read + drill
- [ ] Half the exercises done

### Ch 9 — Classes (wk 8–9) — MILESTONE 2
- [ ] Read + drill
- [ ] Date class with invariants
- [ ] Half the exercises done

---

## Phase B — Input/Output (wk 9–10)

### Ch 10 — I/O streams
- [ ] Read + drill (files, error handling, user-defined <<)
- [ ] Half the exercises done

### Ch 11 — Customizing I/O
- [ ] Read + drill (formatting, string streams, stringstreams)
- [ ] Half the exercises done

> **Skipped:** ch 12–16 (FLTK graphics) — revisit later if desired.

---

## Phase C — Data & Algorithms (wk 11–17)

### Ch 17 — Vector and free store
- [ ] Read + drill (pointers, destructors, `this`)
- [ ] Half the exercises done

### Ch 18 — Vectors and arrays
- [ ] Read + drill (copying, essential operations, arrays)
- [ ] Half the exercises done (incl. palindrome)

### Ch 19 — Vector, templates, exceptions
- [ ] Read + drill (templates, range checking, RAII)
- [ ] Half the exercises done

### Ch 20 — Containers and iterators
- [ ] Read + drill (STL ideals, iterators, linked list, text editor)
- [ ] Half the exercises done

### Ch 21 — Algorithms and maps — MILESTONE 3
- [ ] Read + drill (`find`, `find_if`, function objects, sort, maps)
- [ ] Half the exercises done
- [ ] Intro to smart pointers: `std::unique_ptr`, `std::shared_ptr`

---

## Phase D — Selective finish (wk 18–19)

### Ch 23 — Text manipulation
- [ ] Read + drill (strings, regex search/match)
- [ ] Half the exercises done

### Ch 26 — Testing
- [ ] Read (designing for testability, debugging, performance)

> **Skipped:** ch 22 (history — optional read), ch 24 (numerics), ch 25 (embedded), ch 27 (C)

---

## Bridge to junior (after book spine, ~month 5+)

### Modern C++ (C++17/20)
- [ ] RAII + smart pointers everywhere
- [ ] `std::optional`, `std::variant`, `std::string_view`
- [ ] Structured bindings, lambdas, `if constexpr`
- [ ] Move semantics / rvalue references

### Tooling
- [ ] CMake project: executable + library + tests (`ctest`/a unit test framework)
- [ ] Git workflows: branches, PRs, rebasing

### DSA practice (~100 problems in C++)
- [ ] Arrays / strings
- [ ] Linked lists / stacks / queues
- [ ] Trees / graphs
- [ ] Hashing / sets / maps
- [ ] Sorting / searching
- [ ] Recursion / DP + Big-O reasoning

### Portfolio (1–2 projects)
- [ ] Extend ch 20 text editor OR CLI tool OR small database
- [ ] Second project using CMake + modern C++ + tests

### Interview prep
- [ ] C++ trivia: references vs pointers, RAII, stack vs heap, containers
- [ ] Mock interviews / whiteboard timing

---

## At-a-glance timeline
| Phase | Chapters | Est. | Complete? |
|---|---|---|---|
| A | 2–9 | ~9 wks | [ ]
| B | 10–11 | ~2 wks | [ ]
| C | 17–21 | ~7 wks | [ ]
| D | 23, 26 | ~2 wks | [ ]
| Bridge | modern C++ + DSA + projects | ~3–4 mo | [ ]