#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Remove leading whitespaces */
char *ltrim(char *const s)
{
    size_t len;
    char *cur;

    if (s && *s)
    {
        len = strlen(s);
        cur = s;

        while (*cur && isspace(*cur))
            ++cur, --len;

        if (s != cur)
            memmove(s, cur, len + 1);
    }

    return s;
}

/* Remove trailing whitespaces */
char *rtrim(char *const s)
{
    size_t len;
    char *cur;

    if (s && *s)
    {
        len = strlen(s);
        cur = s + len - 1;

        while (cur != s && isspace(*cur))
            --cur, --len;

        cur[isspace(*cur) ? 0 : 1] = '\0';
    }

    return s;
}

/* Remove leading and trailing whitespaces */
char *trim(char *const s)
{
    rtrim(s); // order matters
    ltrim(s);

    return s;
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
