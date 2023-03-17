#include<stdio.h>
void calculate(float value);
int main(){
    float value=100.0;
    calculate(value);
    return 0;
}
void calculate(float value){
    value = value + (0.18*value);
    printf("your final price is: %f",value);
}