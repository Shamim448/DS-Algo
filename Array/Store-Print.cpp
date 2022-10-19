/*Write a program in C to store elements in an array and print it*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    arr[0] = 1;
    for(int i = 1; i < sizeof(arr)/ sizeof(int); i++ ){
        arr[i] = i;
    }

    for(int i = 0; i < sizeof(arr)/ sizeof(int); i++ ){
      cout << arr[i] << " ";
    }

    return 0;
}
