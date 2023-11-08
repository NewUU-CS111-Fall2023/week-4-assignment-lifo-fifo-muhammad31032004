#include <iostream>
using namespace std;
int towerOfHanoi(int n) {
    if (n == 1) {
        return 1;
    }

    return 2 * towerOfHanoi(n - 1) + 1;
}

int main() {
    int n = 8;
    int minMoves = towerOfHanoi(n);
    cout << minMoves << endl;

    return 0;
}