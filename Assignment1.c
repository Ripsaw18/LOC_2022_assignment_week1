#include <stdio.h>
int main(){
    char name[20],branch[20],hobbies[20];
    int regno[20];
    printf("Student Information \n");
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your registration number:");
    scanf("%d",&regno);
    printf("Enter your branch:");
    scanf("%s",&branch);
    printf("Enter your hobbies:");
    scanf("%s",&hobbies);
    printf("\n\n Name:%s\n regno:%d\n branch:%s\n hobbies:%s\n",name,regno,branch,hobbies);
    return 0;
} 