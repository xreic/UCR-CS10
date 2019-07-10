#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(3333);
    int nR = 0;
    int i = 1;
    int dV = 0;
    double V2 = 0.0;
    double V3 = 0.0;
    double V4 = 0.0;
    double V5 = 0.0;
    double V6 = 0.0;
    double V7 = 0.0;
    double V8 = 0.0;
    double V9 = 0.0;
    double V10 = 0.0;
    double V11 = 0.0;
    double V12 = 0.0;
    
    
    cout << "Enter number of times you want to roll a pair of dice: ";
    cin >> nR;
    cout << endl;
    
    
    while (i <= nR){
        dV = ((rand() % 6) + 1) + ((rand() % 6) + 1);
        ++i;
        if (dV == 2){
            ++V2;
        }
        else if (dV == 3){
            ++V3;
        }
        else if (dV == 4){
            ++V4;
        }
        else if (dV == 5){
            ++V5;
        }
        else if (dV == 6){
            ++V6;
        }
        else if (dV == 7){
            ++V7;
        }
        else if (dV == 8){
            ++V8;
        }
        else if (dV == 9){
            ++V9;
        }
        else if (dV == 10){
            ++V10;
        }
        else if (dV == 11){
            ++V11;
        }
        else if (dV == 12){
            ++V12;
        }
    }
    
    cout << endl;
    cout << "# of times each score was rolled" << endl;
    cout << "2: " << static_cast<int>(V2) << endl;
    cout << "3: " << static_cast<int>(V3) << endl;
    cout << "4: " << static_cast<int>(V4) << endl;
    cout << "5: " << static_cast<int>(V5) << endl;
    cout << "6: " << static_cast<int>(V6) << endl;
    cout << "7: " << static_cast<int>(V7) << endl;
    cout << "8: " << static_cast<int>(V8) << endl;
    cout << "9: " << static_cast<int>(V9) << endl;
    cout << "10: " << static_cast<int>(V10) << endl;
    cout << "11: " << static_cast<int>(V11) << endl;
    cout << "12: " << static_cast<int>(V12) << endl;
    
    cout << endl;   
    cout << "Probability of rolling each possible score" << endl;
    cout << "2: " << V2/nR * 100 << "%" << endl;
    cout << "3: " << V3/nR * 100 << "%"  << endl;
    cout << "4: " << V4/nR * 100 << "%"  << endl;
    cout << "5: " << V5/nR * 100 << "%"  << endl;
    cout << "6: " << V6/nR * 100 << "%"  << endl;
    cout << "7: " << V7/nR * 100 << "%"  << endl;
    cout << "8: " << V8/nR * 100 << "%"  << endl;
    cout << "9: " << V9/nR * 100 << "%"  << endl;
    cout << "10: " << V10/nR * 100 << "%"  << endl;
    cout << "11: " << V11/nR * 100 << "%"  << endl;
    cout << "12: " << V12/nR * 100 << "%"  << endl;
    
    return 0;
}
