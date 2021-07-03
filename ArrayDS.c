#include<stdio.h>
int n;
void reverseArray(int array[])
{
    int i,j,k,m,o;
    for(i=n-1;i>=0;i--){
        printf("%d ",array[i]);
    }
    return ;
}
int main()
{
    int i,j,k,m;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    reverseArray(array);
    return 0;
}
