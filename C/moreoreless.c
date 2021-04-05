#include <stdio.h>
#include <stdlib.h>

/* TODO
    - Faire jeu de base (+ ou -)
    - Faire le compteur de coups
    - Demander si autre partie
    - Créer plusieurs niveaux de difficulté (100, 1000, 10000)

*/
#define TRUE 1
#define FALSE 0

int main()
{
    srand(time(NULL));
    
    int input;
    int playing = TRUE;
    int randomNumber = rand() % (100 + 1);

    do
    {
        printf("What's the number ? : ");
        scanf("%d", &input);

        if (input == randomNumber)
            printf("You won ! It was %d\n", randomNumber);
        else if (input < randomNumber)
            printf("More !\n");
        else
            printf("Less !\n");
    } while (playing);
    
    return 0;
}