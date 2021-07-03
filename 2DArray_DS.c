#include<stdio.h>
int hourglassSum(int array[6][6])
{
    int i,j,k,n,m,max,count;
    for(j=0;j<=3;j++){
        for(i=0;i<=3;i++){
            count=array[i][j]+array[i][j+1]+array[i][j+2]+array[i+1][j+1]+array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];
            if(i==0&&j==0)
                max=count;
            if(count>max){
                max=count;
            }
        }
    }
    return max;
}
int main()
{
    int i,j,k,m,n,array[6][6];
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&array[i][j]);
        }
    }
    k=hourglassSum(array);
    printf("%d\n",k);
    return 0;
}
