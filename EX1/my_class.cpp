#include <iostream>
#include "my_class.h"

my_class::my_class()
{
    text = "";
}

my_class::my_class(std::string value)
{
    text = value;
}

void my_class::imprime()
{
    std::cout << text << std::endl;
}