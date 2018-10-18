#include "engine.hpp"

int main()
{
    Engine engine;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (engine.GetWindow().IsOpen() )
    {
        engine.Update();
        engine.Render(shape);
        engine.HandleInput(shape);
    }

    return 0;
}
