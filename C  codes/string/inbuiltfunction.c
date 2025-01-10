#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Physics wallah";
    int x = strlen(str);
    printf("%d",x);
    char s1[15] = "college Wallah";
    char s2[15];
    strcpy(s2,s1);//deep copy
    s2[0] = 'P';
    printf("\n%s",s2);
    char s3[] = "suprince";
    char s4[] = " Gangwar";
    strcat(s3,s4);
    printf("\n%s",s3);
    return 0;
}