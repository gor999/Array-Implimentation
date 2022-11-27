#include<iostream>
#include"array.hpp"


int main(){
    Array<int> p(8);
    Array<char>t; 
    t.size();
    Array<int> V(p);
    V.size();
    V.show();
    V = V;

return 0;
}