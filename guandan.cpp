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

vector<string> suit_value{"\u2660","\u2665","\u2666","\u2663"};
vector<char> suit_legible{'D','S','H','C'};
vector<string> on_screen_display{"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

struct card {
    string on_screen_value;
    int value;
    string suit_symbol;
    char suit;
    
};

array<array<card,13>,4> one_suit_card;

int main(){
    for(int j=0;j<4;j++){
        for(int i=0;i<one_suit_card.size();i++){
            one_suit_card[j][i].on_screen_value=on_screen_display[i];
            one_suit_card[j][i].value=i+2;
            one_suit_card[j][i].suit_symbol=suit_value[j];
            one_suit_card[j][i].suit=suit_legible[j];
            cout<<one_suit_card[j][i].suit;
            cout<<one_suit_card[j][i].on_screen_value;
        }
        
    }   


    return 0;
}