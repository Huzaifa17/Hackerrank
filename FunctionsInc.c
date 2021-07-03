#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int i,j,k,arr[4]={a,b,c,d};
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[j]>arr[i])
            {
                k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }
    return arr[0];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
