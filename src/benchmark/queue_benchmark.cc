#include "benchmark/benchmark.h"

extern "C" {
#include "src/lib/queue/queue.h"
}

static void BM_PrintHelloWorld(benchmark::State& state) {
  for (auto _ : state) {
    printHelloWorld();
    benchmark::ClobberMemory();
  }
}
BENCHMARK(BM_PrintHelloWorld);

BENCHMARK_MAIN();
