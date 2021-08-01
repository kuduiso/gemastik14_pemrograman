#include <stdio.h>
using namespace std;

int main() {
    int min, max, A, B, C;
    int total = 0;
    //cin >> min >> max;
    scanf("%d %d", &min, &max);
    scanf("%d %d %d", &A, &B, &C);
    //cin >> A >> B >> C;

    if ((A < 2) && (B < 2) && (C < 2)) {
        return 0;
    }

    for (int i = min; i <= max; i++) {
        if ((i % A == 0) && (i % B != 0) && (i % C != 0)) {
            total++;
        } else if ((i % A != 0) && (i % B == 0) && (i % C != 0)) {
            total++;
        } else  if ((i % A != 0) && (i % B != 0) && (i % C == 0)) {
            total++;
        }
    }

    printf("%d", total);
    return 0;
}
