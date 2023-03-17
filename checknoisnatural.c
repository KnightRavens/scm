#include<stdio.h>
int main(){
    int a;
    printf("enter your number");
    scanf("%d",&a);
    if(a<=0){
        printf("the number is not natural number");
    }
    else{
        printf("the number is natural number");
    }
    return 0;
}