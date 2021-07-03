#include<stdio.h>
#include<string.h>
int balance(char s[])
{
    int i=0,j=0,k,count1=0,count2=0,count3=0;
    char pop[1050];
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='('){
           count1++;
           pop[j]=s[i];
           j++;
        }
        else if(s[i]=='{'){
           count2++;
           pop[j]=s[i];
           j++;
        }
        else if(s[i]=='['){
           count3++;
           pop[j]=s[i];
           j++;
        }
        else if(s[i]==')'){
            count1--;
            j--;
            if(count1<0)
                return 0;
            if(pop[j]!='(')
                return 0;
        }
        else if(s[i]=='}'){
            count2--;
            j--;
            if(count2<0)
                return 0;
            if(pop[j]!='{')
                return 0;
        }
        else if(s[i]==']'){
            count3--;
            j--;
            if(count3<0)
                return 0;
            if(pop[j]!='[')
                return 0;
        }
    }
    if(count1==0&&count2==0&&count3==0)
        return 1;
    else
        return 0;
}
int main()
{
    int i,j,k,m,n;
    char s[1050];
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%s",s);
        if(balance(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
