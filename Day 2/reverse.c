// reverse of a number 
#include<stdio.h>
int main (){
    int num,reverse=0, remainder;
    printf("enter a integer:");
    scanf("%d", & num );
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    printf("rversed number =%d\n",reverse);
    return 0;
}