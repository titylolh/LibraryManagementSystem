#include "src/lib/monkeydb/monkeydb.h"
#include <stdio.h>

void read() {
    FILE *filePointer;
    char buffer[1024];
    filePointer = fopen("example.txt", "r");
    
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);

    printf("went sucefful");

    return;
}

void write() {
    FILE *filePointer;
    filePointer = fopen("./root\\database01\\example.txt", "a+");
    
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    fprintf(filePointer, "Hello, World!\n");
    fclose(filePointer);

    printf("went sucefful");

    return;
}