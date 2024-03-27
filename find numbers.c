//program to print infinite number using Do While loop
//

#include<stdio.h>
int main()
{
  int a=8,i=1;
  printf("Enter the number\n");
  scanf("%d",&a);
do
{
    printf("\n%d",i++);
    a=i++;
}
while(i>a);

    return 0;
}

