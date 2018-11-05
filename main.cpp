#include "engine.hpp"

int main()
{
    Engine engine;

    sf::Texture bgTex, p1Tex;

    bgTex.loadFromFile("assets/bg.png");
    p1Tex.loadFromFile("assets/p1.png");

    sf::Sprite bg, p1;

    bg.setTexture(bgTex);
    p1.setTexture(p1Tex);



    while (engine.GetWindow().IsOpen() )
    {
        engine.Update();
        engine.GetWindow().PreDraw();
        engine.Render(bg);
        engine.Render(p1);
        engine.GetWindow().EndDraw();
        engine.HandleInput(p1);
    }

    return 0;
}
