Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main(){
    int i ,j,x=1;
    int n=4;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x=x+1;
            cout<<endl;
        }
        cout<<endl;
    }
}

Output:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
