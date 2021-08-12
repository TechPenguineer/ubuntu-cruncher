#include "include/cruncher.h"

int main(int argc, char* argv[])
{

    int count = 1; 
    while(argv[++count] != NULL);

    printf("%i\n", count);
    return 0;
}  