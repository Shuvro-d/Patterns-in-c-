#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
