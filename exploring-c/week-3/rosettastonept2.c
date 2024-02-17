// this is the way to read a file in C
#include <stdio.h>

int main(){
  char line[1000];
  FILE *hand;
    hand = fopen("rosettastonept2.c", "r");
    while (fgets(line, 1000, hand) != NULL){
        printf("%s", line);
    }
}
//the for loops are the same as javascript
 