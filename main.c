#include <stdio.h>

#define N 200

int main() {
    int a[N], b[N];

    int i, j;
    int cnt_a,cnt_b;
    int tag;

    for (i = 0,cnt_a=0; ; i++,cnt_a++) {
        scanf("%5d", &a[i]);
        if(a[i]==-1){
            break;
        }
    }
    for (i = 0,cnt_b=0; ; i++,cnt_b++) {
        scanf("%5d", &b[i]);
        if(b[i]==-1){
            break;
        }
    }
    for (i = 0;i<cnt_a; i++) {
        tag = 0;
        for (j = 0;j<cnt_b; j++)
            if (a[i] == b[j])
                tag = 1;
        if (tag == 0)
            printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}


