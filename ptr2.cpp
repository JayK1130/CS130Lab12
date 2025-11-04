#include <iostream>
using namespace std;

int* myfn() {
    int num = 100;
    int* ptr = new int;
    *ptr = num;
    cout << "In the function: " << *ptr << endl;
    return ptr;
}

int main() {
    int* ptr = myfn();
    cout << "In main: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
