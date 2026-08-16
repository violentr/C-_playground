# C++ Junior Roadmap — *A Tour of C++, 3rd ed.*

Goal: junior C++ programmer. Match the physical book's chapter numbering.

---

## Phase 0 — Foundations (Ch 1–2)

### Ch 1. The Basics
- Must know 100%: initialization forms (`=`, `()`, `{}`), narrowing, `const` vs `constexpr`, `auto`, scope/lifetime, references vs pointers, range-for, integer division, pass-by-value vs reference.
- Good to know: §1.9 mapping to hardware (sizes, alignment), the "Advice" boxes.

### Ch 2. User-Defined Types
- Must know: `struct` vs `class` (default access!), member functions, `enum`/`enum class` (why `enum class` is preferred), constructors.
- Good to know: `union` (§2.5) — rarely used, skim it.

---

## Phase 1 — Core Mechanics (Ch 3–6)

### Ch 3. Modularity
- Must know: header/source split, `#include` guards vs `#pragma once`, namespaces, `declaration` vs `definition`, `&`/`&&` parameters, `const` in signatures.
- Good to know: modules (C++20, §3.2.3) — be aware of them, not yet standard everywhere in industry.

### Ch 4. Error Handling
- Must know: exceptions (`try`/`throw`/`catch`), invariants, RAII-for-error-cleanup, `static_assert`, `assert`.
- Good to know: error codes vs exceptions trade-offs (§4.4).

### Ch 5. Classes
- Must know: concrete types, constructors/destructors, access control, default vs user-defined behavior.
- Good to know: `const` member functions and `mutable`.

### Ch 6. Essential Operations
- Must know: copy/move semantics, destructors, rule of five/zero, `std::move`, when the compiler generates these implicitly. This is the chapter that separates juniors who "get" C++ from those who don't.
- Good to know: `=default` vs `=delete`, lvalue/rvalue intuition.

---

## Phase 2 — Generic Programming (Ch 7–8)

### Ch 7. Templates
- Must know: function/class templates, type deduction, why templates exist (no runtime cost).
- Good to know: variadic templates (§7.4) — heavy, revisit later.

### Ch 8. Concepts & Generic Programming
- Must know: what `requires`/concepts do at a reading level.
- Good to know: full concept syntax — most juniors don't write these daily; recognize them.

---

## Phase 3 — The Standard Library (Ch 9–14) ★ junior's bread and butter

- **Ch 9. Library Overview** — skim, know the structure.
- **Ch 10. Strings & Regex** — must know `std::string` + `std::string_view`; regex good-to-know.
- **Ch 11. Input/Output** — must know: `cout`/`cin`, files, `getline`, format strings. C-style I/O: good-to-know.
- **Ch 12. Containers** — must know cold: `vector`, `map`, `unordered_map`, `list`, `forward_list`, when to pick which (complexity). Allocators: skip.
- **Ch 13. Algorithms** — must know: `<algorithm>` with iterators, `sort`, `find`, `count_if`, lambdas as predicates, range-for over them.
- **Ch 14. Ranges** — good-to-know at junior level (C++20, increasingly asked in interviews).

---

## Phase 4 — Beyond the Tour (Ch 15+)

- Ch 15 Pointers & Containers, Ch 16 Utilities, Ch 17 Numerics, Ch 18 Concurrency — read for awareness; **concurrency** becomes important for mid-level.
- Ch 19 History — skim once.

---

## How we work (our standard loop)

1. You read a section, then **you** type a tiny program that exercises it in `C-_playground`.
2. You report compiler/runtime behavior; I explain the *why* (Socratic).
3. I review your code (style, correctness, idioms) — you make the fixes.
4. After Phase 3 you'll be interview-able as a junior; we'll add a mini-project then.
