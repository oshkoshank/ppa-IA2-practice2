#include<stdio.h>
#include<string.h>

void input_string();
char str_reverse();
void output();

int main ()
{
  char a[50];
  input_string(a);
  char rev[50] = str_reverse(a);
  return 0;
}

void input_string(char a)
{
  printf("Enter the string to be reversed: ");
  scanf("%s"&a);
}

char str_reverse( char a)
{
  int l,tp;
  l=strlen(a);
  for(int i = 0; i < l/2; i++)
    {
      tp = a[i];
      a[i] = a[l-i-1];
      a[l-i-1] = tp;
    }  
}

void output(char a, char *reversea)
{
  printf("The reverse of %s is %s ",a,reversea);
}