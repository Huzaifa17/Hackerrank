#include<stdio.h>
#include<string.h>
int n1,n2,n3;
int equalstack(int array1[],int array2[],int array3[]);
int main()
{
    int i,j,k,m,n,o,p;
    scanf("%d %d %d",&n1,&n2,&n3);
    int array1[n1],array2[n2],array3[n3];
    for(i=0;i<n1;i++){
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n2;i++){
        scanf("%d",&array2[i]);
    }
    for(i=0;i<n3;i++){
        scanf("%d",&array3[i]);
    }
    k=equalstack(array1,array2,array3);
    printf("%d\n",k);
    return 0;
}
int equalstack(int array1[],int array2[],int array3[])
{
    int i1=0,i2=0,i3=0,j,k,m,n,o,p,count1=0,count2=0,count3=0,same=0;
    if(i1<n1){
        count1=array1[n1-1];
    }
    if(i2<n2){
        count2=array2[n2-1];
    }
    if(i3<n3){
        count3=array3[n3-1];
    }
    if(i1>=n1||i2>=n2||i3>=n3)
        return same;
    i1=n1-2,i2=n2-2,i3=n3-2;
    if(count1==count2&&count2==count3){
            same=count1;
        }
    while(1){
        if(count1<=count2&&count1<=count3){
            if(i1>=0){
                count1+=array1[i1];
                i1--;
            }
            else
                break;
        }
        else if(count2<=count1&&count2<=count3){
            if(i2>=0){
                count2+=array2[i2];
                i2--;
            }
            else
                break;
        }
        else if(count3<=count2&&count3<=count1){
            if(i3>=0){
                count3+=array3[i3];
                i3--;
            }
            else
                break;
        }
        if(count1==count2&&count2==count3){
            same=count1;
        }
    }
    return same;
}
