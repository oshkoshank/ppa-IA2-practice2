#include<stdio.h>
typedef struct triangle
{
    float base;
    float altitude;
    float area;
}Triangle;

/*--------------------------------------------------*/

Triangle input_triangle();
void find_area();
void output();

/*--------------------------------------------------*/

int main()
{
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

/*--------------------------------------------------*/

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the length of the base of the triangle: ");
    scanf("%f",&t.base);
    printf("Enter the lenght of the altitude of the trinagle: ");
    scanf("%f",&t.altitude);
    return t;
}

/*--------------------------------------------------*/

void find_area(Triangle *t)
{
    t->area=((t->base)*(t->altitude))*0.5;
}

/*--------------------------------------------------*/

void output(Triangle t)
{
    printf("The area of the Triangle is %f", t.area);
}
