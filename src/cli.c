#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{

    // GET ARGUMENT COUNT
    int count = 0; 
    while(argv[++count] != NULL);

    if(argc == 1 || argc == 3)
    {
        printf("Unsupplied/Too many arguments. \nPlease specify a string to crunch\nFormat: cruncher {STRING}\n");
    }
    else if(argc == 2){
        char buf[] = argv[2];
        int i = 0;
        char *p = strtok(buf,"");
        char *array[strlen(buf)];

        while (p != NULL)
        {
            array[i++] = p;
            p = strtok(NULL, "");
        }

        for(i=0; i<strlen(buf); i++)
                printf("%s\n", array[i]);

        
    }
}  