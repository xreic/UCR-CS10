#include <iostream>
#include <string>

using namespace std;

int main() {
   string I = "";
   
   cout << "Enter word: ";
   cin >> I;
   cout << endl;
   cout << "You entered: " << I << endl;

   while (I.find("a") != string::npos){
      I.replace(I.find("a"), 1, "@");
   }
   while (I.find("e") != string::npos){
      I.replace(I.find("e"), 1, "3");
   }
   while (I.find("i") != string::npos){
      I.replace(I.find("i"), 1, "!");
   }
   while (I.find("g") != string::npos){
      I.replace(I.find("g"), 1, "9");
   }
   while (I.find("s") != string::npos){
      I.replace(I.find("s"), 1, "$");
   }
   while (I.find("x") != string::npos){
      I.replace(I.find("x"), 1, "*");
   }
   cout << "New word: " << I << endl;
   
   return 0;
}
