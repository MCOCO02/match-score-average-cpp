#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char name[30];
    float a, b, c, d;

    cout << "\t MATCH RESULTS PROGRAM\n";
    cout << "\t =====================\n\n";
    
    cout << "Name : ";
    cin.getline(name, 30);

    cout << "Match score 1 : ";
    cin >> a;
    cout << "Match score 2 : ";
    cin >> b;
    cout << "Match score 3 : ";
    cin >> c;

    d = (a + b + c) / 3;

    cout << "\nParticipant named " << name << endl;
    cout << "Getting the final score : " << d << endl;
    cout << "From the results of the matches he participated in." << endl;

    return 0;
}
