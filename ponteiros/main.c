#include <stdio.h>

#define max 255

// GLOBAL
 int y = 1;

void incrementoX(){
    // LOCAL
    int x = 1;
    while (x < 5){
        y++;
        x++;
    }
    printf("x = %d", x);
}


int main(int argc, char* argv[]){

    int z = 1;
    
    incrementoX(z);

    printf("\ny = %d", y);
    printf("\nz = %d", z);

    return 0;
}