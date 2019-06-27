#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int abs(int n) {
    return n > 0 ? n : 0 - n;
}

int main() {
    int n, pairs = 0, space[2] = {0, 0}, current = 0;

    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            space[current] = i;
            current = 1 - current;
            if(abs(space[0] - space[1]) == 2 && space[1] && space[0]) {
                pairs++;
            }
        }
    }

    printf("%d", pairs);

    return 0;
}
