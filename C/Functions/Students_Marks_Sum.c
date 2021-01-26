//Actual code.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0;
    
    if(gender == 'b'){
        for(int i = 0; i < number_of_students; i += 2)
            sum += marks[i];
    }
    else{
        for(int i = 1; i < number_of_students; i += 2)
            sum += marks[i];
    }
    
    return sum;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;

//---------------------------------------------------------------------
// to understand how this program run.
//Basically its an alternate sum code.
//example:-
#include <stdio.h>
#include <string.h>
int main()
{
  int no,i,sum=0,sum1=0;
  printf("Enter the size :");
  scanf("%d",&no);
  int arr[no];
  for (i = 0; i < no; i++) {
    printf("Enter the elements :");
    scanf("%d",&arr[i]);
  }
  //method to sum altenate no in an array.
  for (i = 0; i < no; i+=2) {
    sum +=arr[i];
  }
  printf("sum is %d\n",sum);
  for (i = 1; i < no; i+=2) {
    sum1 +=arr[i];
  }
  printf("sum is %d\n",sum);
  printf("sum1 is %d\n",sum1);
}

//My code.

#include <stdio.h>
#include <string.h>
int marks(int no,char ch){
  int arr[no],sum=0,i;
  for (i = 0; i < no; i++) {
    printf("Enter the elements :");
    scanf("%d",&arr[i]);
  }
  //method to sum altenate no in an array.
  if (ch == 'b') {
    for (i = 0; i < no; i+=2) {
      sum +=arr[i];
    }
  }
  else{
    for (i = 1; i < no; i+=2) {
      sum +=arr[i];
    }
    printf("sum is %d\n",sum);
  }
  return sum;
}
int main()
{
  int no,i;
  char ch;
  printf("Enter the size :");
  scanf("%d",&no);
  printf("Enter the character :");
  scanf(" %c",&ch);
  marks(no,ch);
}


