#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <array>
using namespace std;

/*
clang++ -std=c++17 -g guandan.cpp -o guandan
./guandan
*/
string diamond="\u2666";
string spade="\u2660";
string heart="\u2665";
string club="\u2663";

vector<string> suit_value{diamond,spade,heart,club};
vector<string> on_screen_display{"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

struct card {
    string on_screen_value;
    int value;
    string suit;
    
};

array<array<card,13>,4> one_suit_card;

int main(){
    for(int j=0;j<4;j++){
        for(int i=0;i<13;i++){
            one_suit_card[i][j].on_screen_value=on_screen_display[i];
            one_suit_card[i][j].value=i+2;

            one_suit_card[i][j].suit=suit_value[j];

            cout<<one_suit_card[i][j].on_screen_value;
            cout<<one_suit_card[i][j].suit;
        }
        
    }   


    return 0;
}