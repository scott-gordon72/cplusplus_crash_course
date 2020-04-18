/*
 * Printing the letters of the alphabet in lowercase and uppercase using 
 * ASCII
 */

#include <cstdio>

int main()
{
    char alphabet[27];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 65;
    }
    printf("%s", alphabet);
}