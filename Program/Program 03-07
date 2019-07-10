#include <iostream>
#include <string>

using namespace std;

int main() {
   string p1Name;
   string p2Name;
   string p3Name;
   int p1Yards       = 0;
   int p2Yards       = 0;
   int p3Yards       = 0;
   
   cout << "Enter player 1's name: " << endl;
   cin >> p1Name;
   
   cout << "Enter player 1's yards gained: " << endl;
   cin >> p1Yards;
   
   cout << "Enter player 2's name: " << endl;
   cin >> p2Name;
   
   cout << "Enter player 2's yards gained: " << endl;
   cin >> p2Yards;
   
   cout << "Enter player 3's name: " << endl;
   cin >> p3Name;
   
   cout << "Enter player 3's yards gained: " << endl;
   cin >> p3Yards;
   cout << endl;
   
   cout << "Player 1 - " << p1Name << ": " << p1Yards << endl;
   cout << "Player 2 - " << p2Name << ": " << p2Yards << endl;
   cout << "Player 3 - " << p3Name << ": " << p3Yards << endl;
   cout << endl;
   
   if (p1Yards > p2Yards && p1Yards > p3Yards){                   //P1 is largest, then sorts P2 and P3
      cout << "1. " << p1Name << ": " << p1Yards << endl;
      if (p2Yards > p3Yards){
         cout << "2. " << p2Name << ": " << p2Yards << endl;
         cout << "3. " << p3Name << ": " << p3Yards << endl;
      }
      else if (p3Yards > p2Yards){
         cout << "2. " << p3Name << ": " << p3Yards << endl;
         cout << "3. " << p2Name << ": " << p2Yards << endl;
      }
   }
   
   if (p2Yards > p1Yards && p2Yards > p3Yards){                   //P2 is largest, then sorts P1 and P3
      cout << "1. " << p2Name << ": " << p2Yards << endl;
      if (p1Yards > p3Yards){
         cout << "2. " << p1Name << ": " << p1Yards << endl;
         cout << "3. " << p3Name << ": " << p3Yards << endl;
      }
     else if (p3Yards > p1Yards){
         cout << "2. " << p3Name << ": " << p3Yards << endl;
         cout << "3. " << p1Name << ": " << p1Yards << endl;
      }
   }

   if (p3Yards > p1Yards && p3Yards > p2Yards){                   //P3 is largest, then sorts P1 and P2
      cout << "1. " << p3Name << ": " << p3Yards << endl;
      if (p1Yards > p2Yards){
         cout << "2. " << p1Name << ": " << p1Yards << endl;
         cout << "3. " << p2Name << ": " << p2Yards << endl;
      }
      else if (p2Yards > p1Yards){
         cout << "2. " << p2Name << ": " << p2Yards << endl;
         cout << "3. " << p1Name << ": " << p1Yards << endl;
      }
   }
   
   return 0;
}
