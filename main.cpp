#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);

    int n,total, deci;
    string binary;

    cout << "Enter the decimal number : ";
    cin >> deci;

    for(n = 0; ; n++){
        if(pow(2, n) > deci){
            break;
        }
    }

    n--;

    binary += '1';

    total = pow(2, n);

    n--;
    for(n; n>=0; n--){
        if((total + pow(2, n)) <= deci){
            total += pow(2, n);
            binary += '1';
        }
        else{
            binary += '0';
        }
    }

    cout << "The binary of "<< deci << " is " << binary << endl;

    return 0;
}
