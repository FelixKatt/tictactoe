#include <iostream>

using namespace std;

char fields[] = {'1','2','3','4','5','6','7','8','9'};

void board();
void startGame();
void game();

int main(){
        startGame();
        game();

}

void board(){
        cout << "\t       " << fields[0] << " | " << fields[1] << " | " << fields[2] << endl;
        cout << "\t       " << "----------" << endl;
        cout << "\t       " << fields[3] << " | " << fields[4] << " | " << fields[5] << endl;
        cout << "\t       " << "----------" << endl;
        cout << "\t       " << fields[6] << " | " << fields[7] << " | " << fields[8] << endl;


}
void startGame(){
        cout << " ____    __  ____ ___  __  ____ ___  ___" << endl;
        cout << "  /  / /      /  /__/ /     /  /  / /__ " << endl;
        cout << " /  / /__    /  /  / /__   /  /__/ /__  " << endl;
        cout << endl;
        cout << "\t" << "Player1: X " << " Player2: O" << endl;
        cout << endl;
        board();
}

void game(){
        bool player1Wins = false;
        bool player2Wins = false;
        int pickCount = 0;
        while(!player1Wins && !player2Wins) {
                int player1, player2;
                cout << "Player1:";
                cin >> player1;
                fields[player1-1] = 'X';
                board();
                pickCount++;
                if(pickCount != 9) {
                        break;
                }
                cout << "Player2:";
                cin >> player2;
                fields[player2-1] = 'O';
                board();
                pickCount++;

                if(fields[0] == fields[1] && fields[1] == fields[2]) {
                        if(fields[0] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[3] == fields[4] && fields[4] == fields[5]) {
                        if(fields[3] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[6] == fields[7] && fields[4] == fields[8]) {
                        if(fields[6] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[0] == fields[1] && fields[1] == fields[2]) {
                        if(fields[0] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[0] == fields[3] && fields[3] == fields[6]) {
                        if(fields[0] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[1] == fields[4] && fields[4] == fields[7]) {
                        if(fields[1] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[2] == fields[5] && fields[5] == fields[8]) {
                        if(fields[2] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[0] == fields[4] && fields[4] == fields[8]) {
                        if(fields[0] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
                if(fields[2] == fields[4] && fields[4] == fields[6]) {
                        if(fields[2] == 'X') {
                                player1Wins = true;
                        } else {
                                player2Wins = true;
                        }
                }
        }
        if(pickCount == 9 && !player1Wins && !player2Wins) {
                cout << "Both players lost" << endl;
        } else if(player1Wins && player2Wins) {
                cout << "draw" << endl;
        } else if(player1Wins && !player2Wins) {
                cout << "Player1 wins" << endl;
        } else {
                cout << "Player2 wins" << endl;
        }
}
