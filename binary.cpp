#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d integers: \n", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter the search element:");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("The element %d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("The element %d is not present in the given array", key);
return 0;
}

