#include <iostream>
using namespace std;
class player {
public:
    int balls;
    void init();
    bool winCondition();
};

player turn(player Player1, player Player2, bool choice, int one_x_bet, int guessed);

class journal{
public:
    player Player1[100];
    player Player2[100];
    int num_of_turn[100];
    bool win_loss[100];
    int one_x_bet[100];
    int hypothesis[100];

    void make_a_move(player fstPlayer, player sndPlayer, bool choice, int bet, int guessed);
    void clear();
    int first_nonzero();

    void show();
};
