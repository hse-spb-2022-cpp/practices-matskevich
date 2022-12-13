#include "ac.hpp"

static_assert(sizeof(exercise::D) >= 0);  // (!)

void foo() {
    exercise::create_b();  // (!)
    exercise::create_d();  // (!)
}
