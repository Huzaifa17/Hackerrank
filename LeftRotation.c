#include<stdio.h>
int front=-1,rear,n;
int main()
{
    int i,j,k,o,p,d;
    scanf("%d %d",&n,&d);
    int array[n+1];
    rear=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<d;i++){
    front++;
    rear++;
    rear=rear%(n+1);
    front=front%(n+1);
    array[rear]=array[front];
    }
    for(i=front+1;;i++){
        i=i%(n+1);
        printf("%d ",array[i]);
        if(i==rear)
            break;
    }
    printf("\n");
    return 0;
}

