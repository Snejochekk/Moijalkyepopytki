#include "MyString.h"

#include <iostream>

int main()
{
    MyString s1;
    MyString s2(s1);
    MyString s3(std::move(s2));
    MyString s4(" Cu-cmpoka");
    s1.push_back('g');
    std::cout<<s1[0] <<std::endl;

};

