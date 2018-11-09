#include "player.hpp"

Player::Player()
{
    playerTexture.loadFromFile("assets/p1.png");
    playerSprite.setTexture(playerTexture);

    playerSprite.setOrigin(playerTexture.getSize().x / 2, playerTexture.getSize().y / 2);
    playerSprite.setPosition(300, 700);
}

Player::~Player()
{

}
