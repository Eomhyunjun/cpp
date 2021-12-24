#include <iostream>
#include <string>
#include <fstream>

void replace(std::string &f_name, std::string &s1, std::string &s2)
{
    std::ifstream f_read;
    std::ofstream f_write;
    std::string f_out_name = f_name;
    int s_length = s1.length();


    f_read.open(f_name);
    if (f_read.fail())
    {
        std::cout << "error : 파일 읽기를 실패했습니다" << std::endl;
        return ;
    }

    f_out_name.append(".replace");
    f_write.open(f_out_name);
    if (f_write.fail())
    {
        std::cout << "error : 파일 쓰기를 실패했습니다." << std::endl;
        f_read.close();
        return ;
    }

    int i = 0;
    std::string buf;

    while (true)
    {

        std::getline(f_read, buf);
        i = buf.find(s1);
        if (f_read.eof())
        {
            f_write << buf;
            break ;
        }
        else if (i == -1)
        {
            f_write << buf;
            f_write << std::endl;
        }
        else
        {
            f_write << buf.substr(0, i);
            f_write << s2;
            f_write << buf.substr(i + s_length);
            f_write << std::endl;
        }
    }
    f_read.close();
    f_write.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "인자는 파일명, 찾을 문장, 바꿀문장 3개만 입력하셔야 합니다" << std::endl;
    }
    else
    {
        std::string f_name(argv[1]);
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        if (s1.length() == 0 || s2.length() == 0)
        {
            std::cout << "인자값은 비어있으면 안됩니다." << std::endl;
        }
        else
        {
            replace(f_name, s1, s2);
        }
    }
    return (0);
}