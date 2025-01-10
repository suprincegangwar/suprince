#include<stdio.h>
#include<string.h>
int main (){
    struct book{
    char name[100];
    int price ;
    int noofpages;
    }  physics , maths , chemistry;

   strcpy( maths.name,"suprince");
    maths.price = 100;
    maths.noofpages = 500;
    printf("%s\n",maths.name);
    printf("%d\n",maths.price);
    printf("%d\n",maths.noofpages);

   strcpy( physics.name,"gangwar");
    physics.price = 100;
    physics.noofpages = 500;
    printf("%s\n",physics.name);
    printf("%d\n",physics.price);
    printf("%d\n",physics.noofpages);
}