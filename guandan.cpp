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

bool can_play;

struct combination{ //combinations that are possible;
    string type;
    int no_of_cards;
    bool same_suit;
    int combo_value;
};

combination single;
combination duo;
combination triple;
combination kaboom4;
combination kaboom5;
combination kaboom6;
combination kaboom7;
combination kaboom8;
combination straight;
combination full_house;
combination in_row_3pairs;
combination two_ordered_triples;

vector<combination> possible_combos={single,duo,triple,kaboom4,kaboom5,kaboom6,kaboom7,kaboom8,straight,full_house,in_row_3pairs,two_ordered_triples;}

int practice_logic_combo(){
    /*if(can_play==false){

    } for later worrking with a graphics library*/ 
    
    for(int i=0;i<11;i++){
        possible_combos[i].no_of_cards=i;
        if(i==7)
            possible_combos[i].no_of_cards=5;
        if(i==8)
            possible_combos[i].no_of_cards=5;
        if(i==9)
            possible_combos[i].no_of_cards=6;
        if(i==10)
            possible_combos[i].no_of_cards=6;
        
    }

    

    return 0;
}



array<array<array<card,13>,4>,2> total_cards;//array of two decks, two decks are 4 arrays of suits, and 13 cards in each suit

//array<array<card,13>,4> one_suit_card; //one suit of cards, and there's 4 suits of one suit

int main(){
    /*
    for(int j=0;j<4;j++){
        for(int i=0;i<13;i++){
            one_suit_card[i][j].on_screen_value=on_screen_display[i];
            one_suit_card[i][j].value=i+2;

            one_suit_card[i][j].suit=suit_value[j];

            cout<<one_suit_card[i][j].on_screen_value;
            cout<<one_suit_card[i][j].suit;
        }
        
    }  */
    for (int k=0;k<2;k++){
        for(int j=0;j<4;j++){
            for(int i=0;i<13;i++){
                total_cards[k][j][i].on_screen_value=on_screen_display[i];
                total_cards[k][j][i].value=i+2;

                total_cards[k][j][i].suit=suit_value[j];

                cout<<total_cards[k][j][i].on_screen_value;
                cout<<total_cards[k][j][i].suit;
            }
        }
    }



    return 0;
}