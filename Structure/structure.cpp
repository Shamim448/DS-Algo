#include <bits/stdc++.h>
using namespace std;
// define structure
struct students
{
    int roll;
    char name[15];
    char address[50];
};
//Alternative option
typedef struct{
int id;
    char name[15];
}(books);

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

//Alternative declaration & initialization
// where no need to struct keyword in declaration
books book;
book.id = 1001;
strcpy(book.name, "c++");
cout << book.id <<"\n";
puts(book.name);


    return 0;
}
