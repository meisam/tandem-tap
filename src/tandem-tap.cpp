#include <iostream>

#include "include/tandem-tap.h"

template<typename... Args>
auto all(Args... args) -> int { return (... + args); }


auto lbt_connect() -> int {
    auto sum = all(1, 2, 3, 4);
    std::cout << "Appliciation is connecting..." << sum << std::endl; 
    return sum;

}
