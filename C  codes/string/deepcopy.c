#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Physics wallah";
    int k = 0, size = 0;
    while (s1[k] != '\0')
    {
        size++;
        k++;
    }
    char s2[size];
    for (int i = 0; i <= size; i++)
    {
        s2[i] = s1[i];
    }
    puts(s2);
    return 0;
}