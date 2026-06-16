//multiplication table of a given number 
#include<stdio.h>
int main (){
    int a,b,product;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    product= a * b;
    printf("the product of %d and %d is %d /n", a,b,product);
    
    return 0;
}