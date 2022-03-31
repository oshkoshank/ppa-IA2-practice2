#include<stdio.h>

int input_number();
int is_composite();
void output();

int main ()
{
    int a = input_number();
    int res = is_composite(a);
    output(a,res);
    return 0;
}

int input_number()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    return a;
}

int is_composite(int n)
{
    int res=1;
    if(n==1||n==0)
    {
        return 2;
    }
    else
    {
    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
             res=0;
             break;
        }
    }
    }
      return res;
}


void output(int n, int composite)
{
    if (composite==1)
    {
        printf("%d is not a composite number !!!",n);
    }

    else
    {
         if(composite==2)
         {
             printf("%d is neither prime or composite !!!",n);
         }
         else
         {
        printf("%d is a Composite number !!!",n);
         }
    }
    
    
}