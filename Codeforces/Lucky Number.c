#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
        printf("YES");
    else if(n==47 || n==74 || n==444 || n==777 || n==447 || n==477 || n==774 || n==744)
        printf("YES");
    else
        printf("NO");
    return 0;
}
