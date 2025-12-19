#include <iostream>
#include <set>
using namespace std;

void brute(int arr[], int n){
    set<int> st;
    for(int i = 0; i<n ; i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st){
        arr[index] = it;
        cout << arr[index] << " ";
        index++;
    }
}


int Optimal(int arr[], int n){
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }   
    return (i+1);
}


int main(){
    int n = 7;
    int arr[n] = {1, 1, 2, 2, 3, 3, 4};

    
    // brute(arr, n);
    
    Optimal(arr, n);

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }


}