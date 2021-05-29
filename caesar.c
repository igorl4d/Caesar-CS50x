#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage:./ceaser key\n");
        return 1;

    }
    else
    
    {
        string k = argv[1];
        for(int i=0; i< strlen(k); i++)
        {
            if(isdigit(k[i]) == 0)
            {
                printf("Usage./ceaser key/n");
                return 1;

            }    
    }
        
    int myKey = atoi(k);
    
    string texto = get_string("Plaintext:");
    
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isupper(texto[i]))
        {
        
        texto[i] = (texto[i] - 65);
        texto[i] = (texto[i] + myKey) % 26;
        texto[i] = (texto[i] + 65); 
    }
     if (islower(texto[i]))
    {
        texto[i] = (texto[i] - 97);
        texto[i] = (texto[i] + myKey) % 26;
        texto[i] = (texto[i] + 97);
    }
    if (isalpha(texto[i]) == 0)
    {  
        texto[i] = texto[i];
    }
}

        printf("ciphertext: %s", texto );
        printf("\n");
    }
}