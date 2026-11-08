#include <stdio.h> 
#define max 5 
int stack[max],top=-1;

void push(){ 
  int x;
  if(top==max-1) printf("overflow");
  else{ 
    printf("enter val : ");
    scanf("%d",&x);
    stack[++top]=x;
    printf("memory allocated");
  }
} 
void pop() {
  if(top==-1) printf("underflow");
  else{ 
    printf("mem deallocated : %d ", stack[top--]);
  }
}
void display(){
  int i;
  if(top== -1) printf("empty");
  else{
    printf(" elements \n ");
    for(i=top;i>=0;i--) printf("%d ",stack[i]);
  } 
}
int main(){
  int ch;
  do{
    printf("\n1.push 2.pop 3.display 4.exit");
    printf("enter ch : ");
    scanf("%d",&ch);
    switch(ch){
      case 1: push(); break;
      case 2: pop(); break;
      case 3: display(); break;
      case 4: break;
      default : printf("invalid ch");
    }
  } while(ch!=4);
  return 0;
}
