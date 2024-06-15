#include "ScoreManager.h"

ScoreManager::ScoreManager()
    : score(0) {}

void ScoreManager::incrementScore() {
    score++;
}

int ScoreManager::getScore() const {
    return score;
}

void ScoreManager::setScore(int score) {
    this->score = score;
}
