#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1){
        for(i=n;i>0;i--){
            for(j=n-i;j>0;j--){
                printf(" ");
            }
            for(j=i;j>0;j--){
               if((j>1 && j<i)&&(i>1 && i<n)){
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



