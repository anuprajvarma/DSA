#include <bits/stdc++.h>
using namespace std;
#include "datatype.cpp"

int main(){
    Node n1(1);
    Node n2(6);
    n1.next = &n2;
    cout<<n1.data << " "<<n2.data;
    return 0;
}