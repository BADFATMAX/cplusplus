#include "model.h"
#include "interface.h"
#include "time.h"
#include <random>
#include <string>
#include <conio.h>

void pvp();
void pve();

void menu(){
    announce_menu();
    char d, c;
    d = getch();
    switch (d) {
        case 49:
            pve();
            break;
        case 50:
            pvp();
            c = getch();
            if (c == 32)
                menu();
            break;
        default:
            c = getch();
            system("cls");
            menu();
    }
}

void pve() {
    player comp;
    player user;
    comp.init();
    user.init();
    int bet;
    string parity;
    bool choice;
    journal gametable;
    gametable.clear();
    int guessed;
    srand(time(NULL));
    while (!(user.winCondition()) && !(comp.winCondition())) {
        if (comp.balls > 1) {
            guessed = ((rand() % min((comp.balls - 1),(user.balls-1))) + 1);
        }
        else {
            guessed = 1;
        }
        announce_ai(1);
        cin >> bet;
        while (bet > user.balls || bet < 0) {
            cout << "Write correct amount of balls ( <= your balls )\n";
            cin >> bet;
        }
        cin >> parity;
        while (parity != "even" && parity != "odd") {
            cout << "Write correct parity (even or odd)\n";
            cin >> parity;
        }
        if (parity == "even") {
            choice = true;
        } else if (parity == "odd") {
            choice = false;
        } else {

        }
        announce_ai(2);
        user = turn(user, comp, choice, bet, guessed);
        comp.balls = 20 - user.balls;
        gametable.make_a_move(user, comp, choice, bet, guessed);
        gametable.show();
        if ((user.winCondition()) || (comp.winCondition())) {
            if (user.winCondition())
                announce_ai(4);
            else
                announce_ai(5);
            break;
        }
        if (comp.balls > 1) {
            bet = ((rand() % min((comp.balls - 1),(user.balls-1))) + 1);
        }
        else {
            bet = 1;
        }
        int comp_parity = (rand() % 1);
        if (comp_parity == 0) {
            choice = true;
        } else if (comp_parity == 1) {
            choice = false;
        } else {

        }
        announce_ai(3);
        cin >> guessed;
        while (guessed > user.balls || guessed < 0) {
            cout << "Write correct amount of guessed balls ( <= your balls )\n";
            cin >> guessed;
        }
        announce_ai(2);
        comp = turn(comp, user,choice,bet, guessed);
        user.balls = 20 - comp.balls;
        gametable.make_a_move(user, comp, choice, bet, guessed);
        gametable.show();
        if ((user.winCondition()) || (comp.winCondition())) {
            if (user.winCondition())
                announce_ai(4);
            else
                announce_ai(5);
            break;
        }
    }
    announce_ai(6);
    char temp;
    temp = getch();
    while (temp != 'y' && temp != 'n') {
        temp = getch();
    }
    if (temp == 'y') {
        pve();
    }
    else {
        menu();
    }
}



void pvp() {
    player user1;
    player user2;
    user1.init();
    user2.init();
    int bet;
    string parity;
    bool choice;
    journal gametable;
    gametable.clear();
    int guessed;
    while (!(user2.winCondition()) && !(user1.winCondition())) {
        multiplayer(1);
        cin >> guessed;
        while (guessed > user2.balls || guessed < 0) {
            cout << "Write correct amount of balls ( <= your balls )\n";
            cin >> guessed;
        }
        system("cls");
        multiplayer(2);
        //        cout << guessed;
        multiplayer(3);
        cin >> bet;
        while (bet > user1.balls || bet < 0) {
            cout << "Write correct amount of balls ( <= your balls )\n";
            cin >> bet;
        }
        cin >> parity;
        while (parity != "even" && parity != "odd") {
            cout << "Write correct parity (even or odd)\n";
            cin >> parity;
        }
        multiplayer(2);
        if (parity == "even") {
            choice = true;
        } else if (parity == "odd") {
            choice = false;
        } else {

        }
        user2 = turn(user2, user1, choice, bet, guessed);
        user1.balls = 20 - user2.balls;
        gametable.make_a_move(user2, user1, choice, bet, guessed);
        gametable.show();
        if ((user2.winCondition()) || (user1.winCondition())) {
            if (user2.winCondition())
                multiplayer(4);
            else
                multiplayer(5);
            break;
        }
        multiplayer(1);
        cin >> guessed;
        while (guessed > user1.balls || guessed < 0) {
            cout << "Write correct amount of balls ( <= your balls )\n";
            cin >> guessed;
        }
        system("cls");
        multiplayer(2);
        multiplayer(3);
        cin >> bet;
        while (bet > user2.balls || bet < 0) {
            cout << "Write correct amount of balls ( <= your balls )\n";
            cin >> bet;
        }
        string user1_parity;
        cin >> user1_parity;
        while (user1_parity != "even" && user1_parity != "odd") {
            cout << "Write correct parity (even or odd)\n";
            cin >> user1_parity;
        }
        if (user1_parity == "even") {
            choice = true;
        } else if (user1_parity == "odd") {
            choice = false;
        } else {

        }
        multiplayer(2);
        user1 = turn(user1, user2,choice,bet, guessed);
        user2.balls = 20 - user1.balls;
        gametable.make_a_move(user2, user1, choice, bet, guessed);
        gametable.show();
        if ((user2.winCondition()) || (user1.winCondition())) {
            if (user2.winCondition())
                multiplayer(4);
            else
                multiplayer(5);
            break;
        }
    }
    multiplayer(6);
    char temp;
    temp = getch();
    while (temp != 'y' && temp != 'n') {
        temp = getch();
    }
    if (temp == 'y') {
        pvp();
    }
    else {
        menu();
    }
}
