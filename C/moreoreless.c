#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

void clr() { system("clear"); }

int main()
{
    srand(time(NULL));
    
    int input;
    int playing = TRUE;
    int difficulty = 0, tryNumber = 0, randomNumber;

    while(playing)
    {
        if (difficulty == 0) // Initialization
        {
            do
            {
                printf("Select difficulty :\n1. 0-100\n2. 0-1000\n3. 0-10000\n");
                scanf("%d", &input);

                if (input > 0 && input < 4)
                {
                    switch (input)
                    {
                    case 1:
                        difficulty = 100;
                        break;
                    case 2:
                        difficulty = 1000;
                        break;
                    case 3:
                        difficulty = 10000;
                        break;
                    }
                    clr();
                    break; // Escape while
                }
                else
                    printf("Cannot recognize difficulty, retry.");
            } while(TRUE);

            randomNumber = rand() % (difficulty + 1);
        }
        
        printf("What's the number ? : ");
        scanf("%d", &input);

        if (input == randomNumber)
        {
            printf("You won ! It was %d\nYou found it in %d tries.\n", randomNumber, tryNumber);
            printf("Do you want to replay ? (1 : yes, 0 : no) ");
            scanf("%d", &input);

            if (input)
            {
                playing = TRUE;
                difficulty = 0;
            }
            else
                playing = FALSE;
        }
        else if (input < randomNumber)
        {
            printf("More !\n");
            tryNumber++;
        }
        else
        {
            printf("Less !\n");
            tryNumber++;
        }
    }
    
    return 0;
}