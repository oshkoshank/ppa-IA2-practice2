#include<stdio.h>
int input_array_size();
void input_array();
int sum_composite_numbers();
void output();

int main()
{
  int n = input_array_size();
  int a[n];
  input_array(n,a);
  int sum = sum_composite_numbers(n,a);
  output(sum);
  return 0;
}

int input_array_size()
{
  int a;
  printf("Enter the array size: ");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n])
{
  printf("Enetr the array elements: ");
  for(int i = 0; i < n; i ++)
    {
      scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for(int i = 0; i<n; i++)
  {
      for(int j=2;j<a[i];j++)
      {
          if(a[i]%j==0)
          {
              sum = sum + a[i];
              break;
          }
      }
  }
  return sum;
}

void output(int sum)
{
  printf("The sum of all the composite numbers entered is : %d",sum);
}