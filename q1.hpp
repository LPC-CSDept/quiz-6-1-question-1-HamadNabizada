#include <iostream>
#include <iomanip>
using namespace std;


void getinput(int &n1, int &n2){
    cin >> n1 >> n2;
}
void getinput(float &n1, float &n2){
    cin >> n1 >> n2;
}

void swapTwoValues(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void swapTwoValues(float &n1, float &n2){
    float temp = n1;
    n1 = n2;
    n2 = temp;
}