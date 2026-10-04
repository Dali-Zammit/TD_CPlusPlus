#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <string>

class my_class
{
private:
    std::string text;

public:
    my_class();
    my_class(std::string value);

    void imprime();
};

#endif