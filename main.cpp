#include "engine.hpp"
#include "player.hpp"

int main()
{
    Engine engine;
    Player p1;

    /*
    *  REFACTOR ALL THIS NONSENSE
    */
    sf::Texture bgTex;

    bgTex.loadFromFile("assets/bg.png");
    //p1Tex.loadFromFile("assets/p1.png");

    sf::Sprite bg;

    bg.setTexture(bgTex);
    //p1.setTexture(p1Tex);

    //p1.setOrigin(p1Tex.getSize().x / 2, p1Tex.getSize().y / 2);
    //p1.setPosition(300, 800 * 0.8f);
    /************************************/



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
