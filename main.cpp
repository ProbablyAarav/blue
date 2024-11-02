#include <SFML/Graphics.hpp>
int main() {
    // Create a window with SFML
    sf::RenderWindow window(sf::VideoMode(800, 600), "Blue");

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the screen
        window.clear(sf::Color::Blue);

        // Update and draw game objects here

        // Display the screen
        window.display();
    }
    return 0;
}
