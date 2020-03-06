#include<iostream>
using namespace std;
int main(){
    int n1=5,n2=10;
    int *p1,*p2;
    p1=&n1;
    cout<<*p1<<"\t"<<n1<<endl;
    p2=&n2;
    cout<<*p2<<"\t"<<n2<<endl;
    p2=p1;
    cout<<*p2<<"\t"<<*p2<<endl;
    return 0;
}
