#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void copyFile(ifstream & inputStream, ofstream & outputStream)
{
    string line;
    string copyLine;
    while(getline(inputStream, line))
    {
        outputStream << line;

    }
}

int main()
{


    string line;
    string filePath;
    string copyName;

    cout << "Enter a file that you want to be copied: ";
    int i = 0;
    cin >> filePath;
    ifstream inputStream(filePath);

        while (inputStream.is_open())
        {

           cout << "Give name for the copied file: " << endl;
           cin >> copyName;
            ofstream outputStream(copyName);
            copyFile(inputStream, outputStream);
            inputStream.close();
            cout << "Enter a file that you want to be copied: " << endl;
            cin >> filePath;
            ifstream inputStream(filePath);
        }
        cout << "file does not exist";
        inputStream.close();

        inputStream.close();
    return 0;
}

