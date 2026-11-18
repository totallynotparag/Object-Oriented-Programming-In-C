#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {75, 90, 65, 85, 90};

    sort(marks.begin(), marks.end());

    cout << "Sorted marks: ";
    for (int m : marks)
        cout << m << " ";

    auto it = find(marks.begin(), marks.end(), 85);
    if (it != marks.end())
        cout << "\n85 found";

    map<string, int> students;
    students["Aman"] = 90;
    students["Riya"] = 85;

    unordered_map<string, int> data;
    data["Aman"] = 90;

    return 0;
}
