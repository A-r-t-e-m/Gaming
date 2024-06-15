#include "Pipe.h"

Pipe::Pipe(float startX, float startY)
    : speed(-200.f) {
    texture.loadFromFile("resource/pipe.png");
    sprite.setTexture(texture);
    sprite.setPosition(startX, startY);
}

void Pipe::update(sf::Time deltaTime) {
    sprite.move(speed * deltaTime.asSeconds(), 0);
}

sf::FloatRect Pipe::getBounds() const {
    return sprite.getGlobalBounds();
}

void Pipe::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(sprite, states);
}
