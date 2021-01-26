#include <stdio.h>
int main()
{
    int a,b,e,f;
    float c,d,g,h;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    e = a+b;
    f = a-b;
    g = c+d;
    h = c-d;
    printf("%d %d\n",e,f);
    printf("%.1f %.1f\n",g,h);
}