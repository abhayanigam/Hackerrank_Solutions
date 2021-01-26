#include <stdio.h>
void large(int l){
    printf("%d\n",l);
}

int main()
{
    int l;
    int arrlarge[4];
    for (int i=0; i<4; i++) {
        scanf("%d",&arrlarge[i]);
    }
    l = arrlarge[0];
    for (int i=0; i<4; i++) {
        if (l<arrlarge[i]) {
            l=arrlarge[i];
        }
    }
    large(l);
    return 0;
}
