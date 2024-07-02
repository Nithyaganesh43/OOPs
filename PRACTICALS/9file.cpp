#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file " << filename << endl;
        return -1;
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;

    cout << "Enter the name of the text file: ";
    getline(cin, filename);

    int numWords = countWordsInFile(filename);

    if (numWords != -1) {
        cout << "Number of words in " << filename << ": " << numWords << endl;
    }

    return 0;
}
