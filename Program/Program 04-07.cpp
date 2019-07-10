#include <iostream>
#include <string>

using namespace std;

int main(){
    string I = "";
    
    cout << "Enter text: " << endl;
    getline(cin, I);
    cout << "You entered: " << I << endl;
    
    if (I.find("BFF") != string::npos){
        cout << "BFF: best friend forever";
        cout << endl;
    }
    if (I.find("IDK") != string::npos){
        cout << "IDK: I don't know";
        cout << endl;
    }
    if (I.find("JK") != string::npos){
        cout << "JK: just kidding";
        cout << endl;
    }
    if (I.find("TMI") != string::npos){
        cout << "TMI: too much information";
        cout << endl;
    }
    if (I.find("TTYL") != string::npos){
        cout << "TTYL: talk to you later";
        cout << endl;
    }
    
    return 0;
}
