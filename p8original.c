#include<stdio.h>

typedef struct triangle
{
    float base;
    float altitude;
    float area;
}Triangle;

/*-----------------------------------------------------*/

int input_n();
void input_n_triangles();
void find_areas();
Triangle find_smallest_triangle();
void output();

/*-----------------------------------------------------*/

int main()
{
    int n = input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    Triangle smol = find_smallest_triangle(n,t);
    output(n,t,smol);
    return 0;
}

/*-----------------------------------------------------*/

int input_n()
{
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d",&n);
    return n;
}

/*-----------------------------------------------------*/

void input_n_triangles(int n, Triangle t[n])
{
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the base length of the Triangle No.  %d: ",i+1);
        scanf("%f",&t[i].base );
        printf("Enter the altitude length of the Triangle No.  %d: ",i+1);
        scanf("%f",&t[i].altitude);
    }
    
}

/*-----------------------------------------------------*/

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smol;
    for (int i = 0; i < n; i++)
    {
        smol.area = 0.5*(t[0].base)*(t[0].altitude);
       for (int  i = 1; i < n; i++)
       {
           if (0.5*((t[i].base)*(t[i].altitude))<smol.area)
           {
               smol.area = 0.5 * ( (t[i].base) * (t[i].altitude) );
           }
       }
    }
    
    for (int  i = 0; i < n; i++)
    {
        if (0.5*(t[i].base)*(t[i].altitude)==smol.area)
        {
            smol.base = t[i].base;
            smol.altitude = t[i].altitude;
        }
    }
    return (smol);    
}

/*-----------------------------------------------------*/

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest of the triangles with base and height ");
    for (int  i = 0; i < n; i++)
    {
        printf("%f , %f, ",t[i].base,t[i].altitude);
    }
    printf("\nis ");
    printf("the triangle with the base %f and altitude %f whose area is %f",smallest.base,smallest.altitude,smallest.area);
}