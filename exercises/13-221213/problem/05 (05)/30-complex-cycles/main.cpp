#include "ac.hpp"
#include "bd.hpp"
#include <cassert>

int main() {
    [[maybe_unused]] exercise::A a0;
    [[maybe_unused]] exercise::B b0;
    [[maybe_unused]] exercise::C c0;
    [[maybe_unused]] exercise::D d0;

    [[maybe_unused]] exercise::A a = exercise::create_a();
    exercise::B b = exercise::create_b();
    [[maybe_unused]] exercise::C c = exercise::create_c();
    exercise::D d = exercise::create_d();
    d.a = exercise::A(10);
    d.b = exercise::B(10);
    d.c = exercise::C();
    d.d = &d;

    assert(!b.has_any());
    b.d = &d;
    assert(b.has_any());
}
