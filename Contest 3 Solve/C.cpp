#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        int keys[3];
        scanf("%d %d %d",&keys[0],&keys[1],&keys[2]);
        if(keys[x-1]==0||keys[keys[x-1]-1]==0){
            printf("No\n");
        }
        else printf("Yes\n");

    }
    return 0;
    
}