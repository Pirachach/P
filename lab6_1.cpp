#include<iostream>
using namespace std;

int main(){
    int inte = -1;
    int even = 0;
    int odd = 0;
    while (inte != 0){
        cout << "Enter an integer: ";
        cin >> inte;
        if (inte>0 and inte%2 == 0){
            even++;
        }
        if (inte%2 != 0){
            odd++;
        }
        }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}