#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i=0;
char ip[100];

void E();void Ep();
void T(); void Tp(); void F();
void succ(); void fail();

int main(){
  printf("enter expr : ");
  scanf("%s",ip);
  E();
  if(ip[i]=='\0') succ();
  else fail();
}

void E(){ 
  T();
  Ep();
} 

void Ep(){
  if(ip[i]=='+'){
    i++;
    T();
    Ep();
  }
} 

void T(){
  F();
  Tp();
} 

void Tp(){
  if(ip[i]=='*'){ 
    i++;
    F();
    Tp();
  }
} 

void F(){
  if(ip[i]=='('){
    i++;
    E();
    if(ip[i]==')')
      i++;
    else
      fail();
  }
  else if(ip[i]=='i') i++;
  else fail();
}

void succ(){ printf("valid"); exit(0);} 
void fail(){ printf("invalid"); exit(0);} 
  
  



























