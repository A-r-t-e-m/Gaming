#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H


#pragma once
//#include <string>

class ScoreManager {
public:
    ScoreManager();
    void incrementScore();
    int getScore() const;
    void setScore(int score);

private:
    int score;
};


#endif // SCOREMANAGER_H
