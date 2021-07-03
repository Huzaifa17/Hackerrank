#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int k,m;
    k=*a+*b;
    m=*a-*b;
    if(m<0)
    m*=-1;
    *a=k;
    *b=m;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
