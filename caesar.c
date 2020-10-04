#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //ask user for command line arg
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n ");
        return 1;
    }

    //convert string to int
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Usage: ./caesar k\n ");
        return 1;
    }


    //ask user for plaintext
    string plainText = get_string("plaintext: ");

    //make array for lowcase letters starting from index 0 to 25
    int ail[26];
    int k = 0;
    for (int j = 97; j <= 122; j++)
    {
        ail[k] = j;
        k++;
    }

    //make array for cap letters starting from index 0 to 25
    int aic[26];
    int k1 = 0;
    for (int j1 = 65; j1 <= 90; j1++)
    {
        aic[k1] = j1;
        k1++;
    }

    printf("ciphertext: ");
    //check each char
    for (int i = 0; i < strlen(plainText); i++)
    {
        if (islower(plainText[i]))
        {
            int c = ((plainText[i] - 97) + key) % 26;
            printf("%c", ail[c]);
        }
        else if (isupper(plainText[i]))
        {
            int c = ((plainText[i] - 65) + key) % 26;
            printf("%c", aic[c]);
        }
        else
        {
            printf("%c", plainText[i]);
        }

    }
    printf("\n");

}


