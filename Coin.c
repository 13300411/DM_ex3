#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num = rand();
    int i;
    int countH = 0, countT = 0;
    char name[20];

    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

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

    if(countH > countT)
        printf("%s won!\n", name);
    else
        printf("%s lost!\n", name);

    return 0;


}