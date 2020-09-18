#include <iostream>

int main()
{
    const auto* chars = u8"ひらがな";

    while(*chars != '\0')
    {
        const unsigned int c(*chars);
        std::cout << std::hex << c << std::endl;
        ++chars;
    }

    return 0;
}
