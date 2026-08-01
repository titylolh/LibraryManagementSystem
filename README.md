# 🚀 Library Management System

This project will be a deep dive into some of the fundamental concepts that we have lost since AI became part of our daily lives.
I am creating this project with the intention of documenting all my struggles and challenges throughout the journey. Perhaps I'll build a library management system in C using threads and implement several libraries from scratch. For example, I'll create my own database, stacks, queues, and many other data structures and utilities.

## 📸 Demo

> 🚧 Not done yet.

## 📋 Prerequisites

This project uses **Bazel** as the build system and is designed to work in different operating systems.

Make sure you have the following tools installed:

- **Bazel**
- **C/C++ compiler** (GCC or Clang)
- **Clang / clang-tidy**
- **Valgrind** (optional, for memory checking)

> Having build issues? See `TROUBLESHOOTING.md`.

## 📦 Installation

Clone the repository:

```bash
git clone https://github.com/titylolh/LibraryManagementSystem.git
cd LibraryManagementSystem
```

## 🛠 Usage

### Build

```bash
bazel build //src/main:LibraryManagementSystem
```

### Run

```bash
bazel run //src/main:LibraryManagementSystem
```

### Run all tests

```bash
bazel test //...
```

### Run clang-tidy

```bash
bazel build //src/main:LibraryManagementSystem --config=lint
```

### Format the code

```bash
bazel run //tools/format
```

## 🔍 Valgrind

Valgrind is used to detect memory leaks and memory-related issues.

### Build in Debug Mode

Before running Valgrind, build the project in debug mode:

```bash
bazel build \
  --compilation_mode=dbg \
  //src/main:LibraryManagementSystem
```

Use valgrind to check for memory leaks:

``` bash
valgrind \
  --leak-check=full \
  --track-origins=yes \
  bazel-bin/src/main/LibraryManagementSystem
```

### Run Valgrind Tests

Run the leak test:

```bash
bazel test \
  --compilation_mode=dbg \
  --test_output=all \
  --run_under="valgrind --leak-check=full --error-exitcode=1" \
  //tests/tools/valgrind:leak_test
```

View the Valgrind output:

```bash
cat bazel-testlogs/tests/tools/valgrind/leak_test/test.log
```

> **Note:** This test intentionally leaks memory, so it is expected to fail when run with Valgrind.

## 📊 Benchmarks

Benchmarks are used to measure the performance of the library and compare changes over time. They help identify performance regressions and evaluate the impact of optimizations.

Run a benchmark:

```bash
bazel run //src/benchmark:queue_benchmark
```

## 🚩 Feature Flags

The project uses Bazel build settings to enable or disable experimental features at build time.

Build the application with the custom queue implementation:

```bash
bazel build //src/main:LibraryManagementSystem --//:circular=true
```

Run the application with the custom queue implementation:

```bash
bazel run //src/main:LibraryManagementSystem --//:circular=true
```

## 🧰 Tech Stack

* C
* Bazel
* GoogleTest
* GoogleBenchmark
* Valgrind

## 📄 License

MIT License <br>
See `LICENSE` file for details.