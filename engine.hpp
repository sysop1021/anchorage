#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "window.hpp"

class Engine
{
    public:
        Engine();
        ~Engine();

        void Update();
        void Render(sf::Drawable& drawable);

        Window& GetWindow();

    private:
        Window window;

};

#endif
