#include<iostream>
using namespace std;
int factorial(int n) {
    int i = 1,
        factorial = 1;
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
    return factorial;
}
int main(){
 cout<<factorial(10);
}

