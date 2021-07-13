#include <bits/stdc++.h>
using namespace std;
#include <math.h>

int main()
{
    int t;
    float pi = 2.0 * acos(0.0);
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        float r;
				cin >> r;
				  cout << "Case " << i << ": " ;
				  cout << fixed;
                  cout << setprecision(2);
                  cout<< (2 * r * 2 * r) - (pi * r * r) << endl;

    }
    return 0;
}

// Problem Link: https://lightoj.com/problem/circle-in-square
