#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to check whether a number is even or odd : ");
    scanf("%d",&num);
    switch(num%2){
    case 0:
    {
        printf("%d is Even Number",num);
        break;
    }

    case 1:
    {
        printf("%d is Odd Number",num);
        break;
    }
    }
    return 0;
}