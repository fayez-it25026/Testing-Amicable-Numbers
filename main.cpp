#include <bits/stdc++.h>
using namespace std;

int sumDiv[100001];

int main() {
    for (int i = 1; i <= 100000; i++) {
        for (int j = 2 * i; j <= 100000; j += i) {
            sumDiv[j] += i;
        }
    }

    int L, R;

    while (cin >> L >> R) {
        if (L == 0 && R == 0)
            break;

        int ans = 0;

        for (int a = L; a <= R; a++) {
            int b = sumDiv[a];

            if (b > a && b <= R && sumDiv[b] == a) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}