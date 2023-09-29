#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define loop(a,n) for(int i=a; i<(n); i++)
#define print(value) cout << value
#define size(a) a.size()
#define take(value) cin >> value
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

class A{
    public:
    virtual void display(){
        print("A") << endl;
    }
};

class B : public A{
    public:
    void display(){
        print("B") << endl;
    }
};

struct Student
{
    /* data */
    int rollno;
    char name[10];
    char section;
};


int main(){
    fast_io;

    A *aptr;
    // aptr->display();
    
    B b;

    aptr = &b;
    aptr->display();

    Student s1;
    scanf("%d %s %c",&s1.rollno,&s1.name,&s1.section); 
    printf("%d %s %c",s1.rollno,s1.name,s1.section); 


    return 0;
}