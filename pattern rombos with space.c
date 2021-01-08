#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                printf(" ");
            }
            for(j=0;j<i;j++){
                    if((j>0 && j<i-1)&&(i>1 && i<n)){
                        printf("  ");
                    }
                    else{
                         printf("* ");
                    }
               }
            printf("\n");
        }
        for(i=n;i>0;i--){
            for(j=n-i;j>0;j--){
                printf(" ");
            }
            for(j=i;j>0;j--){
               if((j>1 && j<i)&&(i>0 && i<=n)){
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




