#include <stdio.h>
int sum_digit(int no){
    int sum =0;
    while (no) {
        sum+=no%10;
        no/=10;
    }
    return sum;
}
int main()
{
    int no;
    scanf("%d",&no);
    int ans = sum_digit(no);
    printf("%d\n",ans);
}