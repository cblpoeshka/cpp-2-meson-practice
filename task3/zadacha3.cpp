#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    srand(time(NULL));
    fstream f_file;
    cout << "nums?\n";
    int nums;
    cin >> nums;
    cout << "max?\n";
    int maxi;
    cin >> maxi;
    cout << "min?\n";
    int mini;
    cin >> mini;
    f_file.open("f.txt", ios::out);
    for(int i = 0; i<nums; i++){
        f_file << rand() % (maxi + 1 - mini) + mini << " ";
    }
    f_file.close();
    fstream g_file;
    g_file.open("g.txt", ios::out);
    f_file.open("f.txt", ios::in);
    cout << "n?\n";
    int n;
    cin >> n;
    cout << "m?\n";
    int m;
    cin >> m;
    int current;
    for(int i = 0; i<nums; i++){
        f_file >> current;
        if(current % m == 0 && current % n != 0){
            g_file << current << " ";
        }
    }
    g_file.close();
    f_file.close();
    return 0;
}

