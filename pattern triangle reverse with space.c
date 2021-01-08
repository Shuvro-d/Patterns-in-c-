#include<stdio.h>
int main()
{
    int n,i,j;
    while(1==scanf("%d",&n)){
        for(i=n;i>0;i--){
            for(j=i;j>0;j--){
                 if((i<n && i>1)&&(j<i && j>1)){
                    printf("  ");
                 }
                 else{
                    printf("* ");
                 }
            }
            printf("\n");
        }
    }
    return 0;
}


