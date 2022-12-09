#include "MyString.h"

#include <iostream>

MyString::MyString()
    :_lenght(0)
{
    str = new char[1];
    str[0] = '\0';
    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString( MyString & src)
    : _lenght (src._lenght)
    , str()
{
    str = new char[_lenght + 1];
    strcpy (str, src.str);
    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && per)
    :_lenght(per._lenght)
     ,str(per.str)
{
    per.str = nullptr;
    std::cout <<"Konstruktor Peremesheniya" <<std::endl;

}

MyString::MyString(const char * Cstr)
{
    _lenght = strlen(Cstr);
    str = new char [_lenght +1];


    std::cout <<"Konstruktor C-string" <<std::endl;

}


MyString::~MyString()
{
    delete[] str;
}


