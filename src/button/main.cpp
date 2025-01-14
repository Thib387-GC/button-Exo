#include "ColorButton.h"
#include "ExitButton.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Button");

    sf::View v = window.getView();
    v.setCenter(0, 0);
    window.setView(v);

    ColorButton buttonChangeColor(sf::Vector2f(200, 50), sf::Color::White, sf::Vector2f(100, 25), sf::Vector2f(0, 0));

    ExitButton buttonQuit(sf::Vector2f(200, 50), sf::Color::Red, sf::Vector2f(100, 25), sf::Vector2f(0, 200));


 
    sf::Color clearColor = sf::Color::Black;
    sf::Time time;

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
                    buttonChangeColor.Update(time, window);
                    buttonQuit.Update(time, window);
                }
            }
        }


        


        // clear the window with black color
        window.clear(buttonChangeColor.clearColor);

        // draw everything here...
        window.draw(buttonChangeColor);
        window.draw(buttonQuit);

        // end the current frame
        window.display();
    }

	return 0;
}
