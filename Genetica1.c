#include <stdio.h>
#include <stdlib.h>

bool equiv(int size, char *str1, char *str2)
{
  bool a;
  bool b;

  if(size==2)
  {
    if(str1[0]==str2[0] && str1[1]==str2[1])
      if(str1[0]==str2[1] && str1[1]==str2[0])
        return true;
    else
      return false;
  }
  else
  {
    size=size/2;
    a=
}

int main()
{
  int size;
  char *str1;
  char *str2;

  scanf("%d", &size);
  scanf("%s", str1);
  scanf("%s", str2);
