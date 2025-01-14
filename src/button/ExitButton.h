#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"

class ExitButton: public Button
{
public:
	ExitButton(sf::Vector2f len, sf::Color color, sf::Vector2f Origin, sf::Vector2f pos);

	void Update(sf::Time deltaTime,  sf::RenderWindow& window);
};

