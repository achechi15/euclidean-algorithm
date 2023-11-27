#include <bits/stdc++.h>

using namespace std;

int euclidean(int a, int b)
{
    return b == 0? a : euclidean(b, a % b);
}

int main()
{
    int a, b;   
    cin >> a >> b;
    cout << euclidean(a, b) << endl;
}