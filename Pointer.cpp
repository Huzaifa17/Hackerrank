#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int s,k;
    s=*a+*b;
    k=*a-*b;
    if(k<0)
    {
        k=k*-1;
    }   
    *a=s;
    *b=k;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
