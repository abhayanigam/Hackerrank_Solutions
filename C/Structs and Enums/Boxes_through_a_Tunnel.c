//Actual code for hackerRank
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if(b.height < MAX_HEIGHT)
        return 1;
    else
        return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);

	box *boxes = malloc(n * sizeof(box));
	for(int i = 0; i < n; i++){
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for(int i = 0; i < n; i++){
		if(is_lower_than_max_height(boxes[i])){
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}

//-----------------------------------------------------------------
//To understand this code in easy.
#include <stdio.h>
struct size{
  int l;
  int w;
  int h;
};
int main()
{
  int s,i,multi,k=41;
  printf("Enter the size :");
  scanf("%d",&s);
  struct size size1[s];

  for (i = 0; i < s; i++) {
    printf("\n");
    printf("Enter the lenght :");
    scanf("%d",&size1[i].l);
    printf("Enter the widht :");
    scanf("%d",&size1[i].w);
    printf("Enter the hight :");
    scanf("%d",&size1[i].h);
  }
  for (int j = 0; j < s; j++) {
    if (size1[j].h<k) {
      multi = size1[j].l*size1[j].w*size1[j].h;
    }
    else{
      break;
    }
    printf("%d\n",multi);
  }
}
