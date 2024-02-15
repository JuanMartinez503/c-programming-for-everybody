#include <stdio.h>

int main (){
    printf("Enter US Floor\n");
    int usFloor;
    scanf("%d", &usFloor);
    int euFloor = usFloor - 1;
    printf("EU Floor %d\n", euFloor);
}