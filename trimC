#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ltrim(char *s)
{
    while (isspace(*s))
        s++;
    return s;
}

char *rtrim(char *s)
{
    char *back;
    int len = strlen(s);

    if (len == 0)
        return (s);

    back = s + len;
    while (isspace(*--back))
        ;
    *(back + 1) = '\0';
    return s;
}

char *trim(char *s)
{
    return rtrim(ltrim(s));
}

int main(int argc, char *argv[])
{
    char sz1[] = "  MQRFH  ";
    char sz2[] = " MQRFH";
    char sz3[] = "  MQR FH";
    char sz4[] = "MQRFH  ";
    char sz5[] = "MQRFH";
    char sz6[] = "M";
    char sz7[] = "M ";
    char sz8[] = " M";
    char sz9[] = "";
    char sz10[] = "        ";

    printf("sz1:[%s] %d\n", trim(sz1), strlen(sz1));
    printf("sz2:[%s] %d\n", trim(sz2), strlen(sz2));
    printf("sz3:[%s] %d\n", trim(sz3), strlen(sz3));
    printf("sz4:[%s] %d\n", trim(sz4), strlen(sz4));
    printf("sz5:[%s] %d\n", trim(sz5), strlen(sz5));
    printf("sz6:[%s] %d\n", trim(sz6), strlen(sz6));
    printf("sz7:[%s] %d\n", trim(sz7), strlen(sz7));
    printf("sz8:[%s] %d\n", trim(sz8), strlen(sz8));
    printf("sz9:[%s] %d\n", trim(sz9), strlen(sz9));
    printf("sz10:[%s] %d\n", trim(sz10), strlen(sz10));

    return 0;
}
