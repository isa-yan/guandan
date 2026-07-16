#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <tuple>

using namespace std;

/*
clang++ -std=c++17 -g guandan.cpp -o guandan
./guandan
*/

int main(){
    vector<string> suits = {"\u2660","\u2665","\u2666","\u2663"};
    // spade, heart, diamond, club

    // each card will be a tuple of (suit, rank)
    vector<tuple<string,int>> cards;

    //each card's number and value
    vector<tuple<string,int>> card_value;
    
    for (int i=0;i<=26;i++){
        cards.push_back(tuple<string,int>(to_string(i),i));

    }


    for (int i=0;i<suits.size();i++){
        cout<<suits[i];
    }

    return 0;
}
