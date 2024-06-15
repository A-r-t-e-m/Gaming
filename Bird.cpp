#include "Bird.h"
// Konstruktor klasy Bird
Bird::Bird()
    : velocity(0), gravity(1000.f), flapStrength(-350.f) {
    //texture.loadFromFile("C:/Users/koval/OneDrive/Dokumenty/Git/Game/bird.png");
    //sprite.setTexture(texture);
    sprite.setPosition(100, 300);
}

void Bird::flap(bool direction) {
    if(direction)
        velocity = flapStrength;
    else
        velocity = -flapStrength;
}
// Aktualizacja statusu ptaka
void Bird::update(sf::Time deltaTime) {
    velocity += gravity * deltaTime.asSeconds();
    sprite.move(0, velocity * deltaTime.asSeconds());

    if (sprite.getPosition().y < 0)
        sprite.setPosition(sprite.getPosition().x, 0);
    if (sprite.getPosition().y + sprite.getGlobalBounds().height > 600)
        sprite.setPosition(sprite.getPosition().x, 600 - sprite.getGlobalBounds().height);
}

sf::FloatRect Bird::getBounds() const {
    return sprite.getGlobalBounds();
}

void Bird::setPosition(float x, float y) {
    sprite.setPosition(x, y);
}

void Bird::setTexture(const sf::Texture& texture)
{
    sprite.setTexture(texture);
}
//Ustawienie grawitacji dla drobiu
void Bird::setGravity(int n)
{
    if(n == 0)
    {
        gravity = 1000.f;
        flapStrength = -350.0f;
    }
    if(n == 1)
    {
        gravity = 50.f;
        flapStrength = -100.0f;
    }
    if(n == 2)
    {
        gravity = 500.f;
        flapStrength = -175.0f;
    }
}

sf::Vector2f Bird::getPosition() const {
    return sprite.getPosition();
}

void Bird::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(sprite, states);
}
