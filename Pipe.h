#ifndef PIPE_H
#define PIPE_H


#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Pipe : public GameObject {
public:
    Pipe(float startX, float startY);
    void update(sf::Time deltaTime) override;
    sf::FloatRect getBounds() const override;

protected:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    float speed;
};


#endif // PIPE_H
