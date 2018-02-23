#include<stdio.h>
int main ()
{
  char c;
  int a,b;
  printf ("Enter a character :");
  scanf ("%c", &c);
  
  if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
  {
  printf("Entered character %c is an Alphabet");
  }
  else
  {
  printf("Entered character %c is not an Alphabet");
  }
  return 0;
}
