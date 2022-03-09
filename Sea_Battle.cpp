#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pole {
public:
    Cell pole[10][10];
};

class Cell {
public:
    int x;
    int y;
    string type; /// занята ли клетка каким-либо кораблём

};

class Player {
public:
    vector <Ship> a; /// корабли, принадлежащие игроку
};

class Ship {
    vector <Cell> a; /// клетки, занимаемые кораблём
    void dead() { ///функция, обрабатывающая попадания по кораблю
    }
};

class Game {
    void Shoot(Cell c) { ///функция, обрабатывающая выстрел
    }
};


int main() {

    return 0;
}