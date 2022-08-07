#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
  char *name[] = {
      "Kunal",
      "Aman",
      "Vipul",
      "Harsh",
      "Deepak",
      "Anmol",
      "Ritesh",
      "Ayush"};
  for(int i=0;i<8;i++)
  {
    int len=strlen(name[i]);

    for(int j=0;j<len;j++)
    {
      if(*(name[i]+j)>=65 && *(name[i]+j)<=90)
      {
        *(name[i]+j)=*(name[i]+j)-32;
      }
      else{
        *(name[i]+j)=*(name[i]+j);
      }
    }
  }
  for(int i=0;i<8;i++)
  {
    printf("%s\n",name[i]);
  }
  return 0;
}