#include "bd.hpp"
#include "ac.hpp"

namespace exercise {

B::B() {}
B::B(int) {}

void B::clear() {
    a.clear();
    b = nullptr;
    c = nullptr;
    d = nullptr;
}

bool B::has_any() const {
    return a.has_any() || c || d;
}

B create_b() {
    return {};
}

D create_d() {
    return {};
}

}  // namespace exercise
