#include <time.h>
#include <iostream>
#include <exception>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base* generate(void) {
    Base* p = NULL;
    srand(time(NULL));
    int rannum = rand() % 3;
    if (rannum == 0)
        p = new A;
    else if (rannum == 1)
        p = new B;
    else
        p = new C;
    return p;
};

void identify(Base* p) {
    std::cout << "ptr identify: ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "UNKNOWN" << std::endl;
};

void identify(Base& p) {
    std::cout << "ref identify: ";
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (...) {
    }
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (...) {
    }
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (...) {
    }
};

int main() {
    Base* p = generate();
    identify(p);
    identify(*p);
    return 0;
}