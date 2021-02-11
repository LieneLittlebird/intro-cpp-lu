// month
#include<iostream>
using namespace std;
int main() {
    // winter months: 12,1,2
    int m; // 1(jan)..12(dec)
    cout<<"Input month number: ";
    cin>>m;

    if (m == 12 || m == 1 || m == 2)
    {
        cout<<"winter"<<endl;
    }
    else if (m >= 3 && m <= 11) {
        cout<<"not winter"<<endl;
    }
    else {
        cout<<"incorrect input"<<endl;
    }

    // if (m<1) cout<<"incorrect input"<<endl;
    // else if (m>12)
    //     cout<<"incorrect input"<<endl;
    // else if (m>=3 and m<=11) {
    //     cout<<"not winter"<<endl;
    // }28201801
    
    // else cout<<"winter"<<endl;
}
