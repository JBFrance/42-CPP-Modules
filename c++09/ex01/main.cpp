#include "RPN.hpp"

#include "RPN.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
	{
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    RPN::calculate(argv[1]);
    return 0;
}
