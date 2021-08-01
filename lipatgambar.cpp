#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int P[N], Q[N], M[N];

    for (int i = 0; i <N; i++) {
        cin >> P[i] >> Q[i] >> M[i];
        while(M[i] > 0) {
            if (P[i] > Q[i]) {
                P[i] /= 2;
            } else {
                Q[i] /= 2;
            }
            M[i]--;
        }
    }

    for (int i = 0; i < N; i++) {
        if (P[i] > Q[i]) {
            cout << P[i] << " " << Q[i] << endl;
        } else {
            cout << Q[i] << " " << P[i] << endl;
        }
    }
}
