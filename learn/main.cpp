#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Enter words" << endl;
    string words;
    ifstream in("C:\\Users\\ASUS\\CLionProjects\\cplusplus\\learn\\text.txt");
    vector<string> stringHolder;

    while (in >> words) {
        stringHolder.push_back(words);
    }
    cin.clear();

    sort(stringHolder.begin(), stringHolder.end());

    int vSize = stringHolder.size();

    if (vSize == 0) {
        cout << "No words" << endl;
        return 1;
    }

    int wordCount = 1;
    words = stringHolder[0];

    ofstream out("C:\\Users\\ASUS\\CLionProjects\\cplusplus\\learn\\output.csv");


    for (int i = 1; i < vSize; i++) {
        if (words != stringHolder[i]) {
            out << words << ',' << wordCount << endl;
            wordCount = 0;
            words = stringHolder[i];
        }
        wordCount++;
    }
    out << words << ',' << wordCount << endl;
    return 0;
}