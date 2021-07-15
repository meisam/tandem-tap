#include <iostream>
#include <ranges>

#include "gtest/gtest.h"

#include "include/tandem-tap.h"

TEST(test_cpp20, ranges) {
    auto const ints = {0,1,2,3,4,5};
    auto even = [](int i) { return 0 == i % 2; };
    auto square = [](int i) { return i * i; };
 
    // "pipe" syntax of composing the views:
    for (int i : ints | std::views::filter(even) | std::views::transform(square)) {
        std::cout << i << ' ';
    }
 
    std::cout << '\n';
 
    // a traditional "functional" composing syntax:
    for (int i : std::views::transform(std::views::filter(ints, even), square)) {
        std::cout << i << ' ';
    }
}

TEST(test_lbt_connect, zero_renurn_code) {
  std::cout << lbt_connect() << std::endl;
  EXPECT_EQ(lbt_connect(), 10);
}
