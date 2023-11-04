#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>n;
    if (n <= 9)
    {
        cout << one[n];
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}
