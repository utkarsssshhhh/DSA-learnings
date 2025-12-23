#include<iostream>
#include<vector>
using namespace std;

void transverse(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void BruteForce(int arr[], int n){
    int count = 0;
    int temp[10];

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp[count] = arr[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        arr[i] = temp[i];
    }

    for(int i = count; i < n; i++){
        arr[i] = 0;
    }
    transverse(arr, n);
}

void Optimal(int arr[], int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            int temp =arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    transverse(arr, n);
}


int main(){
    int n = 6;
    int arr[6] = {1, 0, 2, 0, 3, 0};

    Optimal(arr, n);

}