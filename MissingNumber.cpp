#include<iostream>
using namespace std;

void BruteForce(int arr[], int n){
    for(int i = 1; i <= n; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << i;
            break;
        }
    }
}


void Better(int arr[], int n){
    int hashMap[n+1] = {0};
    for(int i = 0; i < n; i++){
        hashMap[arr[i]] = 1;
    }

    for(int i = 1; i < n; i++){
        if(hashMap[i] == 0){
            cout << i;
            break;
        }
    }
}

void Optimal(int arr[], int n){
    int count = (n*(n+1))/2;
    // cout << count; 
    int arrCount = 0;
    for(int i = 0; i < n-1; i++){
        arrCount += arr[i];
    } 

    int missing = count - arrCount;
    cout << missing;
    
}

void OptimalXor(int arr[], int n){
    int xorAll = 0;
    int xorArr = 0;
    for(int i = 1; i <= n; i++){
        xorAll ^= i;
    }
    for(int i = 0; i < n-1; i++){
        xorArr ^= arr[i];
    }

    cout << (xorAll^xorArr);
}



int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 5};
    // BruteForce(arr, n);
    OptimalXor(arr, n);
}