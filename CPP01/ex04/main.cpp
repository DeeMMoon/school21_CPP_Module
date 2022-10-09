#include <iostream>
#include <string>
#include <fstream>

int replace(std::string file_in, std::string str1, std::string str2)
{
    std::ifstream input;
    std::ofstream output;
    std::string file_out;
    std::string buff;
    std::string tmp;
    size_t i;

    input.open(file_in);
    if (!input.is_open())
    {
        std::cout << "Error can't open file"<< std::endl;
        exit(1);
    }
    file_out = file_in + ".replace";
    output.open(file_out);
    if (!input.is_open())
    {
        std::cout << "Error can't open file"<< std::endl;
        exit(1);
    }
    while (std::getline(input, buff))
    {
        i = 0;
        while (i < buff.length()) {
            tmp = &buff[i];
            tmp = tmp.substr(0, str1.length());
            if (!tmp.find(str1)) {
                output << str2;
                i += str1.length() - 1;
            } else
                output << buff[i];
            i++;
        }
        if (!input.eof())
            output << '\n';
        }
    return (0);
}

int main(int argc, char **argv)
{
    std::ifstream input;
    std::ofstream output;
    if (argc != 4)
    {
        std::cout << "Error counts of arguments"<< std::endl;
        return(1);
    }
    replace(argv[1], argv[2], argv[3]);
    return (0);
}
