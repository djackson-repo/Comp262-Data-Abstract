#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

int sumNum(vector<int> nums)
{
    int sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum+= nums[i];
    }
    return sum;
}
int main()
{
    string input;
    string line;
    ifstream inputStream("C:\\Users\\djackson\\CLionProjects\\sum\\cmake-build-debug-mingw\\nums.txt");
    if(inputStream.is_open()) {
        while (getline(inputStream, line))
        {
            vector<int> nums;
            stringstream sstr;
            sstr << line;
            while (sstr >> input) {
            int sum = stoi(input);
            nums.push_back(sum);
            }
                int sum = sumNum(nums);
                cout << "The Sum of nums is: " << sum << endl;
        }
    }
    return 0;
}
