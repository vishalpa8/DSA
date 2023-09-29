#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<n; i++)
#define println(value) cout << value << "\n"
#define print(value) cout << value << " "
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void subset(string arr,int n,int index,string res){ 
        if(index == n){
            println(res);
            return;
        }
        loop(index,n){
            subset(arr,n,i+1,res+arr[i]);
        }

        println(res);
}

int main(){
    fast_io;

    int n;

    string s;
    take(s);
    n = size(s);

    subset(s,n,0,"");

    return 0;
}