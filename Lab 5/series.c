#include<stdio.h>

int main(){
    int i=1,n;
    printf("Enter the number:");
    scanf("%d",&n);

    while(i<=n){
            printf("%d\n",i);
            i+=3;
    }
return 0;
}