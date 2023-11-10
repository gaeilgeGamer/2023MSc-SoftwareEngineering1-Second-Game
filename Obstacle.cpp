#include "Obstacle.h"

Obstacle::Obstacle(Vector2 pos, Vector2 sz, Color c, float s)
:   position(pos),
    size(sz),
    color(c),
    speed(s){}

Obstacle::Obstacle(): position ({0,0}),size({0,0}), color(BLANK), speed(0.0f) {}

void Obstacle::Draw(){
    DrawRectangleV(position, size, color);
}

void Obstacle::Update(){
    position.y += speed;
}

bool Obstacle::CheckCollision(Vector2 ballPosition, float ballRadius){
    Rectangle obstacleRect = {position.x, position.y, size.x, size.y};
    return CheckCollisionCircleRec(ballPosition, ballRadius, obstacleRect);
}

bool Obstacle::IsOutOfScreen(){
    return position.y>GetScreenHeight() + size.y;
}
