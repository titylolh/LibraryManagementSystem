#include <gtest/gtest.h>

extern "C" {
#include "lib/queue/queue.h"
}

TEST(QueueTest, PrintHelloWorldRuns) {
    printHelloWorld();
    EXPECT_STRNE("hello", "world");
    SUCCEED();
}
