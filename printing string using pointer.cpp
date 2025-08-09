#include <iostream>
using namespace std;

int main() {
    char a[50];
    char *ptr= a;

    cout << "Enter a string: ";
    cin >> a;
    
    cout << "String printed using pointer: " << endl;
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    return 0;
}

/*
Output:
Enter a string: hello
String printed using pointer: 
hello
  */
