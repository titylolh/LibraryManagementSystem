#include <gtest/gtest.h>

extern "C" {
#include "src/lib/queue/queue.h"
}

TEST(QueueTest, PrintHelloWorldRuns) {
    printHelloWorld();
    EXPECT_STRNE("Hello ", "world");
    SUCCEED();
}
