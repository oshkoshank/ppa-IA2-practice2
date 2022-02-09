#include<stdio.h>
int input();
int gcd();
void output(int,int,int);

int main()
{
    int a = input();
    int b = input();
    int c = gcd(a,b);
    output(a,b,c);
    return 0;
}

int input()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    return a;
}

int gcd(int a, int b)
{
    for (int i = 1; i <=a && i <= b; i++)
    {
        while (a!=b)
        {
            if (a>b)
            {
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        return a;
    }
}

    void output(int a, int b, int gcd)
    {
       printf("The GCF of %d and %d is %d",a,b,gcd);
    }
    
   
