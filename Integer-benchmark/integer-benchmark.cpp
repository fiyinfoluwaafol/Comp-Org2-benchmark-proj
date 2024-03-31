#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

void Calculations(){
    int result; // Stores result of the current calculation
    
    // Addition
    for (int i = 0; i < 1000000000; i++){ // Loop for the 10^10 iterations
        result = 1 + 1; // Addition of integer constants
    }
    
    //Multiplication
    for (int i = 0; i < 5000000000; i++){ // Loop for the 5 * 10^9 iterations
        result = 1 * 1; // Multiplication of integer constants
    }

    //Division
    for (int i = 0; i < 2000000000; i++){ // Loop for the 2 * 10^9 iterations
        result = 1 / 1; // Multiplication of integer constants
    }
}

int main(){

    auto start = high_resolution_clock::now();
    Calculations();
    auto stop = high_resolution_clock::now();
    
    auto runTime = duration_cast<milliseconds>(stop-start);    
}