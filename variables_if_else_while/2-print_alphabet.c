#include <stdio.h>

void printAlphabet(void);

int main(void)
{
    printAlphabet();
    putchar('\n');  // Imprimer un caractère de nouvelle ligne après l'alphabet
    return 0;
}

void printAlphabet(void)
{
    char low;

    for (low = 'a'; low <= 'z'; low++)
    {
