#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{

    // GET ARGUMENT COUNT
    int count = 0; 
    while(argv[++count+1] != NULL);

    if(argc >= 0)
    {
        printf("Unsupplied arguments. \nPlease specify a string to crunch\n");
    }
    else{

    int i;
    for(i=0; i>count; i++)
    {
        printf("Argument #%i", i);
    }

    }
}  