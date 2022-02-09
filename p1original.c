#include<stdio.h>
void input(float *base, float *height)
{
    printf("Enter the base length of the triangle: ");
    scanf("%f",base);
    printf("Enter the height length of the triangle: ");
    scanf("%f",height);
}


void find_area(float base, float height, float *area)
{
    *area = 0.5*(base*height);
}

void output(float base, float height, float area)
{
    printf("The area of the triangle of the height %f and base %f is %f",height,base,area);
}

int main()
{
    float b,h,a;
    input(&b,&h);
    find_area(b,h,&a);
    output(b,h,a);
    return 0;
}



