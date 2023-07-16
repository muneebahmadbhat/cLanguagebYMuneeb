

//  Q) In an array of numbers find how many times does a number 'x' occurs?

#include <stdio.h>

int count_occur(int a[], int num_elements, int value);
void print_array(int a[], int num_elements);

void main(void)
{
  int a[20] = {2, 5, 0, 5, 5, 66, 3, 78, -4, -56, 2, 66, -4, -4, 2, 0, 66, 17, 17, -4};
  int num_occ, i;

  printf("\nArray:\n");
  print_array(a, 20);

  for (i = 0; i<20; i++)
  {
    num_occ = count_occur(a, 20, a[i]);
    printf("The value %d was found %d times.\n", a[i], num_occ);
  }
}

int count_occur(int a[], int num_elements, int value)
/* checks array a for number of occurrances of value */
{
  int i, count = 0;
  for (i = 0; i<num_elements; i++)
  {
    if (a[i] == value)
    {
        ++count; /* it was found */
    }
  }
  return(count);
}

void print_array(int a[], int num_elements)
{
  int i;
  for (i = 0; i<num_elements; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}