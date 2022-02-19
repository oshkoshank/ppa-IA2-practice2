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
void find_areas_n();
Triangle find_smallest_triangle();
void output();

/*-----------------------------------------------------*/

int main()
{
    int n = input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_areas_n(n,t);
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

void find_areas_n(int n, Triangle t[n])
{
  for (int  i = 0; i < n; i++)
  {
     
     t[i].area = 0.5*((t[i].base)*(t[i].altitude));
  }
}

/*-----------------------------------------------------*/

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smol;
    smol = t[0];
    for(int i = 0; i < n; i++)
    {
        if(t[i].area<smol.area)
        {
            smol = t[i];
        }
    }
    return (smol);    
}

/*-----------------------------------------------------*/

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest of the triangles with base and height respectively ");
    for (int  i = 0; i < n; i++)
    {
        printf("%.3f , %.3f, ",t[i].base,t[i].altitude);
    }
    printf("\nis ");
    printf("the triangle with the base %f and altitude %.3f whose area is %.3f",smallest.base,smallest.altitude,smallest.area);
}