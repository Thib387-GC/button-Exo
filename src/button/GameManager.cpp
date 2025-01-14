#include "GameManager.h"
#include <SFML/Graphics.hpp>
#include "ColorButton.h"
GameManager* GameManager::m_Instance = nullptr;

GameManager::GameManager()
{

}
GameManager* GameManager::GetInstance()
{
	if (mInstance == nullptr)
	{
		mInstance = new GameManager();
	}
	return mInstance;
}

void GameManager::Update()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Button");

    sf::View v = window.getView();
    v.setCenter(0, 0);
    window.setView(v);

    ColorButton buttonChangeColor(sf::Vector2f(200, 50), sf::Color::White, sf::Vector2f(100, 25), sf::Vector2f(0, 0));

    Button buttonQuit(sf::Vector2f(200, 50), sf::Color::Red, sf::Vector2f(100, 25), sf::Vector2f(0, 200));



    sf::Color clearColor = sf::Color::Black;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        bool mousePress = false;
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePress = true;
                }
            }
        }

        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);
        sf::Time time;


        if (buttonChangeColor.RectButton->getGlobalBounds().contains(worldMousePos) && mousePress) {
            buttonChangeColor.Update(time, window);
        }

        if (buttonQuit.RectButton->getGlobalBounds().contains(worldMousePos) && mousePress) {
            window.close();
        }

        // clear the window with black color
        window.clear(buttonChangeColor.clearColor);

        // draw everything here...
        window.draw(buttonChangeColor);
        window.draw(buttonQuit);

        // end the current frame
        window.display();
    }
}
