#include "toml11/toml.hpp"
#include <iostream>

int main()
{
    auto data = toml::parse("issue128.toml");
    auto tests = toml::find<std::vector<toml::table>>(data, "test");
    for(auto& test : tests)
    {
        std::cout << test["name"] << std::endl;
    }
    return 0;
}
