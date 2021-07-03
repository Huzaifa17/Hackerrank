#include<stdio.h>
#include<string.h>
int n,q;
int main()
{
    int i,j,k,m,l;
    scanf("%d",&n);
    char string[n][25];
    for(i=0;i<n;i++){
        scanf("%s",string[i]);
    }
    scanf("%d",&q);
    char query[q][25];
    for(i=0;i<q;i++){
        scanf("%s",query[i]);
    }
    int array[q];
    for(i=0;i<q;i++){
        m=0;
        for(j=0;j<n;j++){
            if(strcmp(query[i],string[j])==0)
                m++;
        }
        array[i]=m;
    }
    for(i=0;i<q;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}

