Yashvesh Singh 24070123138
#include<iostream>
using namespace std;
int main(){
    int i ,j,k;
    int n=5;
    for(i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

Output:
        * 
      * *
    * * *
  * * * *
* * * * *
