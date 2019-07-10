#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;
const int PLAYER1 = 0;
const int PLAYER2 = 1;

void clearScreen(){
    cout << endl;
    if (CLEAR_SCREEN)
        cout << "\033c";
    cout << endl;

    return;
}

void initVector(vector<char>& v){
    char C = 'a';
    
    for (int i = 0; i < v.size(); ++i)
        v.at(i) = C + i;
        
    return;
}

void drawBoard(const vector<char>& gameBoard){
    clearScreen();
    for (int i = 0; i < 9; i += 3){
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6){
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}

bool validPlacement(const vector<char>& gameBoard, int positionIndex){
    char C = 'a';
    
    for (int i = 0; i < gameBoard.size(); ++i)
        if (gameBoard.at(positionIndex) == C + i){
            return true;
            break;
        }
    
    return false;
}

int convertPosition(char boardPosition){
    char C = 'a';
    
    for (int i = 0; i < 9; ++i)
        if (boardPosition == C + i)
            return i;
    
    return -1;
}

int getPlay(const vector<char>& gameBoard){
    char boardPosition = ' ';
    int bP = 0;
    
    cout << "Please choose a position: ";
    cin >> boardPosition;
    cout << endl;
    
    bP = convertPosition(boardPosition);
    if (bP > -1){
        if (validPlacement(gameBoard, bP))
            return bP;
        else {
            cout << "Please choose a position: ";
            cin >> boardPosition;
            cout << endl;
    
            bP = convertPosition(boardPosition);
            if (bP > -1){
                if (validPlacement(gameBoard, bP))
                    return bP;
            }
        }
    }
    return -1;
}

bool boardFull(const vector<char>& gameBoard){
    if (gameBoard.at(0) != 'a')
        if (gameBoard.at(1) != 'b')
            if (gameBoard.at(2) != 'c')
                if (gameBoard.at(3) != 'd')
                    if (gameBoard.at(4) != 'e')
                        if (gameBoard.at(5) != 'f')
                            if (gameBoard.at(6) != 'g')
                                if (gameBoard.at(7) != 'h')
                                    if (gameBoard.at(8) != 'i')
                                        return true;
    else
        return false;
}

bool gameWon(const vector<char>& gameBoard){    
    //First Row
    if ((gameBoard.at(0) == 'X' && gameBoard.at(1) == 'X') && gameBoard.at(2) == 'X')
        return true;
    else if ((gameBoard.at(0) == 'O' && gameBoard.at(1) == 'O') && gameBoard.at(2) == 'O')
        return true;
    //Second Row
    else if ((gameBoard.at(3) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(5) == 'X')
        return true;
    else if ((gameBoard.at(3) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(5) == 'O')
        return true;
    //Third Row
    else if ((gameBoard.at(6) == 'X' && gameBoard.at(7) == 'X') && gameBoard.at(8) == 'X')
        return true;
    else if ((gameBoard.at(6) == 'O' && gameBoard.at(7) == 'O') && gameBoard.at(8) == 'O')
        return true;
    //First Column
    else if ((gameBoard.at(0) == 'X' && gameBoard.at(3) == 'X') && gameBoard.at(6) == 'X')
        return true;
    else if ((gameBoard.at(0) == 'O' && gameBoard.at(3) == 'O') && gameBoard.at(6) == 'O')
        return true;
    //Second Column
    else if ((gameBoard.at(1) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(7) == 'X')
        return true;
    else if ((gameBoard.at(1) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(7) == 'O')
        return true;
    //Third Column
    else if ((gameBoard.at(2) == 'X' && gameBoard.at(5) == 'X') && gameBoard.at(8) == 'X')
        return true;
    else if ((gameBoard.at(2) == 'O' && gameBoard.at(5) == 'O') && gameBoard.at(8) == 'O')
        return true;
    //Top Left to Bot Right
    else if ((gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(8) == 'X')
        return true;
    else if ((gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(8) == 'O')
        return true;
    //Top Right to Bot Left
    else if ((gameBoard.at(2) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(6) == 'X')
        return true;
    else if ((gameBoard.at(2) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(6) == 'O')
        return true;

    return false;
}

int main(){
    vector<char> gameBoard(9);
    int curPlay;
    int whosTurn = PLAYER1;
    
    initVector(gameBoard);

    drawBoard(gameBoard);

    for (int i = 1; i <= gameBoard.size(); ++i){
    
        curPlay = getPlay(gameBoard);

        if (whosTurn == PLAYER1 && curPlay != -1){
            gameBoard.at(curPlay) = 'X';
            whosTurn = PLAYER2;
        }
        else if (whosTurn == PLAYER2 && curPlay != -1){
            gameBoard.at(curPlay) = 'O';
            whosTurn = PLAYER1;
        }

        drawBoard(gameBoard);
        
        if(boardFull(gameBoard)){
            cout << "No one wins";
            break;
        }
        
        if(gameWon(gameBoard)){
            //First Row
            if ((gameBoard.at(0) == 'X' && gameBoard.at(1) == 'X') && gameBoard.at(2) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(0) == 'O' && gameBoard.at(1) == 'O') && gameBoard.at(2) == 'O')
                cout << "PLAYER 2 WINS!";
            //Second Row
            else if ((gameBoard.at(3) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(5) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(3) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(5) == 'O')
                cout << "PLAYER 2 WINS!";
            //Third Row
            else if ((gameBoard.at(6) == 'X' && gameBoard.at(7) == 'X') && gameBoard.at(8) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(6) == 'O' && gameBoard.at(7) == 'O') && gameBoard.at(8) == 'O')
                cout << "PLAYER 2 WINS!";
            //First Column
            else if ((gameBoard.at(0) == 'X' && gameBoard.at(3) == 'X') && gameBoard.at(6) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(0) == 'O' && gameBoard.at(3) == 'O') && gameBoard.at(6) == 'O')
                cout << "PLAYER 2 WINS!";
            //Second Column
            else if ((gameBoard.at(1) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(7) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(1) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(7) == 'O')
                cout << "PLAYER 2 WINS!";
            //Third Column
            else if ((gameBoard.at(2) == 'X' && gameBoard.at(5) == 'X') && gameBoard.at(8) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(2) == 'O' && gameBoard.at(5) == 'O') && gameBoard.at(8) == 'O')
                cout << "PLAYER 2 WINS!";
            //Top Left to Bot Right
            else if ((gameBoard.at(0) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(8) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(0) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(8) == 'O')
                cout << "PLAYER 2 WINS!";
            //Top Right to Bot Left
            else if ((gameBoard.at(2) == 'X' && gameBoard.at(4) == 'X') && gameBoard.at(6) == 'X')
                cout << "PLAYER 1 WINS!";
            else if ((gameBoard.at(2) == 'O' && gameBoard.at(4) == 'O') && gameBoard.at(6) == 'O')
                cout << "PLAYER 2 WINS!";            
            break;
        }
        
    }
    
    cout << endl;   
    return 0;
}
