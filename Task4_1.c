#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, head=0, tail=0;
    char ary[8];

    printf("Who are you?\n>");
    scanf("%s", ary);
    printf("Hello, %s!\n", ary);
    
    printf("Tossing a coin...\n");
    for(int i = 1; i < 4; i++){
        num = rand()%2;
        if(num == 1){
        printf("Round %d: Heads\n", i);
        head++;
        }
        else{
            printf("Round %d: Tails\n", i);
            tail++;
        }
        
    }
    printf("Heads: %d, Tails: %d\n", head, tail);
    if(head > tail)printf("%s won\n", ary);
    else printf("%s lose\n", ary);

    return 0;

    
} 