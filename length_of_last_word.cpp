#include<iostream>
using namespace std;

    int lengthOfLastWord(string s) {
        int index=0,result=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
                index=0;
            else{
                index++;
                result=index;
            }
        }
        return result;
    };

    int main(){
        cout<<lengthOfLastWord("   fly me   to   the    moon  ");
        return 0;
    }