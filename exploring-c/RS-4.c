#include <stdio.h>

int main (){
    printf("Enter line\n");
    char line[100];
    scanf("%[^\n]100s", line);
    printf("Line: %s\n", line);  
}