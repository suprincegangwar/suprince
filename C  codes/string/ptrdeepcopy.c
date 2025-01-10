#include <stdio.h>
#include <string.h>
int main()
{
    char *s1 = "Physics wallah";// it in simple string not valid
    char *s2;
    s2 = s1;
    s2 = "college";
    puts(s1);
    puts(s2);
    return 0;
}