#include <bits/stdc++.h>
using namespace std;
// define structure
struct students
{
    int roll;
    char name[15];
    char address[50];
};
int main()
{
//declaration structure
struct students s;
//initialization structure
s.roll = 10;
strcpy(s.name, "Shamim");
strcpy(s.address, "Nayapara, Kashimpur, gazipur.");

//print structure
cout << s.roll <<"\n";
puts(s.name);
puts(s.address);

    return 0;
}
