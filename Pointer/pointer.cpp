#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int *p;
    p = &a;
    //print value of a
    printf("Value of a is : %d\n", a);
    //Print the address of a
    printf("address of a is : %d\n", &a);
    //Print the address of pointer p
    printf("address of p is : %d\n", p);
    //Print the value of pointer p
    printf("Value of p is : %d\n", *p);
    *p = 10;
    //Print the change value of pointer p
    printf("Value of p is : %d\n", *p);
    //change value of a because change pointer value
    printf("Value of a is : %d\n", a);
    return 0;
}
