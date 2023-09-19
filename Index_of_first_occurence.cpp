#include<iostream>
using namespace std;

    int main(){
        string haystack = "sadbutsad";
        string needle = "but";
        cout<<haystack.find(needle);
        cout<<haystack.size();
        return 0;
    }