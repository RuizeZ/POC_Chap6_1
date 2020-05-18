/*
RuizeZ
5/18/2020
Write a function that will search a string for any one of a given set of characters.
To illustrate, suppose source points to ABCDEFG. If chars points to XYZ,
JURY, or QQQQ, the function should return NULL.If chars points to XRCQEF,
the function should return a pointer to the C in source. The strings that the
arguments point to are never modified.
*/
#include <stdio.h>
char *find_char( char const *source, char const *chars );
int main(void)
{
    char inputsource[100];
    char inputchars[100];
    char *position = 0;
    printf("Enter the source string: ");
    gets(inputsource);
    //printf("%s\n",inputsource);
    printf("Enter the chars string: ");
    gets(inputchars);
    //printf("%s\n",inputchars);

    position = find_char(inputsource, inputchars);
    printf("%p\n",position);
    printf("%c\n",*position);
}

char *find_char( char const *source, char const *chars )
{
    char const *tempchars = 0;
    if ((source == 0) || (chars == 0))
    {
        return 0;
    }
    while ( *source != '\0')
    {
        tempchars = chars;
        while (*tempchars != '\0')
        {
            if (*tempchars == *source)
            {
                return (char *)source;
            }
            else
            {
                tempchars++;
            }
        }
        source++;
    }
    return 0;
}