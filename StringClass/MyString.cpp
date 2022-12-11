#include "MyString.h"

#include <iostream>

MyString::MyString()
    :_lenght(0)
{
    str = new char[0];
    str[0] = '\0';
    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString( MyString & src)
    : _lenght (src._lenght)
    , str()
{
    str = new char[_lenght + 1];                           //выделили память для "src"
    strcpy (str, src.str);                                 //копируем "str" -> "src"
    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && per)
    :_lenght(per._lenght)
     ,str(per.str)
{
    per._lenght = 0;
    per.str = nullptr;
    std::cout <<"Konstruktor Peremesheniya" <<std::endl;

}

MyString::MyString(const char * Cstr)
{
    _lenght = strlen(Cstr);
    str = new char [_lenght +1];
    strcpy(str, Cstr);

    std::cout <<"Konstruktor C-string"<<Cstr <<std::endl;

}



void MyString::push_back(char)
{
    std::string str1 = "Strin";
    str1.push_back('g');

    std::cout<<"It's Pushback Strin + g --> : "<<str1 <<std::endl;

}

char &MyString::operator[](size_t str1)
{
    if(str1 < _lenght){
        return str[str1];
    }
    return str[str1];
}


/*void MyString::strcat()
{
    std::string str01 = "str";
    std::string str2 = "in";



};*/



MyString::~MyString()
{
    delete[] str;
}

const char* MyString::c_str()
{
    return str;
}


