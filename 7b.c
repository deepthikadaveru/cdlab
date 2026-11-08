#include <stdio.h>
int main(){
  char op[6][10],a1[6][10],a2[6][10],res[6][10];
  int i=0,j;
  
  //-B
  sprintf(op[i],"uminus");
  sprintf(a1[i],"B");
  sprintf(a2[i],"_");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //t1*c 
  sprintf(op[i],"*");
  sprintf(a1[i],"T1");
  sprintf(a2[i],"C");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //-b
  sprintf(op[i],"uminus");
  sprintf(a1[i],"B");
  sprintf(a2[i],"_");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //t3*c
  sprintf(op[i],"*");
  sprintf(a1[i],"T3");
  sprintf(a2[i],"C");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //t2+t4
  sprintf(op[i],"+");
  sprintf(a1[i],"T2");
  sprintf(a2[i],"T4");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //a=t5
  sprintf(op[i],"=");
  sprintf(a1[i],"T5");
  sprintf(a2[i],"_");
  sprintf(res[i],"A");
  i++;
  
  printf("Operator\tArg1\t\tArg2\t\tResult\n");
  for(j=0;j<i;j++)
    printf("%s\t\t%s\t\t%s\t\t%s\n",op[j],a1[j],a2[j],res[j]);
    
  return 0;
}
