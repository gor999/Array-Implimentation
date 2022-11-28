#include<iostream>
#include"array.hpp"


int main(){
 Array<int>t(4);
    Array<int>f(4);
    t[3]= 8;
    t.size();
    std::cout<<t[3]<<std::endl;
    Array<int> V;
    V.size();
    V.show();
    V = t;
    V.show();
    if(f == V){
        std::cout<<"yes"<<std::endl;
    }else{
        std::cout<<"NO"<<std::endl;
    }
}