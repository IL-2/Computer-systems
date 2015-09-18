#include<iostream>
#include<cstdlib>
#include<cstdio>

using std::cin;
using std::cout;

int findmax(const int* a, int n) {
    int num_max = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[num_max]) num_max = i;
    }

    return num_max;
}
