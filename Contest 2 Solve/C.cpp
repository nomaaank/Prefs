#include<stdio.h>
int main(){
    char str[1000];
    scanf("%s",str);
    if(str[0]>='a'&&str[0]<='z'){
        str[0]-=32;
    }
    printf("%s\n",str);
    return 0;
}