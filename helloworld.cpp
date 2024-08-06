#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    int width;
    width = 5; // 将值 5 拷贝赋值到变量 width

    std::cout << width << std::endl; // 打印出 5

    width = 7; // 将width中的值改变为 7

    std::cout << width << std::endl; // 打印出 7

    // int height(10);
    // int height2{20};
    // int height3{0};
    // int height4{};

    int a, b( 5 );
    int c, d{ 5 };
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;


    // std::cout << "Enter a number: ";
    // int x{ };
    // std::cin >> x; // 从键盘中读取一个数字，并保存到变量x中
    // std::cout << "You entered " << x << std::endl;

    std::cout << "Enter two numbers separated by a space: ";
    int x{ };
    int y{ };
    std::cin >> x >> y; // 读入两个数字并且按顺序在变量x和y中
    std::cout << "You entered " << x << " and " << y << std::endl;

    return 0;
}