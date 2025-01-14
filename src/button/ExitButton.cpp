#include "ExitButton.h"
ExitButton::ExitButton(sf::Vector2f len, sf::Color color, sf::Vector2f Origin, sf::Vector2f pos) : Button(len, color, Origin, pos)
{
}

void ExitButton::Update(sf::Time deltaTime, sf::RenderWindow& window)
{
    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);


    if (RectButton->getGlobalBounds().contains(worldMousePos)) {
        window.close();

    }
}