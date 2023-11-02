#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace_vowels(string s)
{
    int n = strlen(s);
    char modified[n];

    for (int i = 0; i < n; i++)
    {
        switch (tolower(s[i]))
        {
            case 'a':
                modified[i] = '6';
                break;
            case 'e':
                modified[i] = '3';
                break;
            case 'i':
                modified[i] = '1';
                break;
            case 'o':
                modified[i] = '0';
                break;
            case 'u':
                modified[i] = 'u';
                break;
            default:
                modified[i] = s[i];
                break;
        }
    }
    modified[n] = '\0';
    return modified;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s string\n", argv[0]);
        return 1;
    }

    string s = argv[1];
    string modified = replace_vowels(s);

    printf("Original string: %s\n", s);
    printf("Modified string: %s\n", modified);

    return 0;
}
