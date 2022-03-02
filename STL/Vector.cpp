#include<iostream>
#include <vector>
using namespace std;

// double its size once exceed 
int main(){

    vector<int> v;


      // when vector size known :
    //  vector<int> a(5,1);

    // copy it to new vector
    // vector<int> last(a);

    
    cout<<"size -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i : v){
        cout<<i<<" ";

    }
    cout<<endl;
    
    v.pop_back();

    for(int i : v){
        cout<<i<<" ";
        
    }
    cout<<endl;

    cout<<"before clear"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;    





}