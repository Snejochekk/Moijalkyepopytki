#include "MyString.h"

#include <iostream>

std::ostream &operator<<(std::ostream &outs, const MyString &copy);

int main()
{
    MyString s1;
    MyString s2(s1);
    MyString s3(std::move(s2));
    MyString s4("String");
    s1.append(s4);
    s1.Iterator(s4);
    s1.push_back('g');
/*    s1.push_back('q');*/
    for(size_t i= 0; i < s1.lenght(); ++i){
    std::cout<<"Operator po []" <<s1[i] <<std::endl;
    }

//    std::cout<<s1 <<std::endl;
};

