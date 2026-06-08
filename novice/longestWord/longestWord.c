// Write a C program that reads a string and that returns the longest word and its length.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];
    int count = 0;
    int max = 0;
    char *word_start = NULL;
    char *max_start = NULL;  
    
    printf("%s\n", "Enter the string: ");
    fgets(str, sizeof(str), stdin);

    char *p = str;

    while( *(p) != '\0' )
    {

        if (!isspace(*p) && !ispunct(*p))
        {

            if (count == 0)
                word_start = p;

            count++;
            if(count > max)
            {
                max = count;
                max_start = word_start;
            }
        }
        else
        {
            count = 0;
        }

        p++;
    }

    printf("%s", "Longest word: ");
    for (int i = 0; i <= max; i++)
    {
        putchar(max_start[i]);
    }
    
    printf("%s", "Lenght: ");
    printf("%d\n", max);

}


