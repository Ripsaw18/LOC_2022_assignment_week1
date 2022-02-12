#include<stdio.h>
#include<math.h>
int main(){
    float r,d,c,a;
    printf("Enter the radius:\n");
    scanf("%f",&r);
    d=2*r;
    c=2*M_PI*r;
    a=M_PI*r*r;
    printf("Diameter:%f\nCircumference:%f\nArea:%f",d,c,a);
}