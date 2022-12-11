#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstdlib>
#include <cstring>

class MyString
{
public:
    MyString();
    MyString(MyString& src);
    MyString(MyString&& per);
    MyString(const char* Cstr);
    ~MyString();

    std::size_t lenght();
    const char *c_str();

void push_back(char);
char & operator[](size_t(str1));
void strcat(size_t(str1));


//
//
private:
    std::size_t _lenght;
    char *str;
    const char* Cstr;
    char str1;

    //
//
};
//


#endif // MYSTRING_H
