#include <chrono>
#include <cmath>
#include <iostream>
using namespace std;
using namespace std::chrono;

#define ARRAY_SIZE 5000000000

void MemoryBenchmark(){
    int nums[ARRAY_SIZE];
    int num;

    for (long long int i = 0; i < ARRAY_SIZE; i++){
        nums[i] = i;
    }

    for (long long int i = 0; i < ARRAY_SIZE; i++){
        num = nums[i];
    }
}