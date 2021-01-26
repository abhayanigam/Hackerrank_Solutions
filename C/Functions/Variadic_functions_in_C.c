//Actual Code.

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int sum(int count, ...)
{
    va_list ap;
    int t = 0;
    va_start(ap, count);
    while (count--)
    {
        t += va_arg(ap, int);
    }
    return t;
}

int min(int count, ...)
{
    va_list ap;
    int t = MAX_ELEMENT;
    va_start(ap, count);
    while (count--)
    {
        int i = va_arg(ap, int);
        t = Min(t, i);
    }
    return t;
}

int max(int count, ...)
{
    va_list ap;
    int t = MIN_ELEMENT;
    va_start(ap, count);
    while (count--)
    {
        int i = va_arg(ap, int);
        t = Max(t, i);
    }
    return t;
}

//--------------------------------------------------------------
//to understand how this program run.

#include <stdio.h>
#include <stdarg.h>

int getsum(int num, ...){
    va_list list;
    int sum = 0;

    va_start(list, num);
    for (int i = 0; i < num; i++) {
        int n = va_arg(list, int);
        sum += n;
    }
    va_end(list);
    return sum;
}

int main(){
    printf("The sum of 2 digit is : %d \n",getsum(2,4,6));
    printf("The sum of 2 digit is : %d \n",getsum(3,4,6,5));
}
