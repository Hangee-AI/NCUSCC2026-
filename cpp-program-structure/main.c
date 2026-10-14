/* 设备巡检记录 —— NCUSCC2026 / cpp-program-structure
 *
 * 编译： gcc -std=c11 -Wall -Wextra -o main main.c
 * 运行： ./main < samples/01-mixed.in
 *
 * 核心思路：把「类型名 -> 固定输出顺序」做成下标 0..3，
 * 于是「输出排序」「零记录补全」「并列取靠前」三个要求全部自动满足。
 */
#include <stdio.h>
#include <string.h>

#define TYPE_COUNT 4
#define FIELD_MAX 16

static const char *const kTypeNames[TYPE_COUNT] = {"printer", "scanner", "router", "server"};

struct type_total {
    int count;
    int hours;
};

/* 按完整内容比较类型名，返回 0..3；题面保证输入合法，-1 只是兜底。 */
static int type_index(const char *type)
{
    int i;
    for (i = 0; i < TYPE_COUNT; ++i) {
        if (strcmp(type, kTypeNames[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int n = 0;
    int i;
    int busiest = 0;
    struct type_total totals[TYPE_COUNT] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
    char type[FIELD_MAX];
    char status[FIELD_MAX];
    int hours = 0;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (i = 0; i < n; ++i) {
        int idx;

        if (scanf("%15s %15s %d", type, status, &hours) != 3) {
            break;
        }

        idx = type_index(type);
        if (idx < 0) {
            continue;
        }

        totals[idx].count += 1;
        totals[idx].hours += hours;
    }

    /* 并列时保留更小的下标，也就是固定顺序里更靠前的类型 */
    for (i = 1; i < TYPE_COUNT; ++i) {
        if (totals[i].hours > totals[busiest].hours) {
            busiest = i;
        }
    }

    for (i = 0; i < TYPE_COUNT; ++i) {
        printf("%s %d %d\n", kTypeNames[i], totals[i].count, totals[i].hours);
    }
    printf("busiest %s\n", kTypeNames[busiest]);

    return 0;
}
