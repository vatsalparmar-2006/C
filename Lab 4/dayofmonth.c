 #include<stdio.h>

 void main(){
    int a,year;
    printf("enter a num of month:");
    scanf("%d",&a);

    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
        case 10:printf("31 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:printf("30 days");
        break;
        case 2:printf("28/29 days");
             
        break;
    }
 }