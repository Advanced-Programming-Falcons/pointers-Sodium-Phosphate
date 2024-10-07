#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
int size;
cout << "how many numbers: " << endl;
cin >> size;
int* array = new int[size];
for(int i = 0; i < size; i++){
    array[i] = i*2;
    cout << array[i] << endl;
}
for(int i = 0; i < size; i++){
    array[i] += 5;
    cout << array[i] << endl;
}
for (int i = 0; i < size; i++){
    if (i != size){
    array[i] = array[i+1];
    }
    else{
    array[i] = 5;
    }
}
array[size] = array[0];
for(int* ptr = array; ptr < array + size; ptr++){
cout << "Value: " << array << endl;
}

for (int i = 0; i < size; i++){
    cout << array[i] << endl;
}
delete[] array;
return 0;
}
