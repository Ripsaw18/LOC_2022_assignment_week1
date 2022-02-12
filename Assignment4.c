#include<stdio.h>
int main(){
    int a,b,c;
    printf("1.ADD\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("Choose Oparation:");
    scanf("%d",&c);
    scanf("%d%d",&a,&b);
    switch (c)
    {
    case 1 :
        printf("%d",a+b);
        break;
    case 2 :
        printf("%d",a-b);
        break;
    case 3 :
        printf("%d",a*b);
        break;
    case 4 :
        printf("%d",a/b);
        break;    
    default:
        printf("wrong operation input");
    }
}