#include <iostream>

int main() {
    int *ptr;
    int num = 100;
    ptr = &num;
    std::cout << *ptr << std::endl;

    num = 200;
    int *ptr2;
    ptr2 = ptr;
    std::cout << *ptr2 << std::endl;
    delete ptr;
    std::cout << *ptr << std::endl;


    
    return 0;
}