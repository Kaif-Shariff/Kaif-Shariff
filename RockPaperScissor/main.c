#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char player, comp;
int score, number, compscore;

int RandomNumber()
{
    srand(time(0));
    number = rand() % 100 + 1;
    return 0;
}

int compLogic()
{

    if(number <= 36)
    {
        comp = 'R';
    }
    else if(number >= 66)
    {
        comp = 'S';
    }
    else
    {
        comp = 'P';
    }
    return 0;
}
int Logic()
{
    if(player == 'R' && comp == 'P')
    {
        printf("\n---------------");
        printf("\n|Game Over! :C|");
        printf("\n---------------\n\n");
        compscore++;
    }
    else if(player == 'P' && comp == 'R')
    {
        printf("\n-----");
        printf("\n|WIN!|");
        printf("\n-----\n\n");
        score++;
    }
    else if(player == 'P' && comp == 'R')
    {
        printf("\n-----");
        printf("\nWIN!");
        printf("\n-----\n\n");
        score++;
    }
    else if(player == 'R' && comp == 'P')
    {
        printf("\n---------------");
        printf("\n|Game Over! :C|");
        printf("\n---------------\n\n");
        compscore++;
    }
    else if(player == 'R' && comp == 'S')
    {
        printf("\n-----");
        printf("\n|WIN|");
        printf("\n-----\n\n");
        score++;
    }
    else if(player == 'S' && comp == 'R')
    {
        printf("\n---------------");
        printf("\n|Game Over! :C|");
        printf("\n---------------\n\n");
        compscore++;
    }
    else if(player == 'S' && comp == 'P')
    {
        printf("\n-----");
        printf("\n|WIN|");
        printf("\n-----\n\n");
        score++;
    }
    else if(player == 'P' && comp == 'S')
    {
        printf("\n---------------");
        printf("\n|Game Over! :C|");
        printf("\n---------------\n\n");
        compscore++;
    }
    else if(player != 'P' || player != 'S' || player != 'R')
    {
        printf("\nError!");
    }
    else
    {
        printf("\n------");
        printf("\n|DRAW|");
        printf("\n------\n\n");
        score++;
        compscore++;
    }
}

int input()
{
    printf("\nEnter Your Choice: ");
    scanf("%c", &player);
    player = toupper(player);
}

int main()
{
    printf("--------------------------");
    printf("\n|Rock || Paper || Scissor|");
    printf("\n--------------------------");

    printf("\n\nR -> Rock || P -> Paper || S -> Scissors\n");

    for(int i = 0; i < 5; i++)
    {
        input();
        getchar();

        RandomNumber();

        compLogic();

        printf("\nYou Choose -> %c || Computer Choose-> %c", player, comp);

        Logic();

    }

    printf("\n\nYour Score = %d || Computer's Score = %d", score, compscore);

    if(compscore > score)
    {
        printf("\nGAME OVER");
    }
    else if(score > compscore)
    {
        printf("\nYou Win!");
    }
    else
    {
        printf("\nDraw");
    }

    return 0;
}
