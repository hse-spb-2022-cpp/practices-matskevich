#include "ac.hpp"
#include "bd.hpp"

namespace exercise {

A::A() {}
A::A(int) {}

void A::clear() {
    if (b) {
        b->clear();
    }
    a = nullptr;
    b = nullptr;
    c = nullptr;
    d = nullptr;
}

bool A::has_any() const {
    return a || b || c || d;
}

A create_a() {
    return {};
}

C create_c() {
    return {};
}

}  // namespace exercise
