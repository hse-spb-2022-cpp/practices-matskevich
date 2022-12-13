#ifndef ABC_TYPES_HPP_
#define ABC_TYPES_HPP_

#include "abcd_fwd.hpp"

namespace exercise {
struct A {
    A *a = nullptr;
    B *b = nullptr;
    C *c = nullptr;
    D *d = nullptr;

    A();
    A(int);

    void clear();
    bool has_any() const;
};

struct B {
    A a;
    B *b = nullptr;
    C *c = nullptr;
    D *d = nullptr;

    B();
    B(int);

    void clear();
    bool has_any() const;
};

struct C {
    A a;
    B b;
    C *c = nullptr;
    D *d = nullptr;
};
}  // namespace exercise

#endif  // ABC_TYPES_HPP_
