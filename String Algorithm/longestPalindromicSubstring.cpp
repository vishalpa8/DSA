#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

/*
bruteforce approach, where we are storing characters in temp in a linear way and other hand
in temp2 we are storing character's in reverse order. and if it is palindrome and if value comes greater by matching to 
ans then we are just updating that to newer one.
*/

string longestPalindrome(string S){
    
    string ans="";
        int n=S.size();     //aaaabbaa size = 8;
        for(int i=0;i<n;i++){
            string temp="";
            string temp2="";
            for(int j=i;j<n;j++){
                temp+=S[j];     // temp = aaaabbaa
                temp2=S[j]+temp2;   //temp2 = aaabbaa
                if(temp==temp2 && ans.size()<temp.size())
                    ans=temp;        // ans = aaaabbaa
            }       
        }
        return ans;
}



int main(){
    fast_io;
    string s = "ababbababba";

    cout << longestPalindrome(s);

    return 0;
}