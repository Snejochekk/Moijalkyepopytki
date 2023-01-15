#include <algorithm>
#include <cctype>
#include <chrono>
#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <sstream>

int main()
    {
    system("chcp 1251"); // смена кодировки, если файл в кодировке cp1251
    system("chcp 65001"); // смена кодировки, если файл в кодировке utf-8
    system("cls"); // очистить экран

    auto start = std::chrono::steady_clock::now();

    const std::string fileName = ("C:/Users/u/Documents/qt/st/MyFile_txt/demo.txt");

    std::ifstream file(fileName);
    std::string word;
    std::unordered_map <std::string, int> dict;

    if(file.fail())
    {
        std::cerr<<"File can`t be opened" <<std::endl;
        return 1;
    }

    while(file>>word)
    {
        std::transform(
        word.begin(),
        word.end(),
        word.begin(),
        tolower);

        word.erase(std::remove_if(
        word.begin(),
        word.end(),
        ispunct),
        word.end());

//        std::istringstream stream(word);
//        std::string word2;
//
//        while(stream >> word2)
//        {
//            ++dict[word2];
//        }
        if(!word.empty())
        {
        ++dict[word];
        }
    }

auto end = std::chrono::steady_clock::now();
auto duration = std::chrono::duration_cast
             <std::chrono::milliseconds>(end-start);

    std::string userInput;
    do{
        std::cout<< "the search word: ";
        std::cin>> userInput;
        std::cout<< userInput <<" : " <<dict[userInput]
                 <<" times. " <<duration.count() <<" ms." <<std::endl;
    }
    while(userInput != "quit");



//    for(const auto &[key, value]: dict)
//        {
//        std::cout << key <<":" <<value <<std::endl;
//        }
    file.close();



    return 0;
}




