#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
template<class T>

class calculation{
    public:
    T a; T b;
    T sum(T a, T b){
        return a + b;
    }
    T prod(T a, T b){
        return a / b;
    }
    
};

int main(){
    fast_io;

    calculation<float> cal;

    print(cal.prod(5,6)) << endl;


    return 0;
}