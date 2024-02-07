#include<stdio.h>
int main()
{
    long long int n,i,j,c4=0,c7=0;
    scanf("%lld",&n);
    while(n>0)
    {
        i=n%10;
        n=n/10;
        if(i==4)
            c4++;
        else if(i==7)
            c7++;
    }
    j=c4+c7;
    if(j==4 || j==7 || j==47 || j==74 || j==444 || j==447 || j==477 || j==777 || j==774 || j==744)
        printf("YES");
    else
        printf("NO");
    return 0;
}
