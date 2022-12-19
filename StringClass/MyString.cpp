#include "MyString.h"

#include <iostream>
#include <cstring>

MyString::MyString()
    :_lenght(0)
    , _cap(0)
    , _mem(nullptr)
{
    _mem = new char[0];
    _mem[0] = '\0';
//    std::cout << "konstruktor bez parametrov" <<std::endl;
}

MyString::MyString( MyString & copy)
    : _lenght (copy._lenght)
    , _cap(copy._cap)
{
    _mem = new char[copy._cap + 1];
    strncpy (_mem, copy._mem, _lenght * sizeof (char));
//    std::cout << "Konstruktor kopirovaniya" << std::endl;
}


MyString::MyString(MyString && copy)
    :_lenght(copy._lenght)
    ,_cap(copy._cap)
     ,_mem(copy._mem)
{
    copy._lenght = 0;
    copy._cap = 0;
    copy._mem = nullptr;
//    std::cout <<"Konstruktor Peremesheniya" <<std::endl;

}

MyString::MyString(const char *copy)
{
    _lenght = strlen(copy);
    _mem = new char [_lenght +1];
    strcpy(_mem, copy);

//    std::cout<<"C-" <<copy <<std::endl;

}



void MyString::push_back(char ch)
{
    if(_cap <= _lenght) {
        _cap = _cap * 2 + 1;
        char* nmem = new char[_cap];
        strncpy(nmem, _mem, _lenght * sizeof (char));
        delete[] _mem;
        _mem = nmem;
    }
    _mem[_lenght] = ch;
    ++ _lenght;
//    std::cout<< "MyString::" <<__FUNCTION__ <<"-->"<<ch  <<std::endl;
}

const char &MyString::operator[](size_t ind)
{
    if(ind < _lenght){
        return _mem[ind];
}
    return 0;
}

std::ostream &operator<<(std::ostream &outs, const MyString &copy){
    outs << copy._mem;
    return outs;
}

void MyString::append(const MyString &copy)
{
    _lenght += copy._lenght;
    char *nmem = new char[_lenght + 1];
    std::strcpy(nmem, _mem);
    std::strcat(nmem, copy._mem);
    delete [] _mem;
    _mem = nmem;
}

MyString::~MyString()
{
    delete[] _mem;
}

const char* MyString::c_str()
{
    return _mem;
}


