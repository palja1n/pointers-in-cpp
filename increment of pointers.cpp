#include <iostream>
using namespace std;

int main() {
    int a = 13, *aptr;
    bool b = true, *bptr;
    float c = 10.5 , *cptr;
    double d = 10.984567, *dptr;
    string e = "Pal", *eptr;

    aptr = &a;
    bptr = &b;
    cptr = &c;
    dptr = &d;
    eptr = &e;

    cout << "Integer address before increment: " << aptr << endl;
    aptr++;
    cout << "Integer address after increment:  " << aptr << endl;
    cout << endl;

    cout << "Boolean address before increment: " << bptr << endl;
    bptr++;
    cout << "Boolean address after increment:  " << bptr << endl;
    cout << endl;

    cout << "Float address before increment: " << cptr << endl;
    cptr++;
    cout << "Float address after increment:  " << cptr << endl;
    cout << endl;

    cout << "Double address before increment: " << dptr << endl;
    dptr++;
    cout << "Double address after increment:  " << dptr << endl;
    cout << endl;

    cout << "String address before increment: " << eptr << endl;
    eptr++;
    cout << "String address after increment:  " << eptr << endl;

    return 0;
}

/*
Output:
Integer address before increment: 0x7fff46c2daa8
Integer address after increment:  0x7fff46c2daac

Boolean address before increment: 0x7fff46c2daa7
Boolean address after increment:  0x7fff46c2daa8

Float address before increment: 0x7fff46c2daa0
Float address after increment:  0x7fff46c2daa4

Double address before increment: 0x7fff46c2da98
Double address after increment:  0x7fff46c2daa0

String address before increment: 0x7a314edd3378
String address after increment:  0x7a314edd3398
  */
