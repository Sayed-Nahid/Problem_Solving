#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a  >> b;
    cout << (long long int)pow(a, b)+ (long long int)pow(b, a) << endl;
    return 0;
}