using namespace std;
class player {
public:
    int balls;
    void init() {
        balls = 10;
    };
    bool winCondition() {
        if (balls == 20) {
           return true;
        } else {
            return false;
        }
    }
};

player turn(player Player1, player Player2, bool choice, int one_x_bet, int guessed) {
    int temp;
    if (choice)
        temp = 0;
    else
        temp = 1;
    if (guessed % 2 == temp) {
        Player1.balls += guessed;
        //return true;
    }
    else {
        Player1.balls -= one_x_bet;
        //return false;
    }
    return Player1;
}

class journal{
public:
    player Player1[100];
    player Player2[100];
    int num_of_turn[100];
    bool win_loss[100];
    int one_x_bet[100];
    int hypothesis[100];

    void make_a_move(player fstPlayer, player sndPlayer, bool choice, int bet, int guessed){
        int i = first_nonzero();
        Player1[i].balls = fstPlayer.balls;
        Player2[i].balls = sndPlayer.balls;
        num_of_turn[i] = i+1;

        if (i == 0) {
            // определения выйгрыша или пройгрыша для того КТО ХОДИТ!!!
            if (fstPlayer.balls > 10) {
                win_loss[i] = true;
            }
            else {
                win_loss[i] = false;
            }
        }
        else {
            if (i % 2 == 0) {
                if (Player1[i-1].balls < Player1[i].balls) {
                    win_loss[i] = true;
                }
                else {
                    win_loss[i] = false;
                }
            }
            else {
                if (Player2[i-1].balls < Player2[i].balls) {
                    win_loss[i] = true;
                }
                else {
                    win_loss[i] = false;
                }
            }
        }
        one_x_bet[i] = bet;
        hypothesis[i] = guessed;
    }

    void clear(){
        for (int i = 0; i < 100; i++) {
            Player1[i].balls = 0;
            Player2[i].balls = 0;
            num_of_turn[i] = 0;
            one_x_bet[i] = 0;
            hypothesis[i] = 0;
        }
    }
    int first_nonzero() {
        int i = 0;
        while (num_of_turn[i] != 0) {
            i++;
        }
        return i;
    }

    void show(){
        cout << "  num of turn   player1   player2   win or loss   bet\n";
        for (int i = 0; i < first_nonzero(); i++) {
            cout.width(13);
            cout << num_of_turn[i] << " ";
            cout.width(9);
            cout << Player1[i].balls << " ";
            cout.width(9);
            cout << Player2[i].balls << " ";
            cout.width(13);
            if (win_loss[i]) {
                cout << "WIN!";
            }
            else {
                cout << "LOSS!";
            }
            cout.width(5);
            cout << one_x_bet[i] << " " << "\n";
        }
        cout << '\n';
    }
};
