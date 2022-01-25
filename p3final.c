#include<stdio.h>
 void input( *a,int *b)
{
  printf("Enter a value of a,b \n");
  scanf("%d%d", a, b);
}
void add(int a, int b, int*sum)
{
  *sum=a+b;
}

void output (int a, int b,int sum)
{
  printf(" sum of a and b is %d+%d=%d",a,b,sum);
}
int main ()
{
  int a,b,sum;
  intput(&a,&b);
  add(a,b,sum);
  return 0;
}

  