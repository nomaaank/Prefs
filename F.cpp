#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int ar[s];

    for(int i=0;i<s;i++){
        scanf("%d",&ar[i]);
    }

    int min=__INT_MAX__;

    int pos=0;
    for(int j=0;j<s;j++){
        if(ar[j]<min){
            min=ar[j];
            pos=j+1;
        }
    }

    printf("%d %d",min,pos);
    return 0;
    

}