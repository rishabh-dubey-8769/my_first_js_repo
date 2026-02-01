#include <iostream>
using namespace std;
int main (){
    double h;
    cout <<"enter char h=";
    h=cin.get();
    if ('a'<=h && h<='z')
    cout <<"LOWER CASE.";
    else if ('A'<=h && h<='Z')
    cout <<"UPPER CASE.";
    else if ('0'<=h && h<='9')
    cout <<"numeric.";
    else cout <<"special character .";
}