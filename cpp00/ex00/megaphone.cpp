#include <iostream>
#include <string>

int main(int argc, char const** argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string contents(argv[i]);
            size_t len = contents.length();
            for (size_t j = 0; j < len; j++)
                contents[j] = std::toupper(contents[j]);
            std::cout << contents;
        }
    }
	return (0);
}