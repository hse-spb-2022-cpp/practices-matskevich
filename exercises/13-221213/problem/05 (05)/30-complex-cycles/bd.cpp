namespace exercise {

struct B {
    A a;
    B *b = nullptr;
    C *c = nullptr;
    D *d = nullptr;

    B() {}
    B(int) {}

    void clear() {
        a.clear();
        b = nullptr;
        c = nullptr;
        d = nullptr;
    }

    bool has_any() const {
        return a.has_any() || c || d;
    }
};

struct D {
    A a;
    B b;
    C c;
    D *d = nullptr;
};

B create_b() {
    return {};
}

D create_d() {
    return {};
}

}  // namespace exercise
