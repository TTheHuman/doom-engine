#include <stdio.h>


void pathFinder(){
 FILE *fptr;
    fptr = fopen("DOOM.WAD", "r");
    char buffer[100000];
        while (!feof(fptr)) {
 
        fread(buffer, sizeof(buffer), 1, fptr);
        // Print the read data
        printf("%s", buffer);
    }
 
    fclose(fptr);
    return 0;
}