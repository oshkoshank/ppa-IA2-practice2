#include<stdio.h>

void input_string(char *a)
{
  printf("Enter the string to be reversed: ");
  scanf("%s",a);
}
char str_reverse(char *a)
{
  int temp;
  for(int i = 0; a[i]!='\0';i++)
  for(int j = 0; j < i/2; j++ )
    {
      temp = a[j];
      a[j] = a[i-1-j];
      a[i-1-j] = temp;
    }
    return a;
}
void output()
{
    prin
}

/*-------------------------------------------------*/

int main()
{
  char a[50];
  input_string(a);
  char rev[50] ={ str_reverse(a)};
  output(a,rev);
  return 0;
}

/*-------------------------------------------------*/



/*-------------------------------------------------*/

