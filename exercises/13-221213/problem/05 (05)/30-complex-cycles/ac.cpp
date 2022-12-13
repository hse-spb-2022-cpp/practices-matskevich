namespace exercise {

struct A {
    A *a = nullptr;
    B *b = nullptr;
    C *c = nullptr;
    D *d = nullptr;

    A() {}
    A(int) {}

    void clear() {
        if (b) {
            b->clear();
        }
        a = nullptr;
        b = nullptr;
        c = nullptr;
        d = nullptr;
    }

    bool has_any() const {
        return a || b || c || d;
    }
};

struct C {
    A a;
    B b;
    C *c = nullptr;
    D *d = nullptr;
};

A create_a() {
    return {};
}

C create_c() {
    return {};
}

}  // namespace exercise
