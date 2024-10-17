#include<stdio.h>
int main()
{
  int c,n,I;
  puts("input no of line");
  scanf("%d",&n);
  for(c=1;c<=n;c++)
  { 
  printf("\n");
  for(I=1;I<=c;I++)
  printf("%d",I);
  for(I=1;I<=c;I++)
  printf(" *");
  }
  return 0;}
 