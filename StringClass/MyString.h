#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstdlib>
#include <cstring>
#include <ostream>

class MyString
{
public:
    MyString();
    MyString(MyString& copy);
    MyString(MyString&& copy);
    MyString(const char* copy);
    ~MyString();

    size_t lenght() {return _lenght;};
    size_t cap() {return _cap;};
    const char *c_str();

void push_back(char);
const char & operator[](size_t ind);

void Iterator(MyString &copy);

void append(const MyString &copy);
friend std::ostream &operator<<(std::ostream &os, const MyString &copy);

private:
    size_t _lenght;
    size_t _cap;
    char *_mem;
};



#endif // MYSTRING_H
