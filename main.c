#include <stdio.h>

#define N 200
int i, j;
int cnt_a, cnt_b;
int tag;

void jiao(int *pc, int *pd) {
    for (i = 0; i < cnt_a; i++, pc++) {
        tag = 0;
        for (j = 0; j < cnt_b; j++, pd++) {

            if (*pc == *pd)
                tag = 1;
        }
        pd -= cnt_b;

        if (tag == 0)printf("%d ", *pc);
    }


}


int main() {
    int a[N], b[N];


    for (i = 0, cnt_a = 0;; i++, cnt_a++) {
        scanf("%5d", &a[i]);
        if (a[i] == -1) {
            break;
        }
    }
    for (i = 0, cnt_b = 0;; i++, cnt_b++) {
        scanf("%5d", &b[i]);
        if (b[i] == -1) {
            break;
        }
    }


    int *pa = a, *pb = b;
    jiao(pa, pb);


    printf("\n");


    return 0;
}