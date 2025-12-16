#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int num = 123456;


    // int count = 0;
    // while(num>0){
    //     num = num/10;
    //     count++;
    // }

    int count = (int)log10(num)+1;

    cout << count;
}