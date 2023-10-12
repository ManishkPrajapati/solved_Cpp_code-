#include<iostream>
using namespace std;

void conditn(int a, int b){
    if(a==b){
        cout<<"a and b are equal"<<endl;
    }else if (a<b)
    {
        cout<<"a is smaller"<<endl;
    }else
    {
        cout<<"a is bigger"<<endl;
    }
    
}

void loop(int x,int n){
    int c=x;
    do
    {
        cout<<"sub of x and n: "<<n-x<<endl;
        x++;
    }while (x<=n);
    cout<<endl;
    cout<<endl;
    x=c;
    cout<<x;
    for(int i=1; i<n; i++){
        cout<<"multiplication of "<<x<<"*"<<i<<" :"<<x*i<<endl;
    }
    cout<<endl;
    cout<<endl;
    x=c;
    while(x<=n){
        cout<<"sum of x and n: "<<x+n<<endl;
        x++;
    }    
}

int statement(int x, int n){
     int c=x;
    for(int i=1; i<n; i++){
        cout<<"multiplication of "<<x<<"*"<<i<<" :"<<x*i<<endl;
        if(i=6) 
        break;
    }
    cout<<"break the loop if i=6"<<endl;
    cout<<endl;
    cout<<endl;
    x=c;
for(int i=1; i<n; i++){
        cout<<"multiplication of "<<x<<"*"<<i<<" :"<<x*i<<endl;
        if(i=6) 
        continue;
        else{cout<<" continue "<<endl;}
    }
    cout<<endl;
    cout<<endl;
    x=c;
    return x;
}

int main(){
    int a,b,n,x;
    cout<<"value of a: "<<endl;
    cin>>a;
    cout<<"value of b: "<<endl;
    cin>>b;
    cout<<"value of x: "<<endl;
    cin>>x;
    cout<<"value of n: "<<endl;
    cin>>n;
    conditn(a,b);
    loop(x,n);
    statement(x,n);
    cout<<"after whole operation in function value and ressetting x value to its original value x = "<<x<<endl;
    }