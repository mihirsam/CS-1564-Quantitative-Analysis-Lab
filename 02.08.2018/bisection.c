#include<stdio.h>
#include<math.h>

int count = 0, decimalPlace = 3;
float num1 = 0.0, num2 = 1.0, mean, e = 0.0001;

float fun(float num)
{
  return (pow(num, 3) - (2 * num) - 5);
}


int main()
{
  while(1)
  {
    if((fun(num1) < 0 && fun(num2) > 0) || (fun(num1) > 0 && fun(num2) < 0))
    {
      printf("Root lies between (%0.3f, %0.3f)\n", num1, num2);
      break;
    }

    else
    {
      num1++;
      num2++;
    }
  }

  printf("Bisection Method :\nSl.No.\t\tRoot1\t\t\tRoot2\n");
  while(1)
  {
    mean = (num1 + num2)/2.0;

    if(fun(mean) > 0)
    {
      num2 = mean;
    }
    else
    {
      num1 = mean;
    }

    printf("%d\t\t%f\t\t%f\n", count, num1, num2);
    count++;

    if(num2 - num1 <= e)
    {
      break;
    }
  }

  return 0;
}
