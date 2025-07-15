#include<stdio.h>

int main(){

int t;
scanf("%d",&t);

int c=0;

while(t--){

    int l,a;

    scanf("%d %d",&l,&a);
    if((a-l)>=2)c++;
}
printf("%d\n",c);

return 0;
}