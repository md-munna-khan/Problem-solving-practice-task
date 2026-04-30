#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    char s[1000000001];
  
for (int i = 0; i <n; i++)
{
   scanf("%s",&s[i]);
}
for (int i = 0; i <n; i++)
{
   printf("%s",s[i]);
}

    return 0;
}