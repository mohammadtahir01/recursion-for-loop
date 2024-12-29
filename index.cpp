#include<iostream>
using namespace std;
int fibona(int number){
    int ft=0;
    int st=1;
    int next=0;
    // int n=5;
     for(int i=1; i<=number; ++i){

        if(i==1){
            cout<<ft;
            continue;
        }if(i==2){
            cout<<st;
            continue;
        }
        next=ft+st;
        ft=st;
        st=next;
        if(i!=number){
             cout<<next;
            
        }
        
    }
    
    return next;
    
}

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<fibona(n);
  
}
