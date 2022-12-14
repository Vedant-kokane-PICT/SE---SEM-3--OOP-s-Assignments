#include<iostream>
using namespace std;

template<class T>
class selection_sort{
  private:
  int size;
  T *array;
  public:
  selection_sort(int n){
    size = n;
    array = new T[size];
  }
  
  void input(){
    for(int i=0;i<size;i++){
      cin>>array[i];
    }
  }
  
  void print_array(){
      for(int i=0;i<size;i++){
      cout<<array[i]<<" ";
    }
  }
  
  void sort(){
    for(int i=0;i<size;i++){
      int min = i;
      for(int j=i+1;j<size;j++){
        if(array[j] < array[min]){
          min = j;
        }
      }
      if(min != i){
      T temp = array[i];
      array[i] = array[min];
      array[min] = temp;
      }
    }
  }
  
};


int main(){
  selection_sort<int> s(5);
  s.input();
  s.print_array();
  s.sort();
  cout<<endl;
  s.print_array();
  return 0;
}
