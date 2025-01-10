#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main ()
{
    typedef struct dateofbirth{
        int date ;
        char month[12];
        int year;
    }DOB ;
    DOB a,b;

    a.date = 21;
    strcpy(a.month,"July");
    a.year = 2005;

    b.date = 21;
    strcpy(b.month,"July");
    b.year = 2005;

    bool flag = true;
    if(a.date != b.date) flag = false;
    //if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;

    if (flag == true) printf("DOB are same");
    else printf("DOB are different");
    return 0;
}