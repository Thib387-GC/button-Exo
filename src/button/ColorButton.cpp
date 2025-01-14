#include "ColorButton.h"

ColorButton::ColorButton(sf::Vector2f len, sf::Color color, sf::Vector2f Origin, sf::Vector2f pos) : Button(len , color, Origin, pos)
{
	clearColor = sf::Color::Black;
}

void ColorButton::Update(sf::Time deltaTime, const sf::RenderWindow& window)
{
    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);


    if (RectButton->getGlobalBounds().contains(worldMousePos)) {
        if (clearColor == sf::Color::Black) {
            clearColor = sf::Color::Cyan;
        }
        else if (clearColor == sf::Color::Cyan) {
            clearColor = sf::Color::Yellow;
        }
        else if (clearColor == sf::Color::Yellow) {
            clearColor = sf::Color::Black;
        }
    }
}

