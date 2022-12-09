#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstdlib>
#include <cstring>

class MyString
{
public:
    MyString();
    MyString(const MyString& str);
    MyString(MyString&& );
    MyString(const char*);
    ~MyString();

  //  std::size_t lenght();

//
//    void push_back(const char);
//    char & operator[](int);

//
//
private:
    std::size_t _lenght;
    const char* str;
//
//
};
//


#endif // MYSTRING_H
