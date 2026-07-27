#include <gtest/gtest.h>

extern "C" void leak(void);

TEST(ValgrindTest, DetectLeak) {
    leak();
}