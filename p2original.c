#include<stdio.h>

int input_side();
int check_scalene();
void output();

int main()
{
    int a=input_side();
    int b=input_side();
    int c=input_side();
    int res=check_scalene(a,b,c);
    output(a,b,c,res);
    return 0;
}

int input_side()
{
 int a;
 printf("Enter the lenght of side of the triangle: ");
 scanf("%d",&a);
 return a;   
}

int check_scalene(int a, int b, int c )
{
    int res=0;
    if (a==b || a==c || b==c)
    {
        res=1;
    }
    else{
         res=0;
        }
    
    return res;    
}

void output(int a, int b, int c, int isscalene)
{
    if (isscalene==0)
    {
        printf("The triangle is scalene !!");
    }
    else
    {
        printf("The triangle is not scalene !!! ");
    }
    
    
}