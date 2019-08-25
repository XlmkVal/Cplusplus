#include<iostream>
#include<string>

int main() 
{
    std::cout << "hello";
    int n = 0;
    std::string name = "";
    while(std::cin){
        std::string temp;
        std::cin >> temp;
        name.append(temp);
        if(temp == "-"){
            break;
        }
    }
    std::cout << name << std::endl;
    return 0;
}