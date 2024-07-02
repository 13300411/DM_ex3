#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num = rand();
    int i;
    int countH = 0, countT = 0;

    printf("Tossing a coin...\n");

    for(i = 1; i <= 3; i++){
        if(rand() % 2 == 0){
            printf("Round %d: Heads\n", i);
            countH++;
            }
        else{
            printf("Round %d: Tails\n", i);
            countT++;
        }
    }

    printf("Heads: %d, Tails: %d\n", countH, countT);

    return 0;


}