#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;

int acquireOperands(const string& op, int& x, int& y, int& z){
    cout << "Enter your first number: ";
    cin >> x;
    cout << endl;
    
    cout << "Enter your second number: ";
    cin >> y;
    cout << endl;
    
    if (op == "quadratic"){
        cout << "Enter your third number: ";
        cin >> z;   
        cout << endl;
    }
    
    if (op == "division")
        return 2;
    if (op == "pythagorean")
        return 2;
    else
        return 3;
}

double division(int a, int b, double& result){
    if (b == 0)
        return DIV_ZERO;
    else{
        result = static_cast<double>(a) / b;
        return OK;
    }
}

double pythagorean(int a, int b, double& c){
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    return OK;
    }
    
int quadratic(int a, int b, int c, double& root1, double& root2){
    if (pow(b, 2) - 4 * a * c < 0)
        return SQRT_ERR;
    if (a == 0)
        return DIV_ZERO;
    else{
        root1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        root2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        return OK;
    }
}

    
int main(){
    string operation = "a";
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    double result1 = 0.0;
    double result2 = 0.0;

    cout << "Please choose an operation: ";
    cin >> operation;
    cout << endl;

    while (operation != "division" && operation != "pythagorean" && operation != "quadratic"){
        cout << "Error : Operation not supported." << endl;
        cout << "Please choose an operation: ";
        cin >> operation;
        cout << endl;
    }
    
    acquireOperands(operation, number1, number2, number3);
    
    if (operation == "division"){
        division(number1, number2, result1);
        cout << "Equation : " << number1 << " / " << number2 << endl;
        if (division(number1, number2, result1) == DIV_ZERO)
            cout << "Error: Cannot divide by zero." << endl;
        else
            cout << "Result: " << result1 << endl;
    }
    
    if (operation == "pythagorean"){
        cout << "Equation: sqrt( " << number1 << "^2 + " << number2 << "^2 )" << endl;
        if (pythagorean(number1, number2, result1) == -1)
            cout << "Cannot take square root of a negative number." << endl;
        if (pythagorean(number1, number2, result1) != -1)
            cout << "Result: "<< result1 << endl;
    }
    
    if (operation == "quadratic"){
        cout << "Equation: " << number1 << "x^2 + " << number2 << "x + " << number3 << " = 0" << endl;
        if (quadratic(number1, number2, number3, result1, result2) == SQRT_ERR)
            cout << "Cannot take square root of a negative number." << endl;
        if (quadratic(number1, number2, number3, result1, result2) == DIV_ZERO)
            cout << "Error: Cannot divide by zero." << endl;
        else{
            quadratic(number1, number2, number3, result1, result2);
            if (result1 != result2)
                cout << "Result: "<< result1 << ", " << result2 << endl;
            else 
                cout << "Result: "<< result1 << endl;
        }
    }
    
    return 0;
}
