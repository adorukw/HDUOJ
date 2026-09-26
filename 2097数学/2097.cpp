#include <iostream>
using namespace std;

int GetSum(int n,int base){
    int sum=0;
    while(n>0){
        sum+=n%base;
        n/=base;
    }
    return sum;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(GetSum(n,10)==GetSum(n,12)&&GetSum(n,10)==GetSum(n,16)){
            cout<<n<<" is a Sky Number."<<endl;
        }
        else{
            cout<<n<<" is not a Sky Number."<<endl;
        }
    }
    return 0;
}
