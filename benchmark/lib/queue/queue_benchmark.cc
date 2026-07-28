#include "benchmark/benchmark.h"

extern "C" {
#include "lib/queue/queue.h"
}

static void BM_PrintHelloWorld(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    printHelloWorld();
  }
}

BENCHMARK(BM_PrintHelloWorld);

BENCHMARK_MAIN();