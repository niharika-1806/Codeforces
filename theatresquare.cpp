#include<iostream>
using namespace std;
int main(){

    long n,m,a;
    cin>>n>>m>>a;

    long  horizontal_tiles=(n+a-1)/a;
    long vertical_tiles=(m+a-1)/a;
    cout<<horizontal_tiles*vertical_tiles<<endl;
    return 0;
}