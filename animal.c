#include <stdio.h>
#include <string.h>

int main()
{
    // variable declaration
    char word1[20], word2[20], word3[20];
    // take input
    scanf("%s %s %s", word1, word2, word3);
    // check condition for animal
    if (strcmp(word1, "vertebrado") == 0)
    {
        if (strcmp(word2, "ave") == 0)
        {
            if (strcmp(word3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(word3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(word2, "mamifero") == 0)
        {
            if (strcmp(word3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(word3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(word1, "invertebrado") == 0)
    {
        if (strcmp(word2, "inseto") == 0)
        {
            if (strcmp(word3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(word3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(word2, "anelideo") == 0)
        {
            if (strcmp(word3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(word3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }
}