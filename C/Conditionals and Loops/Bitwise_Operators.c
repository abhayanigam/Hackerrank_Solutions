/* Bitwise operator
  a&b
  a|b
  a^b
Sample Input 0

5 4
Sample Output 0

2
3
3
*/

//Actual Code.
#include <stdio.h>
int main()
{
    int n,k,and =0,or=0,xor=0;
    int i,j;
    int a,o, x;
    
    scanf("%d",&n);
    scanf("%d",&k);
    for (i=1; i<=n; i++) {
        for (j=i+1; j<=n; j++) {
            a = i & j;
            o = i | j;
            x = i ^j;
            if(a > and && a < k ) {
                and = a;
            }
            if(o > or && o < k ) {
                or = o;
            }
            if(x > xor && x < k ) {
                xor = x;
            }
        }
    }
    printf("%d\n%d\n%d\n",and ,or,xor);
}

//---------------------------------------------------------------------
// to understand how this program run.
#include <stdio.h>
int main()
{
    int n,k,and =0,or=0,xor=0;
    int i,j;
    int a,o, x;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of K:");
    scanf("%d",&k);
    for (i=1; i<=n; i++) {
        for (j=i+1; j<=n; j++) {
            a = i & j;
            o = i | j;
            x = i ^j;
            if(a > and && a < k ) {
                and = a;
            }
            if(o > or && o < k ) {
                or = o;
            }
            if(x > xor && x < k ) {
                xor = x;
            }
            printf("i&j: %d  i|j: %d  i^j: %d \n",a ,o,x);
        }
    }
    printf("and :- %d\nor  :- %d\nxor :- %d\n",and ,or,xor);
}
