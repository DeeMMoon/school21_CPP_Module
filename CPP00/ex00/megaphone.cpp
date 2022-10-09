#include <iostream>
#include <string>

int main (int argc, const char **argv)
{
   int i;
   size_t j; 
   std:: string str;
   if (argc == 1)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        
        for (i = 1; i < argc; i++)
        {
            str = argv[i];
            for (j  = 0; j < str.length(); j++)
                std::cout << (char)std::toupper(str[j]);
            
        }
        std::cout << std::endl;
    }
    return (0);
}
