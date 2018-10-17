#include "engine.hpp"

int main()
{
    Engine engine;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    engine.Render(shape);
    engine.Update();

    return 0;
}
