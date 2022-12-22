#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    cout<<"Size of vector is "<<vec.capacity()<<endl;

    vec.push_back(1);
    cout<<"Size of vector is "<<vec.capacity()<<endl;

     vec.push_back(2);
    cout<<"Size of vector is "<<vec.capacity()<<endl;

    vec.push_back(3);
    cout<<"Size of vector is "<<vec.capacity()<<endl;

    vec.push_back(4);
    cout<<"Size of vector is "<<vec.capacity()<<endl;

    vec.push_back(6);
    cout<<"Size of vector is "<<vec.capacity()<<endl;

    cout<<"Size of vector--> "<<vec.size()<<endl;

    cout<<"Element at thord index is "<<vec.at(3)<<endl;

    cout<<"First element of vector "<<vec.front()<<endl;

    cout<<"Last element of vector "<<vec.back()<<endl;

    cout<<"Size before clearing "<<vec.size()<<endl;
    vec.clear();
    cout<<"Size after clearing "<<vec.size()<<endl;

}