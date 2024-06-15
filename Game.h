#ifndef GAME_H
#define GAME_H

#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>
#include "GameObject.h"
#include "Bird.h"
#include "Pipe.h"
#include "ScoreManager.h"

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update(sf::Time deltaTime);
    void render();
    void loadResources();
    void saveGameState();
    void loadGameState();
    void handleCollisions();
    void resetGame();
    void selectNextCharacter();
    void selectPreviousCharacter();

    sf::RenderWindow window;
    std::vector<std::unique_ptr<GameObject>> gameObjects;
    Bird* bird;
    sf::Clock clock;
    ScoreManager scoreManager;

    sf::Font font;
    sf::Text scoreText;
    sf::Text menuText;
    sf::Text gameOverText;
    sf::Text characterText;

    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;

    enum class GameState { Menu, Playing, GameOver } gameState;

    std::vector<sf::Texture> birdTextures;
    int currentBirdIndex;
};

#endif // GAME_H
