#include <stdio.h>

int main()
{int a ;// Ram 
printf("Enter 1 Number :" );
scanf("%d",&a);
int b ;//Shyam
printf("Enter 2 Number :" );
scanf("%d",&b);
int c ;//Ajay
printf("Enter 3 Number :" );
scanf("%d",&c);
if(a<b){
    if(a<c)
    {printf("%d is youngest" ,a);}
    else{printf("%d is youngest" ,c);}
}
else{
    if(b<c)
    {printf("%d  is youngest", b);}
    else{printf("%dis youngest",c);}
}

    return 0;
}