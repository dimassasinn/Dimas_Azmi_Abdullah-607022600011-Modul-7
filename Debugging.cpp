#include <iostream>
using namespace std;

int main(){
    // int data[4] = {10, 20, 30, 40};  BEFORE
    // for(int i = 1; i <= 4; i++) {
    //     cout << data[i] << " ";
    //     }
    int data[4] = {10, 20, 30, 40};  //AFTER
    for(int i = 0; i < 4; i++){
        cout << data[i] << " ";
    }
}