#include <iostream>
#include <memory>
using namespace std;

class MyClass {
    int size;
    unique_ptr<int[]> data;
public:
    MyClass(int s) : size(s), data(make_unique<int[]>(s)) {
        for (int i = 0; i < size; ++i) data[i] = i + 1;
    }

    MyClass(const MyClass& other) : size(other.size), data(make_unique<int[]>(other.size)) {
        for (int i = 0; i < size; ++i) data[i] = other.data[i];
    }

    void print() const {
        for (int i = 0; i < size; ++i) cout << data[i] << ' ';
        cout << '\n';
    }
};

int main() {
    MyClass a(5);
    a.print();

    MyClass b = a;
    cout << "-----COPY-----\n";
    b.print();
}
