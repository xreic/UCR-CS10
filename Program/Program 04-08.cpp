#include <iostream>
#include <string>

using namespace std;

int main(){
    string I = "";
    
    cout << "Enter text: " << endl;
    getline(cin, I);
    cout << "You entered: " << I << endl;
    
    if (I.find("BFF") != string::npos){
        I.replace(I.find("BFF"), 3, "best friend forever");
    }
    if (I.find("IDK") != string::npos){
        I.replace(I.find("IDK"), 3, "I don't know");
    }
    if (I.find("JK") != string::npos){
        I.replace(I.find("JK"), 2, "just kidding");
    }
    if (I.find("TMI") != string::npos){
        I.replace(I.find("TMI"), 3, "too much information");
    }
    if (I.find("TTYL") != string::npos){
        I.replace(I.find("TTYL"), 4, "talk to you later");
    }
    
    cout << "Expanded: " << I << endl;
    
    return 0;
}
