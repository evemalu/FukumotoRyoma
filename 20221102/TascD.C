#include<stdio.h>
#include<math.h>

int main(void)
{
  int n,f;
  double i;
	
  for(n=1; n<=100; n=n+1) 
  {
    if((n%3)==0) //3の倍数なら
    {
      printf("%d fizz\n",n);
    }
    if((n%5)==0)
    {
        printf("%d buzz\n" ,n);
    }
    if((n%3)==0;(n%5)==0)
    {
        printf("%d fizzbuzz\n, n");
    }
   
   
  }

  return(0);

 
}

