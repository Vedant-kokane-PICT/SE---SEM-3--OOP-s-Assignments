// 21415 - Vedant Kokane

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    ofstream out("text.txt");
    int n;
    cout<<"Enter total"<<endl;
    cin>>n;
    int a[n];
    string s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name and roll"<<endl;
        cin>>s[i]>>a[i];
        out<<"name - "<<s[i]<<" , roll - "<<a[i]<<endl;
    }
    out.close();
    ifstream in("text.txt");
    while(in){
        string s1;
        int r1;
        getline(in,s1);
        cout<<s1<<endl;
    }
    in.close();
    return 0;
}

