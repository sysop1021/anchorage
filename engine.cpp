#include "engine.hpp"

Engine::Engine()
{

}

Engine::~Engine()
{

}

void Engine::Update()
{
    window.Update();
}

void Engine::Render(sf::Drawable& drawable)
{
    //window.PreDraw();
    window.Draw(drawable);
    //window.EndDraw();
}

Window& Engine::GetWindow()
{
    return window;
}

void Engine::HandleInput(sf::Transformable& transformable)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        // move sprite up
        transformable.move(0.0f, -8.0f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ||sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        // down
        transformable.move(0.0f, 8.0f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        // left
        transformable.move(-8.0f, 0.0f);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        // right
        transformable.move(8.0f, 0.0f);
    }
}
