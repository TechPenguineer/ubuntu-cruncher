#include "include/cruncher.h"

int main(int argc, char* argv[])
{

    int count = 0; 
    while(argv[++count+1] != NULL);

    

    printf("Crunching %i argumnets \n", count);
    return 0;
}  