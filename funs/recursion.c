// Recursion

void main()
{
     print(5);
     printf("\n");
     print(4);
     printf("\n");
     printf("Factorial of 5 = %d", factorial(5));
}

void print(int n)
{
    printf(" %d ",n);
    if (n > 1)
       print(n - 1);
}

void print2(int n)
{
   while(n > 0)
   {
      printf(" %d ",n);
      n --;
   }
}


int factorial(int n)
{
    if (n == 1)
        return 1;

    return n * factorial(n-1);
}
