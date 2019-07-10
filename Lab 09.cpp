#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void fillVector(vector<double>& v){
    double userDouble = 0.0;
    
    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
        v.push_back(userDouble);
    }
    cout << endl;

    return;
}

double meanVector(const vector <double>& v) {
    double sum = 0.0;
    double avg = 0.0;
    
    for (int i = 0; i < v.size(); ++i)
        sum = sum + v.at(i);
    avg = sum / v.size();
    
    return avg;
}

double varianceVector(double vectorAvg, const vector <double> &v) {
    double sum = 0.0;
    double var = 0.0;
    
    for (int i = 0; i < v.size(); ++i)
        sum = sum + pow((v.at(i) - vectorAvg), 2);
    var = sum / v.size();

    return var;
}

double standardDeviationForVariance(double vectorVariance) {
    double std = 0.0;
    
    std = sqrt(vectorVariance);
    
    return std;
}

int main() {
    vector<double> v(0);
    double avg = 0.0;
    double var = 0.0;
    double stdDev = 0.0;
    unsigned int i = 0;

    fillVector(v);

    cout << "You entered: ";
    for (i = 0; i < v.size(); ++i)
        cout << v.at(i) << " ";
    cout << endl;

    avg = meanVector(v);
    
    var = varianceVector(avg, v);
    
    stdDev = standardDeviationForVariance(var);
    
    cout << "The mean is: " << avg << endl;
    cout << "The variance is: " << var << endl;
    cout << "The standard deviation is: " << stdDev << endl;

    return 0;
}
