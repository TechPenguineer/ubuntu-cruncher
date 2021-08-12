#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{

    // GET ARGUMENT COUNT
    int count = 0; 
    while(argv[++count] != NULL);

    if(argc == 1)
    {
        printf("Unsupplied arguments. \nPlease specify a string to crunch\nFormat: cruncher {STRING}\n");
    }
    else{
        char ParsedData[]={};
        int i;
        for(i=0; i<count; i++)
        {
              char *Data = strtok(argv[i], ",");
            printf("%s\n", Data);
            while (Data != NULL)
            {
                /
            }
            
          
        }

    }
}  