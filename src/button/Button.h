#pragma once
#include <SFML/Graphics.hpp>

class Button:public sf::Transformable, public sf::Drawable
{


	public:
		sf::RectangleShape* RectButton;

		Button(sf::Vector2f len , sf::Color color , sf::Vector2f Origin,sf::Vector2f pos);
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

