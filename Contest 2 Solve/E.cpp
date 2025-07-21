#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);

    // int revidx=strlen(str)-1;

    // int flag=0;


    // for(int i=0;i<strlen(str);i++){
    //     if(str[i]!=str[revidx]){
    //         flag=1;
    //         printf("No\n");
    //         break;
    //     }
    //     revidx--;
    // }
    // if(flag==0)printf("Yes\n");

    int i=0,j=strlen(str)-1;
    int flag=0;
    while(i<=j){
        if(str[i]!=str[j]){
            flag=1;
           printf("No\n");
            break; 
        }
        i++,j--;
    }
    if(flag==0)printf("Yes\n");

    return 0;

}