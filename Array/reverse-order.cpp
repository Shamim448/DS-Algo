/*Write a program to read n number of values in
an array and display it in reverse order.*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, val;
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++){
        scanf("%d", &val);
        arr[i] = val;
    }
    cout << " Reverse Output: ";
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
