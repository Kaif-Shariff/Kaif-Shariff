#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int number, playerscore, compscore;
char answer, player, comp;

int numGenerator()
{
    srand(time(0));
    number = rand() % 100 + 1;
}

int logic()
{
    if (player == 'R' && comp == 'S') //1
    {
        printf("\nRock beats Scissor\n");
        playerscore++;
    }
    else if (player == 'S' && comp == 'R') //2
    {
        printf("\nRock beats Scissor\n");
        compscore++;
    }
    else if (player == 'R' && comp == 'P') //3
    {
        printf("\nPaper beats Rock\n");
        compscore++;
    }
    else if (player == 'P' && comp == 'R') //4
    {
        printf("\nPaper beats Rock\n");
        playerscore++;
    }
    else if (player == 'S' && comp == 'P') //5
    {
        printf("\nScissors beats Paper\n");
        playerscore++;
    }
    else if (player == 'S' && comp == 'R') //6
    {
        printf("\nRock Beats Scissors\n");
        compscore++;
    }
    else if (player == 'P' && comp == 'S') //7
    {
        printf("\nScissors beats Paper\n");
        compscore++;
    }
    else if (player == 'R' && comp == 'S') //8
    {
        printf("\nRock beats Scissors\n");
        playerscore++;
    }
    else if (player == 'R' && comp == 'R') //9
    {
        printf("\n---");
        printf("\nTie\n");
        printf("---\n");
    }
    else if (player == 'S' && comp == 'S') //10
    {
        printf("\n---");
        printf("\nTie\n");
        printf("---\n");
    }
    else if (player == 'P' && comp == 'P') //11
    {
        printf("\n---");
        printf("\nTie\n");
        printf("---\n");
    }
    else //12
    {
        printf("\nEnter Valid Input\n");
    }

    return 0;
}

int complogic()
{

    if (number <= 36)
    {
        comp = 'P';
    }
    else if (number > 36 && number <= 66)
    {
        comp = 'R';
    }
    else
    {
        comp = 'S';
    }

    return 0;
}

int main()
{

    do
    {
        printf("\n-----------------------");
        printf("\nRock | Paper | Scissors\n");
        printf("-----------------------\n");

        printf("\nPress R, P or S: ");
        scanf(" %c", &player); //This was causing problem because i forgot to put space in scanf. scanf("%c", &player);
        player = toupper(player);

        numGenerator();
        complogic();

        printf("\nPlayer = %c || Computer = %c\n", player, comp);

        logic();

        printf("\n----------------");
        printf("\n     Score");
        printf("\nPlayer\tComputer\n  %d\t   %d", playerscore, compscore);
        printf("\n----------------\n");

        printf("\nWould you like to play again? (Y/N): ");
        scanf(" %c", &answer);
        answer = toupper(answer);
    } while (answer == 'Y' || answer == 'y');

    printf("\n");

    return 0;
}