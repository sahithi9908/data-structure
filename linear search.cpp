#include <stdio.h>
int main()
{
  int array[100],x,i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter elements to insert in an array \n", n);
  for (i=0;i<n;i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
  scanf("%d",&x);
  for (i=0;i<n;i++)
  {
    if (array[i]==x)
    {
      printf("The element %d is present at location %d.\n",x, i+1);
      break;
    }
  }
  if (i==n)
    printf("The element %d is not present in the array.\n",x);
  return 0;
}

