#include <iostream>

#include "structures.h"
#include "utils.h"

using namespace std;

int main() {
    cout<<"这里是test.cpp, 用于测试部件正常工作与否。"<<endl<<endl;//此行在程序期间永远保留

    Cards hand = Cards("1w1w1w2s3s4s5s6t7t8t9t1f1f");
    for(auto x:hand.cards_W)cout<<x<<' ';cout<<endl;
    for(auto x:hand.cards_T)cout<<x<<' ';cout<<endl;
    for(auto x:hand.cards_S)cout<<x<<' ';cout<<endl;
    for(auto x:hand.cards_F)cout<<x<<' ';cout<<endl;
    for(auto x:hand.cards_H)cout<<x<<' ';cout<<endl;

}