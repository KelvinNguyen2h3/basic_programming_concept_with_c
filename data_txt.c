#include <stdio.h>

void write(char line[]) {
    FILE *fpointer = fopen("data.txt", "w");
    if (fpointer == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fprintf(fpointer, "%s", line);
    fclose(fpointer);
}

void read() {
    char line[255];
    
    FILE *fpointer = fopen("data.txt", "r");
    if (fpointer == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    
    if (fgets(line, sizeof(line), fpointer) != NULL) {
        printf("%s", line);
    }
    
    fclose(fpointer);
}

int main() { 
    char text[] = "Hello, world!";
    
    write(text);
    read();
    
    return 0;
}
