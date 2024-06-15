#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#pragma once
#include <SFML/Graphics.hpp>

class GameObject : public sf::Drawable {
public:
    virtual void update(sf::Time deltaTime) = 0;
    virtual sf::FloatRect getBounds() const = 0;
};

#endif // GAMEOBJECT_H
