#include<stdio.h>
int top=-1;
int h=0;
int pos=-1;
void push(int array[],int array2[])
{
    int k;
    top++;
    scanf("%d",&k);
    array[top]=k;
    if(top==0){
        pos++;
        array2[pos]=top;
    }
    else{
        if(array[array2[pos]]<array[top]){
            pos++;
            array2[pos]=top;
        }
    }
}
void pop(int array2[])
{
    top--;
    if(top<-1)
        top=-1;
    if(top==-1){
            pos=-1;
    }
    else if(top<array2[pos])
                pos--;
}
int main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    int array[n],array2[n];
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==1)
            push(array,array2);
        else if(k==2)
            pop(array2);
        else if(k==3){
            if(pos>=0){
                printf("%d\n",array[array2[pos]]);
                h=1;
            }
        }
    }
    if(h==0)
        printf("\n");
    return 0;
}
