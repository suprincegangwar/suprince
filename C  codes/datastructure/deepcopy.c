#include <stdio.h>
#include <string.h>
int main (){
     typedef struct person{
        char name[50];
        int salary;
        int age;
    } per ;
    per A , B , C;
    strcpy(A.name,"suprince");
    A.salary = 80000;
    A.age = 22;

   B = A; // B ma bhi A aa gya

   strcpy(B.name,"gangwar");

    printf("%s\n",B.name);
    printf("%d",B.age);
return 0;
}
