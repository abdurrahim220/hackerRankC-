#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << one[i] << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}