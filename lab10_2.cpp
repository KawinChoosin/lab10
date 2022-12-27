#include<iostream>
using namespace std;

void printO(int x,int y){
    if(x<=0 or y<=0){
        cout<<"Invalid input";
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<"O";
        }
        cout<<"\n";
    } 
    }
    