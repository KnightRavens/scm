#include<stdio.h>
void square();
void circle();
void rectangle();
int main(){
    int a,b;
    float r;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&r);
    square();
    circle();
    rectangle();
    return 0;
}
void square(){
    int a;
    printf("the area of square is %d\n",a*a);
}
void circle(){
    float r;
    printf("the area of circle is %f\n",3.14*r*r);
}
void rectangle(){
    int a,b;
    printf("the area of rectangle is %d\n",a*b);
}