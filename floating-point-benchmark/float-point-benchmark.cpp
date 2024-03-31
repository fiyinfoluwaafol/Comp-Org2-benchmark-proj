#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

void Calculations(){
    float result; // Stores result of the current calculation
    
    // Addition
    for (long long i = 0; i < 1000000000; i++){ // Loop for the 10^10 iterations
        result = 1.5 + 1.7; // Addition of integer constants
    }

     //Multiplication 5000000000
    for (long long i = 0; i < 2000000000; i++){ // Loop for the 5 * 10^9 iterations
        result = 1.5 * 1.7; // Multiplication of integer constants
    }

    //Division 2000000000
    for (long long i = 0; i < 5000000000; i++){ // Loop for the 2 * 10^9 iterations
        result = 1.5 / 1.7; // Multiplication of integer constants
    }
}