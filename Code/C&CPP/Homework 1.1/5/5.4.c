#include<stdio.h>
#include<string.h>

int main(){
  int length;
  int A = 0,B = 0,C = 0,D = 0,E = 0;
  char str[200];
  fgets(str,sizeof(str),stdin);
  str[strcspn(str,"\n")] = '\0';
  length = strlen(str);
  for(int i = 0 ; i < length ; i++)
  {
    if(str[i] >= 0 && str[i] <=50) A++;
    if(str[i] >= 51 && str[i] <= 75) B++;
    if(str[i] >= 76 && str[i] <= 88) C++;
    if(str[i] >= 89 && str[i] <= 117) D++;
    if(str[i] >= 118 && str[i] <= 127) E++;
  }
  printf("%d %d %d %d %d",A,B,C,D,E);
  return 0;
}
