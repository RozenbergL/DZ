#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Card {
public:
    int number;
    string suit;
    int flag; /// флаг, показывающий, является ли карта козырем
};

class Player {
public:
    vector <Card> a; /// карты на руке у игрока

    void add(Card card) { /// добавляет карту на руку
    }
    void pop(Card card) { /// убирает карту из руки
    }
};

class Game {
public:
    int turn = 1;
    void figth(Player player1, Player player2, Card card_pl1, Card card_pl2) { ///функция, обрабатывающая один ход
        if (turn % 2 == 1) {
            Player attack = player1;
            Player defense = player2;
        }
        else {
            Player attack = player2;
            Player defense = player1;
        }
        ///  здесь должна быть функция, которая на основании аргументов вычисляет результат раунда, в зависимости от него добавляет карты в руку нужному игроку (или удаляет карты из его руки)
        turn += 1;
    }
};


int main() {

    return 0;
}