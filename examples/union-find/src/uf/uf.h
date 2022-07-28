#pragma once
#include <vector>

class uf
{
private:
    /* data */
    int component_count;
    std::vector<int> size;
    std::vector<int> parent;

public:
    uf(int n);
    ~uf();

    void connect(int a, int b);
    bool is_connected(int a, int b);
    int find(int a);
    int count();
};
