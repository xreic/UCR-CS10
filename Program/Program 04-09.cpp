#include <iostream>
#include <string>

using namespace std;

int main(){
    string I = "";
    
    cout << "Enter text: " << endl;
    getline(cin, I);
    cout << "You entered: " << I << endl;
    
    while (I.find("BFF") != string::npos){
        I.replace(I.find("BFF"), 3, "best friend forever");
    }
    while (I.find("IDK") != string::npos){
        I.replace(I.find("IDK"), 3, "I don't know");
    }
    while (I.find("JK") != string::npos){
        I.replace(I.find("JK"), 2, "just kidding");
    }
    while (I.find("TMI") != string::npos){
        I.replace(I.find("TMI"), 3, "too much information");
    }
    while (I.find("TTYL") != string::npos){
        I.replace(I.find("TTYL"), 4, "talk to you later");
    }
    
    cout << "Expanded: " << I << endl;
    
    return 0;
}
