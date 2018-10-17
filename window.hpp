#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <SFML/Graphics.hpp>

class Window
{
    public:
        Window();
        ~Window();

        void PreDraw();
        void Draw(sf::Drawable& drawable);
        void EndDraw();

        void Update();

        bool IsOpen();

    private:
        sf::RenderWindow window;
        sf::Event event;

        bool open;

};

#endif
