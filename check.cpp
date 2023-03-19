#include <iostream>
using namespace std;

bool check_sorted_arr(double arr[], int N, double sorted[]){
    for(int i = 0; i < N; ++i){
        if(arr[i] != sorted[i]) return 0;
    }
    return 1;
}
