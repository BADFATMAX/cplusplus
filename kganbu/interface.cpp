#include "interface.h"
void announce_ai(int n){
    using namespace std;
    switch (n)
    {
        case 1:
            cout << "Computer is generating a number...Generated \n Make your turn: input the bet & the parity of enemy's balls (even or odd)\n";
            break;
        case 2:
            cout << "Turn recorded! Showing result...\n";
            break;
        case 3:
            cout << "Your turn to guess a number, computer will make its turn\n";
            break;
        case 4:
            cout << "Player WON!\n";
            break;
        case 5:
            cout << "Computer WON!\n";
            break;
        default:
            cout << "Do you want to continue the game?(y/n)\n";
            break;
    }
}
void multiplayer(int n){
    using namespace std;
    switch (n)
    {
        case 1:
            cout << "Player is generating a number... \n";
            break;
        case 2:
            cout << "Turn recorded!\n";
            break;
        case 3:
            cout << "Make your turn: input the bet & the parity of enemy's balls (even or odd)\n";
            break;
        case 4:
            cout << "Player_1 WON!\n";
            break;
        case 5:
            cout << "Player_2 WON!\n";
            break;
        default:
            cout << "Do you want to continue the game?(y/n)\n";
            break;
    }
}
void announce_menu() {
    using namespace std;
    cout << "Welcome to 오징어게임! \n Press ENTER to continue\n";
    std::string c;
    getline(cin, c);
    cout << "Main Menu \n 1.PVE Mode (with computer) \n 2.PVP Mode (친구에 대하여)\n";
}