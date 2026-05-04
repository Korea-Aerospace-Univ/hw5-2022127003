#include <stdio.h>

int main(void)
{
    int N;
    int a, b, c;
    int result = 0;

    scanf("%d", &N);

    for (a = 1; a * 900 <= N; a++) {
        for (b = 2; a* 900 + b* 750<= N; b+= 2) {
            for (c = 1; a* 900 + b* 750 + c* 200 <= N; c++) {

                if (a * 900 + b * 750 + c * 200 == N && (c<a || c<b)) {
                    printf("%d %d %d\n", a, b, c);
                    result= 1;
                }

            }
        }
    }

    if (result == 0) {
        printf("none");
    }

    return 0;
}
