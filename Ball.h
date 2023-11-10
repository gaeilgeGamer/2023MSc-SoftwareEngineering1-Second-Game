#ifndef BALL_H
#define BALL_H

#include "raylib.h"

class Ball{
    private:
    Vector2 position;
    float radius;
    Color color;

    public:
    Ball(Vector2 pos, float r, Color c);

    void Draw();

    void Move(Vector2 offset);

    Vector2 GetPosition() const;

    float GetRadius() const; 
};

#endif