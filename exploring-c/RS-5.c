#include <stdio.h>

int main (){
    printf("Enter line\n");
    char line[100];
    fgets(line, 100, stdin);
    printf("Line: %s\n", line);  
}