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

int main(){
    char start;
    cout << "\t-------------------------------" << endl;
    cout << "\t\t :Snake King:" << endl;
    cout << "\t-------------------------------" << endl;
    cout << "\tPress 's' to option: ";
    cin >> start;
    if(start == 's'){
        setup();
        while(!gameOver){
            draw();
            input();
            logic();
            Sleep(30);
            system("cls");
        }
    }
}

void setup(){
    gameOver = false;
    dir = STOP;
    headX = width/2;
    headY = height/2;
    fruitX = rand()%width;
    fruitY = rand()%height;
    score = 0;
}