#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    if ((N < 1) || (N > 100)) {
        return 0;
    }

    int A[N], B[N], result[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        if ((A[i] < 2) || (A[i] > 130) || (B[i] < 2) || (B[i] > 1000000000000000)) {
            return 0;
        } else {
            int n = 0;
            while (A[i] < B[i]-1) {
                A[i]++;

                bool status = true;

                for (int j = 2; j < A[i]; j++) {
                    if (A[i] % j == 0) {
                        status = false;
                    }
                }

                if (status) {
                    n++;
                }
            }
            result[i] = n;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
