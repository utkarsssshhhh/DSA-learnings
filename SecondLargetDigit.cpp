// second largest element in the array;


#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


void bruteForce(int arr[], int n){
    sort(arr, n);
    int largest = arr[5];
    for(int i = n-2; i >=0; i--){
       if(arr[i] != largest){
           cout << arr[i];
           break;
       }
   }
}

void better(int arr[], int n){
    int largest = 0;
    for(int i = 0; i< n; i++ ){
        if(arr[i] > largest) largest = arr[i];
    }
    
    int sLargest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > sLargest && arr[i] != largest ){
            sLargest = arr[i];
        }
    }
    
    cout << sLargest;
}



void Optimal(int arr[], int n){
    int largest = arr[0], sLargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    cout << sLargest; 
}


int main(){
    int n = 6;
    int arr[6]= {1, 2, 4, 7, 7, 5};       
}