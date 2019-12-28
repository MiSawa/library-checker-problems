#include <iostream>
#include "random.h"

using namespace std;

int main(int, char* argv[]) {

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = 500'000;
    int m = 500'000;
    cout << "p cnf " << n << " " << m << "\n";
    for (int i = 0; i < m; i++) {
        int a = 0, b = 0;
        while (!a) a = gen.uniform(-n, n);
        while (!b) b = gen.uniform(-n, n);
        cout << a << " " << b << " 0\n";
    }
    return 0;
}
