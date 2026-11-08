#include <stdio.h>
int main(){
  char op[4][10],a1[4][10],a2[4][10],res[4][10];
  int i=0,j;
  
   //c+d
  sprintf(op[i],"+");
  sprintf(a1[i],"C");
  sprintf(a2[i],"D");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //-B
  sprintf(op[i],"uminus");
  sprintf(a1[i],"B");
  sprintf(a2[i],"_");
  sprintf(res[i],"T%d",i+1);
  i++;

  //t2*t1
  sprintf(op[i],"*");
  sprintf(a1[i],"T2");
  sprintf(a2[i],"T1");
  sprintf(res[i],"T%d",i+1);
  i++;
  
  //t3=a
  sprintf(op[i],"=");
  sprintf(a1[i],"T3");
  sprintf(a2[i],"_");
  sprintf(res[i],"A");
  i++;
  
  printf("Operator\tArg1\t\tArg2\t\tResult\n");
  for(j=0;j<i;j++)
    printf("%s\t\t%s\t\t%s\t\t%s\n",op[j],a1[j],a2[j],res[j]);
    
  return 0;
}
