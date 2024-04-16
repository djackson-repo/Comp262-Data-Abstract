#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void countLines(ifstream & inputStream)
{
    string line;
    string word;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    while(getline(inputStream, line)) {
        stringstream sstr;
        sstr << line;
        while (sstr >> word) {
            wordCount++;
        }
        charCount += line.length();
        lineCount++;
    }
    inputStream.close();
    cout << "Line Count: " << lineCount << " Word Count: " << wordCount << " Character Count: " << charCount << endl;
}

int main()
{
    string fileName;
    cout << "Please enter a file name" << endl;
    cin >> fileName;
    ifstream inputStream(fileName);
    while(inputStream.is_open())
    {
        countLines(inputStream);
        cout << "Enter another file name" << endl;
        cin >> fileName;
    }
    inputStream.close();
    return 0;
}
