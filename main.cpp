#include <iostream>

int main()
{
    const auto* chars = u8"ひらがな";

    while(*chars != '\0')
    {
        const unsigned char uc(*reinterpret_cast<const unsigned char*>(chars));
        const unsigned int  c(uc);
        std::cout << std::hex << c << std::endl;
        ++chars;
    }

    return 0;
}
