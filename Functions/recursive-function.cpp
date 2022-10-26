#include <bits/stdc++.h>
using namespace std;
int sumFunc(int n)
{
    if(n == 0)
        return 0;
    else
        return n + sumFunc(n - 1);
}
int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = sumFunc(n);
    cout << "Sum of n numbers: " << sum;
    return 0;
}
