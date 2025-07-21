#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1)flag=true;
    }
    if(flag==true)printf("Hard\n");
    else printf("Easy\n");

    return 0;

}