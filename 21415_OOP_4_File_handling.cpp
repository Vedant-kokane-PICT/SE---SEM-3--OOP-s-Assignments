// 21415 - Vedant Kokane

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    string name[10];
    int roll[10];
    for(int i=0;i<10;i++){
        cin>>name[i]>>roll[i];
    }
    ofstream out("text1.txt");
    for(int i=0;i<10;i++){
        out<<name[i]<<" "<<roll[i]<<endl;
    }
    out.close();

    ifstream in("text1.txt");
    string s1;
    int n;
    while(in){
       in>>s1>>n;
       cout<<s1<<" "<<n<<endl;
    }
    in.close();
    return 0;
}
