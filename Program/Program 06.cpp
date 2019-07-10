#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;

void printIntro(){
    cout << "Welcome to the dice game Pig!" << endl << "The objective is to be first to score 100 points." << endl << endl;
    
    return;
}

int humanTurn(string pName, int pScore){
    int v = 0;
    int pScurr = 0;
    char uI = 'y';
    
    while (uI == 'y'){
        v = (rand() % 6) + 1;
        cout << pName << endl;
        cout << "You rolled a " << v;
        
        if (v == 1){
            cout << " (PIG!)";
            cout << endl << "Your turn is over" << endl << "Your score: " << pScore << endl;
            pScurr = 0;
            uI = 'n';
            cout << endl;
        }
        else{
            pScurr = pScurr + v;
            
            if ((pScore + pScurr) >= 100){
                uI = 'n';
                cout << endl << "Your score: " << pScore + pScurr << endl << endl;;
            }
            else if ((pScore + pScurr) <= 99){
                cin >> uI;
                cout << endl << "Your score: " << pScore + pScurr << endl << "Do you want to roll again? (y/n): " << endl;
            }
        }
    }
    
    pScore = pScore + pScurr;
    
    return pScore;
}
        

int main() {
    srand(4444);

    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;

    printIntro();

    cout << "Player 1 - Enter your name: ";
    cin >> player1name;
    cout << endl;

    cout << "Player 2 - Enter your name: ";
    cin >> player2name;
    cout << endl;
    
    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {
        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
        }
        else {
            player2score = humanTurn(player2name, player2score);
        }    
        
        if (turn == PLAYER1)
            turn = PLAYER2;
        else
            turn = PLAYER1;            
    }
    
    if (player1score >= WINNING_SCORE)
        cout << player1name << " wins!" << endl;
    else
        cout << player2name << " wins!" << endl;

    return 0;
}
