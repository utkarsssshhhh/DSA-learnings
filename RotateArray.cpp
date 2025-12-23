#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void transverse(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int st, int ed){
    int n  = ed;
    int i = st, j = ed-1;
    while(i <= j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // transverse(arr, n);
}


void leftRotateByOnePlace(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    transverse(arr, n);
}

void bruteForce(int arr[], int n, int k){
    k = k % n;
    int temp[k];
    for(int i = 0; i<k; i++){
        temp[i] = arr[i];
    }
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }
    int j = 0;
    for(int i = n-k; i < n; i++){
        arr[i] = temp[j];
        j++;
    }
    transverse(arr, n);
}

void Optimal(int arr[], int n, int k){
    k = k % n;
    reverse(arr, 0, k);
    reverse(arr, k, n);
    reverse(arr, 0, n);

    transverse(arr, n);
}



int main(){
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 6};
    // leftRotateByOnePlace(arr, n);
    // bruteForce(arr, 6, 2);
    // reverse(arr, 0, n);
    Optimal(arr, n, 2);
}