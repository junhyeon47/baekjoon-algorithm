#include <iostream>
#include <string>

using namespace std;

int alpha[26];

int main(){
    string input;
    cin>>input;
    for(int i=0; i<input.size(); ++i){
        alpha[input[i]-'a']++;
    }
    for(int i=0; i<26; ++i)
        cout<<alpha[i]<<" ";
    cout<<endl;
    return 0;
}