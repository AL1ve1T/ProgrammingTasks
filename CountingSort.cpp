#include <iostream>
 
const int ARRAY_SIZE = 100000;
const long long int MIN = -9223372036854775807;
const long long int MAX = 9223372036854775807;
 
void input(long long int *a, long long int size) { 
    for(int i = 0; i < size; ++i){
        std::cin >> a[i];
    }
}
 
void output(long long int *a, long long int size) {
    for(int i = 0; i < size; ++i){
        std::cout << a[i] << " ";
    }
}
 
long long int maxFinder(long long int *a, long long int size) { 
    long long int max = MIN;
    for(int i = 0; i < size; ++i){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
 
long long int minFinder(long long int *a, long long int size) { 
    long long int min = MAX;
    for(int i = 0; i < size; ++i){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}
 
void zeroFill(long long int *zero, long long int size) { 
    for(int i = 0; i < size; ++i){
        zero[i] = 0;
    }
}
 
void counting_sort(long long int* vec, long long int len, long long int min, long long int max) { 
    int *cnt = new int[max - min + 1];
 
    for (int i = min; i <= max; ++i) {
        cnt[i - min] = 0;
    }
    for (int i = 0; i < len; ++i) {
        ++cnt[vec[i] - min];
    }
 
    for (int i = min; i <= max; ++i) {
        for(int j = cnt[i - min]; j--;) {
            *vec++ = i;
        }
    }
    delete [] cnt;
 }
 
int main(){
    long long int mainArray[ARRAY_SIZE], zero[ARRAY_SIZE], size;
    std::cin >> size;
    input(mainArray, size);
    zeroFill(zero, size);
    long long int max = maxFinder(mainArray, size);
    long long int min = minFinder(mainArray, size);
    counting_sort(mainArray, size, min, max);
    output(mainArray, size);
    return 0;
}