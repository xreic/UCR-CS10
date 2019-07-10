#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double vectorMedian (const vector<int> &v){
    int i = v.size();
    double m = 0.0;    
    
    if (i % 2 != 0)
        return v.at(i / 2);
    if (i % 2 == 0){
        m = (v.at(i / 2)) + (v.at((i / 2) - 1));
        m = static_cast<double>(m) / 2;
        return m;
    }
}
    
int main(){
    vector<int> vM(4);
    
    cout << vectorMedian(vM) << endl;
    
    return 0;
}
