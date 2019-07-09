#include <iostream>
#include <cstdlib>

using namespace std;

double percentHeads(int n){
    int i = 1;
    int c = 0;
    double h = 0.0;
    double per = 0.0;
    
    while (i <= n){
        c = rand() % 2;
        if (c == 0)
            h = h + 1;
        ++i;
    }
    
    per = (h / n) * 100;
    
    return per;
}

int main(){
    srand(4444);
    int n = 0;
    
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> n;
    cout << endl;
       
    cout << "Heads came up " << percentHeads(n) << "% of the time." << endl;    
    
    return 0;
}
