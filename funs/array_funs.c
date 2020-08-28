
# include <stdio.h>

void print_array(int * arr, int len)
{
  int i;

      for(i=0; i < len; i ++)
         printf("%5d", arr[i]);
}

void random_fill(int arr[], int len)
{
  int i;

      for(i=0; i < len; i ++)
         arr[i] = rand() % 100;
}

void main()
{
  int a[10], b[5];

      srand(time(0));
      random_fill(a,10);
      random_fill(b,5);

      printf("A = ");
      print_array(a,10);

      printf("\nB = ");
      print_array(b,5);

}
