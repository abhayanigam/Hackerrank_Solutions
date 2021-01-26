#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,e,f;
    int *c,*d;
    c=&a;
    d=&b;
    scanf("%d",c);
    scanf("%d",d);
    e = a+b;
    f = abs(b-a);
    printf("%d\n%d\n",e,f);
    
}
