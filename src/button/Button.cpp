#include "Button.h"

Button::Button(sf::Vector2f len, sf::Color color, sf::Vector2f Origin, sf::Vector2f pos)
{
	RectButton = new  sf::RectangleShape(len);
	RectButton->setFillColor(color);
	RectButton->setOrigin(Origin);
	RectButton->setPosition(pos);
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*RectButton);
}

