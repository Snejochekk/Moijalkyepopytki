#include "MyString.h"

#include <iostream>
#include <cstring>

MyString::MyString() : _lenght(0)
{
    _str = new char[1];
    _str[0] = '\0';
    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString(const MyString &src)
{
    _lenght = src._lenght;
    _str = new char[_lenght + 1];
     strcpy (_str, src._str);
    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && src)
    :_lenght(src._lenght)
     ,_str(src._str)
{
    src._lenght = 0;
    src._str = nullptr;
    std::cout <<"Konstruktor Peremesheniya" <<std::endl;

}

MyString::MyString(const char * Cstr)
{
    _lenght = strlen(Cstr);
    _str = new char[_lenght + 1];
     strcpy (_str, Cstr);
    std::cout <<"Konstruktor C-string" <<std::endl;
}

MyString::~MyString()
{
    delete[] _str;
}


