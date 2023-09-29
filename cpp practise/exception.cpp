#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)


void display(int a, int b){
        try{
            if(a == 0){
                throw a;
            }
        }catch(int d){
            cout << d  << endl;
        }
}

class Exception{
    string error_message;

    public:
    Exception(string message){
        error_message = message;
    }
    void display(){
        print(error_message) << endl;
    }
};

void checkNumber(int a){
    try{
        if(a == 0){
            throw Exception("number not be zero.");
        }
        else{
            print(a) << endl;
        }
    }catch(Exception T){
        T.display();
    }
    
}


int main(){
    fast_io;


    // display(0,5);
    checkNumber(0);


    return 0;
}