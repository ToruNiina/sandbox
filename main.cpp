#include <iostream>
#include "toml11/toml.hpp"

int main()
{
    const toml::value v{42, 54, 69, 72};
    const auto ary = toml::get<std::array<int, 4>>(v);
    return 0;
}
