#include<stdio.h>
void input_string();
void str_reverse();
void output();

/*-----------------------------------------------------*/

int main()
{
    char a[50],b[50];
    input_string(a);
    str_reverse(a,b);
    output(a,b);
    return 0;
}

/*-----------------------------------------------------*/

void input_string(char *a)
{
    printf("Enter the strig to be reversed: ");
    scanf("%s",a);
}

/*-----------------------------------------------------*/

void str_reverse( char *a, char *b)
{
    int n,i;
    for( i = 0; a[i]!='\0';++i);
    n=i;
    int l = n-1;
    for(i = 0; i < n; i++)
    {
        b[i]=a[l];
        l--;
    }
    b[i]='\0';
}

/*-----------------------------------------------------*/

void output(char *a, char *b)
{
    printf("The reverse of the string %s is %s ",a,b);
}