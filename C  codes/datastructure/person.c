#include <stdio.h>
#include <string.h>
int main (){
     typedef struct person{
        char name[50];
        int salary;
        int age;
    } per ;
    //struct person A;
    per A;
    strcpy(A.name,"suprince");
    A.salary = 80000;
    A.age = 22;

    //struct person B;
    per B;
    strcpy(B.name,"Gangwar");
    B.salary = 50000;
    B.age = 23;

    printf("%s\n",A.name);
    printf("%d",B.age);
return 0;
}
