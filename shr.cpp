#include <iostream>
#include <memory>

int main() {
    int num = 100;
    std::shared_ptr<int> ptr1 = std::make_unique<int>(num);

    std::shared_ptr<int> ptr2;
    ptr2 = ptr1;

    std::cout << "ptr1: " << *ptr1 << std::endl;
    std::cout << "ptr2: " << *ptr2 << std::endl;
    std::cout << "Reference count: " << ptr1.use_count() << std::endl;

    int *ptr;
    ptr = new int;
}