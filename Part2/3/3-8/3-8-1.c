#include <stdio.h>

int main() {

    int n = 10;
    int cases[n][2];

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        cases[i][0] = a;
        cases[i][1] = b;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cases[i][1] > cases[j][1] || (cases[i][1] == cases[j][1] && cases[i][0] > cases[j][0])) {
                int temp_start = cases[i][0];
                int temp_end = cases[i][1];
                cases[i][0] = cases[j][0];
                cases[i][1] = cases[j][1];
                cases[j][0] = temp_start;
                cases[j][1] = temp_end;
            }
        }
    }

    int count = 0;
    int before_end_time = 0;

    for (int i = 0; i < n; i++) {
        if (cases[i][0] >= before_end_time) {
            count++;
            before_end_time = cases[i][1];
        }
    }

    printf("%d\n", count);

    return 0;
}
