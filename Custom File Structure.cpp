#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream hamFile("players.txt");
    cout << "Enter player's ID, Name & Acc:" << endl;
    cout << "press Ctrl+Z to quit\n" << endl;

    int IDnum;
    string name;
    double Acc;

    while(cin >> IDnum >> name >> Acc){
            hamFile << IDnum << ' ' << name << ' ' << Acc << endl;

    }
}
