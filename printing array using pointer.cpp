#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int * aptr[5];
for(int i = 0 ; i < 5 ; i++){
    arrp[i] = &arr[i];
  }

  cout << "Array: "<<endl;
  for(int i = 0; i<5; i++){ 
    cout << *aptr[i] << " ";
  }
  cout << endl;
  cout << "Array in reverse: "<<endl;
  for(int i = 4; i>=0; i--){
    cout  << *aptr[i] << " ";
  }
  return 0;
}

/*
Output:
Array:
10 20 30 40 50
Array in reverse:
50 40 30 20 10
*/
