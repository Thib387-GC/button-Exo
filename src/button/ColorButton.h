#pragma once
#include "Button.h"



class ColorButton : public Button
{

public:

	sf::Color clearColor;

	ColorButton(sf::Vector2f len, sf::Color color, sf::Vector2f Origin, sf::Vector2f pos);

	virtual void Update(sf::Time deltaTime, const sf::RenderWindow& window);


};

