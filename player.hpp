#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
    public:
        Player();
        ~Player();

        void SetPosition(sf::Vector2i);
        void SetPosition(int x, int y);

        sf::Vector2i GetPosition();

    private:
        sf::Texture playerTexture;
        sf::Sprite playerSprite;

        sf::Vector2i playerPosition;

};

#endif
