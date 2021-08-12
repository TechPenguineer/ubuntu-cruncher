#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{

    int count = 0; 

    char ParsedData[] = "";
    while(argv[++count+1] != NULL);

    parseData(argv[count]);

    printf("Crunching %i argumnets \n", count);
    return 0;
}  