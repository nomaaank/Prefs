#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s1[n];
        char s2[n];
        scanf("%s",s1);
        scanf("%s",s2);
        bool flag=0;
        for(int i=0;i<n;i++){
           if(s1[i]=='R'&&s2[i]!='R'){
            printf("NO\n");
            flag=1;
            break;
           }
           else if(s1[i]=='G'&&s2[i]=='R'){
            printf("NO\n");
            flag=1;
            break;
           }
           else if(s1[i]=='B'&&s2[i]=='R'){
            printf("NO\n");
            flag=1;
            break;
           }
        }
        if(flag==0)printf("Yes\n");
    }
    return 0;
}