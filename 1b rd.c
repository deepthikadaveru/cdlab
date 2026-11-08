#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i=0;
char ip[100];

void S();
void L();
void LP();
void succ();
void fail();

int main(){
  printf("Enter expr : ");
  scanf("%s",ip);
  S();
  if(ip[i]=='\0') succ();
  else fail();
  return 0;
} 

void S(){ 
  if(ip[i]=='('){
    i++;
    L();
    if(ip[i]==')'){
      i++;
    }
    else fail();
  }
  else if(ip[i]=='a') i++;
  else fail();
}

void L(){ 
  S();
  LP();
} 

void LP(){
  if(ip[i]==','){
    i++;
    S();
    LP();
  }
}

void succ(){ printf("valid"); exit(0); } 
void fail(){ printf("invalid"); exit(0); } 







