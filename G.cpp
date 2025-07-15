#include<stdio.h>
int main(){
  int h,l;
  scanf("%d %d",&h,&l);
  int at=0;
  while(h>0){
    h-=l;
    at++;
  }
  printf("%d\n",at);
  return 0;
  
}