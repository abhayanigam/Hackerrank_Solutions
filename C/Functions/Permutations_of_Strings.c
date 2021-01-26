//Actual Code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s, int i, int j){
    char * tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

void reverse(char **s, int start, int end){
    while(start<end){
        swap(s,start++,end--);
    }
}

int next_permutation(int n, char **s)
{
	for(int i=n-2;i>-1;i--){

        if(strcmp(s[i+1],s[i])>0){

            for(int j=n-1;j>i;j--){

                if(strcmp(s[j],s[i])>0){

                    swap(s,i,j);
                    reverse(s,i+1,n-1);
                    return 1;
                    
                }
            }
        }
    }
    return 0;
}

//--------------------------------------------------------------
//to understand how this program run.

#include <stdio.h>
#include <string.h>

void swap(char* x,char* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutation(char* str,int l,int r){
    int i;
    if (l==r) {
        printf("%s \n", str);
    }
    else{
        for (i=l; i<=r; i++) {
            swap((str + l), (str + i));
            permutation(str, l+1, r);
            swap((str + l), (str + i));
        }
    }
}
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permutation(str, 0, n-1);
}
