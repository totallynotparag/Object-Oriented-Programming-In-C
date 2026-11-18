#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("students.csv", ios::in | ios::out | ios::trunc);

    file << "101,Aman,85\n";
    file << "102,Riya,90\n";

    cout << "Write position: " << file.tellp() << endl;

    file.seekg(0);
    cout << "Read position: " << file.tellg() << endl;

    string line;
    while (getline(file, line))
        cout << line << endl;

    file.close();

    return 0;
}
