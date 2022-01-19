#include <cstdint>
#include <iostream>

struct Data {
    int i;
    char b;
};

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

int main(void) {
    Data A;
    A.i = 1;
    A.b = 'c';

    uintptr_t address = serialize(&A);
    Data* result = deserialize(address);

    std::cout << result->i << "\n"
              << result->b << std::endl;

    std::cout << "data1 address: " << &A << "\n"
              << "data2 address: " << result << "\n"
              << std::endl;
    return 0;
}