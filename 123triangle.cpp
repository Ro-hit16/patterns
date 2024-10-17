#include<iostream>
#include <vector>
#include <iostream>
using namespace std;

void tringle(int n){
    
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // Print numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
}
void tringle2(int n){
     for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // Print numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
       for(int i = n; i >= 1; i--) {
        // Print leading spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // Print numbers
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

//    tringle(n);
   tringle2(n);
    return 0;
}