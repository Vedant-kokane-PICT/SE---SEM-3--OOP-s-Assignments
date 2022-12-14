// 21415 - Vedant Kokane

#include <iostream>
#include<map>
#include<string.h>
using namespace std;
int main() {
    string name;
    int pop;
    string states[] = {"Maharashtra","Goa","Punjab"};
    int pops[] = {470,340,270};
    map<string,int> map_state;
    map<string,int> :: iterator it;
    for(int i=0;i<3;i++){
        name = states[i];
        pop = pops[i];
        map_state[name] = pop;
    }
    cout<<"Enter state - "<<endl;
    cin>>name;
    pop = map_state[name];
    cout<<"Population - "<<pop<<endl;
    cout<<endl;
    for(it = map_state.begin(); it !=map_state.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}
