//check if an array is sorted;

#include<iostream>
using namespace std;

bool check(int arr[], int n){
    for(int i = 1; i<n; i++){
        if(arr[i] >=arr[i-1]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int n = 6;
    int arr1[n] = {1, 2, 3, 4, 5, 6};
    int arr2[n] = {2, 1, 3, 5, 6, 4};

    cout << check(arr1, n) << endl;
    cout << check(arr2, n) << endl;
}