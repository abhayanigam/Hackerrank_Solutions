//Actual Code.

#include <stdio.h>
void find_nth_term(int n,int a,int b,int c);
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    find_nth_term(n,a,b,c);
}
void find_nth_term(int n,int a,int b,int c)
{
    if (n==1) {
        printf("%d\n",a);
    }
    else if (n==2){
        printf("%d\n",b);
    }
    else if (n==3){
        printf("%d\n",c);
    }
    else{
        printf("%d\n",((n-1)+(n-2)+(n-3)));
    }
}

//--------------------------------------------------------------
//to understand how this program run.

#include <stdio.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c)
{
    if(n == 1)
        return a;
    else if(n == 2)
        return b;
    else if(n == 3)
        return c;
    else
        return (n - 1) + (n - 2) + (n - 3);
}

int main()
{
    int n, a, b, c;
  
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    printf("Enter the value of c:");
    scanf("%d",&c);
    
    int ans = find_nth_term(n, a, b, c);
 
    printf("the ans is %d\n", ans);
    
    return 0;
}