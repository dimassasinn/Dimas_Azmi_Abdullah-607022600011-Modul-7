#include <iostream>
using namespace std;

int main (){
    int suhu[7]={30, 32, 31, 33, 29, 30, 34}; 
    int total = 0;
    for(int a = 0; a < 7; a++){
        total = total + suhu[a];
    }
    int rataRata = total / 7;
    cout << "Total Suhu: " << total << endl;
    cout << "Rata-rata mingguan: " << rataRata << endl;
}