#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
bool equiv(int size, char *str1, char *str2)
{
  int i;
  size=size/2;
  char *str1a;
  char *str1b;
  char *str2a;
  char *str2b;

  str1a=(char *)malloc(size * sizeof(char));
  str1b=(char *)malloc(size * sizeof(char));
  str2a=(char *)malloc(size * sizeof(char));
  str2b=(char *)malloc(size * sizeof(char));

  for(i=0;i<size;i++)
  {
    str1a[i]=str1[i];
    str2a[i]=str2[i];
  }

  for(i=size;i<size*2;i++)
  {
    str1b[i-size]=str1[i];
    str2b[i-size]=str2[i];
  }

  if(strcmp(str1a,str2a)==0&&strcmp(str1b,str2b)==0)
    return true;
  else
    if(strcmp(str1a,str2b)==0&&strcmp(str1b,str2a)==0)
      return true;
    else
      return false;
}
*/

bool equiv(int size, char *str1, char *str2)
{
  if(size==2)
  {
    if(str1[0]==str2[0] && str1[1]==str2[1])
      return true;
    else if(str1[0]==str2[1] && str1[1]==str2[0])
        return true;
    else
      return false;
  }
  else
  {
    int i;
    size=size/2;

    char *str1a=(char *)malloc(size * sizeof(char));
    char *str1b=(char *)malloc(size * sizeof(char));
    char *str2a=(char *)malloc(size * sizeof(char));
    char *str2b=(char *)malloc(size * sizeof(char));

    for(i=0;i<size;i++)
    {
      str1a[i]=str1[i];
    }
    for(i=size;i<size*2;i++)
    {
      str1b[i-size]=str1[i];
    }
    //printf("%s\n", str1a);
    //printf("%s\n", str1b);

    for(i=0;i<size;i++)
    {
      str2a[i]=str2[i];
    }
    for(i=size;i<size*2;i++)
    {
      str2b[i-size]=str2[i];
    }
    //printf("%s\n", str2a);
    //printf("%s\n", str2b);

    if(equiv(size,str1a,str2a)&&equiv(size,str1b,str2b))
      return true;
    else
      if(equiv(size,str1a,str2b)&&equiv(size,str1b,str2a))
        return true;
      else
        return false;
  }
}

int main()
{
  int size;
  char *str1;
  char *str2;
  bool eq;

  scanf("%d", &size);
  while(size!=0)
  {
    str1=(char *)malloc(size * sizeof(char));
    str2=(char *)malloc(size * sizeof(char));

    scanf("%s", str1);
    scanf("%s", str2);

    eq=equiv(size,str1,str2);

    if(eq==true)
      printf("SIM\n");
      else
      printf("NAO\n");

    scanf("%d", &size);
  }
  return 0;
}
