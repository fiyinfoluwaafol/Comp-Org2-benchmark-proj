#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

#define ARRAY_SIZE 5000000000

void MemoryBenchmark(){
    int *nums = new int[ARRAY_SIZE];
    int num;

    for (long long int i = 0; i < ARRAY_SIZE; i++){
        num = *(nums + i);
    }

    for (long long int i = 0; i < ARRAY_SIZE; i++){
        *(nums + i) = 1;
    }
}

int main(){

    auto start = high_resolution_clock::now();
    MemoryBenchmark();
    auto stop = high_resolution_clock::now();

    auto runTime = duration_cast<milliseconds>(stop-start);  
    
    double seconds = runTime.count() / 1000.0;
    int minutes = seconds / 60;

    cout << minutes << " m " << std::fmod(seconds, 60) << " s\n";
}