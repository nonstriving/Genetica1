#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool equiv(int size, char *str1, char *str2)
{
  bool a;
  bool b;
  char *stra;
  char *strb;

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

    stra=(char*)malloc(size * sizeof(char));
    strb=(char*)malloc(size * sizeof(char));

    for(i=0;i<size;i++)
    {
      stra[i]=str1[i];
    }
    for(i=size;i<size*2;i++)
    {
      strb[i]=str1[i];
    }
    a=equiv(size,stra,strb);

    for(i=0;i<size;i++)
    {
      stra[i]=str2[i];
    }
    for(i=size;i<size*2;i++)
    {
      strb[i]=str2[i];
    }
    b=equiv(size,stra,strb);

    return(a&&b);
  }
}

int main()
{
  int size;
  char *str1;
  char *str2;
  bool eq;

  scanf("%d", &size);
  scanf("%s", str1);
  scanf("%s", str2);

  eq=equiv(size,str1,str2);

  if(eq==true)
    printf("Equivalent\n");
  else
    printf("Not equivalent\n");

  return 0;
}
