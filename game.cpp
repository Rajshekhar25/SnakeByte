#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

enum Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tailx[100], taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();