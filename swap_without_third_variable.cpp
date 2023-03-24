#include <iostream>

int main() {
    int num1,num2;
    std::cin>>num1;
    std::cin>>num2;

    num1 = num1+num2;
    num2= num1-num2;
    num1=num1-num2;

    std::cout<<"num1="<<num1;
    std::cout<<"num2="<<num2;

    return 0;
}
