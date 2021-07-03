#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,k,m,n,o,p,front=0,rear=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==1){
            scanf("%d",&array[rear]);
            rear++;
        }
        else if(k==2){
            front++;
        }
        else if(k==3){
            printf("%d\n",array[front]);
        }
    }    
    return 0;
}
