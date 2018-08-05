#include <stdio.h>
#include <string.h>
char *self_string(char *dest, const char *src)
{
    char *tmp = NULL;
    tmp = dest;
    while ( *src != '\0')
    {
        *(dest++) =*(src++);
    }
    *dest = '\0';
    return tmp;
}

int main(int argc, char const *argv[])
{
    char dest[10]={0};
    char dest_str[10] = {0};
    char src[15] = "12345678901234";
    char *point = NULL;
    
    point = self_string(dest,src);
    printf("dest=%s  point=%s\n",dest,point);
    point = NULL;
    point = strcpy(dest_str,src);
    printf("dest_str=%s point=%s\n",dest_str,point);
    return 0;
}
