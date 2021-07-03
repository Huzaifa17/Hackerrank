#include<stdio.h>
#include<string.h>
int main()
{
    char ch,s[1000],sen[10000];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c", &sen);
    printf("%c\n%s\n%s\n",ch,s,sen);
    return 0;
}
