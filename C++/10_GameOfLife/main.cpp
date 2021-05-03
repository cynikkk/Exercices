// Enlever inutiles
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

// Algorithm : https://www.geeksforgeeks.org/conways-game-life-python-implementation/
// Voisins : https://media.geeksforgeeks.org/wp-content/uploads/20201102133039/GameOfLifeDiagram.png

/* Setup:
*   - Créer tableau à deux dimensions
*   - Faire la fenête SFML
*   - Afficher le tableau sous forme de grille
*   - Tester l'affichage du tableau en le remplissant de variables aléatoires (0-1)
*/

/* Règles:
*   - Si cellule vivante et < 2 voisins, meurt
*   - Si cellule vivante et 2 ou 3 voisins, vit
*   - Si cellule vivante et > 3 voisins, meurt
*   - Si cellule morte et 3 voisins, vit
*/

/* Algorithmie:
*   - A chaque génération, pour chaque cellule [i][j] :
        - Mettre à jour la valeur de la cellule en fonction de ses voisins en tenant compte des règles
        - Mettre à jour l'affichage
*/

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    window.setFramerateLimit(30);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.display();
    }

    return 0;
}