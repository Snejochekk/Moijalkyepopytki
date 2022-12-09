#include "MyString.h"

#include <iostream>

MyString::MyString()
{
    _lenght = 0;
    str = new char[1];
    str = nullptr;
    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString(const MyString &src)
{
    _lenght = src._lenght;
    str = new char[_lenght + 1];
    std::string strcpy (str, src.str);
    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && src)
    :_lenght(src._lenght)
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
//    scr._size = 0;
//    scr._lenght = 0;
//    scr._data = nullptr;
//}
//

MyString::~MyString()
{
    delete[] str;
}


