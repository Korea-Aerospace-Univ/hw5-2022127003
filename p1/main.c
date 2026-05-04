#include<stdio.h>
int main(void){
    int N;
    int a, b, c;
    int result = 0;

    scanf("%d", &N);

    for (a = 1; a * 900 <= N; a++) {
        for (b = 2; a * 900 + b * 750 <= N; b += 2) {
            
            int change= N - (a * 900 + b * 750);

            if (change<= 0) {
                continue;
            }

            if (change% 200 != 0) {
                continue;
            }

            c = change/ 200;

            if (c >= 1 && (c < a || c < b)) {
                printf("%d %d %d\n", a, b, c);
                found = 1;
            }
        }
    }

    if (result == 0) {
        printf("none");
    }

    return 0;
}
