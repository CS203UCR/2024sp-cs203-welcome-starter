#include <fstream>
#include <iostream>

int fib(int x);

int main(int argc, char *argv[])
{
    int x;
    std::ofstream ofs ("hello.txt", std::ofstream::out);
    ofs << "Hello CS203! My e-mail address is \n";
    ofs << "The "<< x << "th fibonacci number is "<< fib(x) <<"\n";
    ofs.close();
    std::cout << "Execution Complete" << std::endl;
    return 0;  
}

int fib(int x)
{
    return 0;
}