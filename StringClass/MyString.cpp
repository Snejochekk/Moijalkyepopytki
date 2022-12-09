#include "MyString.h"

#include <iostream>

MyString::MyString()
{
    _lenght = 0; // Move it to initializers list
    str = new char[1]; // Memory allocation for '\0' symbol
//    str = nullptr; // What the reason  ? This operation undoes previous one!
    str[0] = '\0'  // Place the end of string
    
    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString(const MyString &src)
{
    _lenght = src._lenght;  // Move it to initializers list
    str = new char[_lenght + 1];
    std::string strcpy (str, src.str);
    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && src)
    :_lenght(src._lenght) // Greate! 
     ,str(src.str)
{
    src._lenght = 0;
    src.str = nullptr;
    std::cout <<"Konstruktor Peremesheniya" <<std::endl;

}

MyString::MyString(const char * Cstr)
{
    _lenght = strlen(Cstr);
    str = new char [_lenght +1];
    std::string strcpy(str, Cstr);
    std::cout <<"Konstruktor C-string" <<std::endl;
}

MyString::~MyString()
{
    delete[] str;
}


