#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rock paper sisssor

int game(char you, char computer){

    if(you == computer){
        return -1;
    }


    if(you == 'p' && computer == 's'){
        return 0;
    }else if(you == 'p' && computer == 'r'){
        return 1;
    }


    if(you == 's' && computer == 'r'){
        return 0;
    }else if(you == 's' && computer == 'p'){
        return 1;
    }

    
    if(you == 'r' && computer == 'p'){
        return 0;
    }else if(you == 'r' && computer == 's'){
        return 1;
    }
}

void main(){

    int n;
    
    char you, computer, result;

    srand(time(NULL));

    n = rand() % 100;

    if(n<33){
        computer = 's';
    }
    else if(n>33 && n<66){
        computer = 'p';
    }
    else{
        computer = 'r';
    }

    printf(" Press r for Rock  ||  Press p for Paper  || Press s for Sissor ");

    scanf("%c", &you);

    result = game(you,computer);

    if(result == -1){
        printf("Draw");
    }
    else if(result == 1){
        printf("you win");
    }
    else 
        printf("You Lost");

    printf( "\nyou choose: %c & computer choose: %c ", you,computer);


}