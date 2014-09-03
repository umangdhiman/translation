#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int i,x,y;
    string a,b;
    cin>>a>>b;
    for(y=0;a[y]!='\0';y++)
    x=y;
    --y;
    for(y;y>x/2;y--)
        swap(a[y],a[x-y]);
    for(i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    return 0;
}
