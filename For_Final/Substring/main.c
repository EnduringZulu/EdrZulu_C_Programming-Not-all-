#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 20

char check(char alp){
 return isupper(alp) ? tolower(alp) : alp;
}

int main() {
  // Your code started here.
  char find[MAX],sent[MAX];
  scanf("%s",find);
  scanf("%s",sent);
  int checkin=-1;
  for(int i=0;i<strlen(sent);i++){
    int count=0;
    for(int j=0;j<strlen(find);j++){
      if(check(sent[i+j])==check(find[j]))count++;
    }
    if(count==strlen(find)){
      printf("found at %d to %d positions\n",i,i+count-1);
      checkin=0;
    }
  }
  if(checkin==-1)printf("not found");
  return 0;
}