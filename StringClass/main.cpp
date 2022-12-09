#include "MyString.h"

#include <iostream>

int main()
{
    MyString s1;
    MyString s2(s1);
    MyString s3(std::move(s2));
};
