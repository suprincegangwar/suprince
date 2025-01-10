#include <stdio.h>
int main (){
    int marks, grade;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    printf("Enter the grade : ");
    scanf("%d",&grade);
    switch(marks){
        case 90:
        printf("The marks is 90\n");
        switch(grade){
            case 1:
            printf("The grade is 1 ");
            break;
            default:
            printf("The grade is not 1 ");
            break;
        }
        break;
        case 80:
        printf("The marks is 80\n");switch(grade){
            case 2:
            printf("The grade is 2 ");
            break;
            default:
            printf("The grade is not 2 ");
            break;
            }
        break;
        case 70:
        printf("The marks is 70");
        break;
        default:
        printf("The marks  not 70 ,80 ,90");
        break;
    }
    return 0;
}