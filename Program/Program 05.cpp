#include <iostream>

using namespace std;

int main() {
    int tH = 0;
    int tW = 0;
    int lW = 0;
    
    cout << "Enter trunk height: ";
    cin >> tH;
    
    while ((tW % 2 == 0)){
        cout << "Enter trunk width: ";
        cin >> tW;
    }

    cout << "Enter leaves width: ";
    cin >> lW;    
    cout << endl;
    
    for (int i = 1; i <= lW; i = i + 2){
        for (int j = 2*lW; j > lW + i; j = j - 2){
            cout << " ";
            }
        for (int k = lW; k > lW - i; --k){
            cout << "*";
            }
        cout << endl;
        }
                
    for (int l = 1; l <= tH; ++l){
        for (int m = (lW - tW - 2); m >= ((lW - tW - 2) / 2); --m){
            cout << " ";
            }
        for (int n = 1; n <= tW; ++n){
            cout << "*";
            }
        cout << endl;
        }
        
    return 0;
}
