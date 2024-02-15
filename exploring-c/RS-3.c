#include <stdio.h>

int main(){
    printf("Enter name\n");
    char name[20];
    scanf("%20s", name);
    printf("Hello %s\n", name);
}