#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i=0;
char inp[10];

int S();
int A();

int main(){
  int k;
  printf("enter input : ");
  scanf("%s",inp);
  k=S();
  if(k==1 && inp[i]=='\0') 
    printf("parsed");
  else 
    printf("invalid");
  return 0;
} 

int S(){
  if(inp[i]=='c'){
    i++;
    A();
    if(inp[i]=='d'){
      i++;
      return 1;
    } 
    else return 0;
  }else return 0;
  return 0;
}

int A(){
  int save=i;
  if(inp[i]=='a'){
    i++;
    if(inp[i]=='b'){
      i++;
      return 1;
    }
  }
  i=save;
  if(inp[i]=='a'){
    i++;
    return 1;
  }
  i=save;
  return 0;
}






