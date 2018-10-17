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
    window.PreDraw();
    window.Draw(drawable);
    window.EndDraw();
}

Window& Engine::GetWindow()
{
    return window;
}
