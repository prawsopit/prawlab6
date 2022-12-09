#include<iostream>
using namespace std;

int main(){
    int numbers = 1 ;
     int odd =0; 
     int even =0;
    
while (numbers !=0) {
    cout << "Enter an integer: ";

     cin >> numbers ;
     if(numbers == 0) break;
     if(numbers%2 ==0) {
        even ++ ;
     }
      else {
       odd ++ ;
      }
}


    cout << "#Even numbers =  " << even;
    cout << "\n#Odd numbers = " << odd;
    return 0;
}
