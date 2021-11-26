#include<iostream>
using namespace std;

int fac(int n){
 if(n == 0)return 1;
  fac(n-1)*n;
 cout<<fac(n-1)*n;
 return fac(n-1)*n;
}

int main(){
  int n;
  cin>>n;
  fac(n);

  return 0;

}