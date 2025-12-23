#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void transverse(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void leftRotateByOnePlace(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    transverse(arr, n);
}



int main(){
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    leftRotateByOnePlace(arr, n);
}