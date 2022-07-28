#include "uf.h"

// implement uf
uf::uf(int n) {
    component_count = n;
    parent.resize(n);
    size.resize(n);

    // Each component points to itself
    // Each component has size 1
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        size[i] = 1;
    }
}

uf::~uf() {
    // ensures delection of vector
    std::vector<int>().swap(parent);
}

void uf::connect(int a, int b) {
}

int uf::find(int a) {
    return 0;
}

bool uf::is_connected(int a, int b) {
    return find(a) == find(b);
}

int uf::count() {
    return component_count;
}
