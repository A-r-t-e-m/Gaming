#ifndef BIRD_H
#define BIRD_H


#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Bird : public GameObject {
public:
    Bird();
    void flap(bool direction);
    void update(sf::Time deltaTime) override;
    sf::FloatRect getBounds() const override;
    void setPosition(float x, float y);
    void setTexture(const sf::Texture& texture);
    void setGravity(int n);
    sf::Vector2f getPosition() const;

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    float velocity;
    float gravity;
    float flapStrength;
};

#endif // BIRD_H
