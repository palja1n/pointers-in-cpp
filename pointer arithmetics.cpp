#include <iostream>
using namespace std;

int main() {
    int arr[]={10,30,50,70,90};
    int *p1=&arr[0];
    int *p2=&arr[1];
    int *p3=&arr[2];
    int *p4=&arr[3];
    int *p5=&arr[4];


    int diff = *p4 - *p3;
    cout << "Difference of P4 & P3: " << diff << endl;
    
    int add = *p1 + *p2 + *p3 + *p4 + *p5;
    cout << "Addition of all pointers: " << add << endl;
    
    int prod = (*p2) * (*p4);
    cout << "Product of P2 & P4: " << prod << endl;
    
    return 0;
}


/*
Output:
Difference of P4 & P3: 20
Addition of all pointers: 250
Product of P2 & P4: 2100
  */
