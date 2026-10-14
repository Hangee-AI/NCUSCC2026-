#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int count = 0;
    int sum = 0;
    int min = 0, max = 0;
    int have = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (i = 0; i < n; ++i) {
        int v;
        if (scanf("%d", &v) != 1) {
            return 1;
        }

        /* min/max 用第一个读到的数初始化，不能用 0：读数范围含负数 */
        if (!have) {
            min = v;
            max = v;
            have = 1;
        } else {
            if (v < min) min = v;
            if (v > max) max = v;
        }

        sum += v;
        count += 1;
    }

    printf("count=%d\n", count);
    printf("sum=%d\n", sum);
    printf("min=%d\n", min);
    printf("max=%d\n", max);

    return 0;
}
