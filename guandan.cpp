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

    /*
    twas getting too confusing with tuples so i changed to structs so i would still have some hair by the end o fmy project
    */

    //setting up shit in here
    vector<string> suits={"\u2660","\u2665","\u2666","\u2663"};
    vector<string> on_screen_values={"1","2","3","4","5","6","7","8","9","10","J","Q","K","A"};

    //setting up the struct
    struct card_traits{
        int value;
        string on_screen_value;
        bool is_trump=false;
        string suit;

    };

    
    array<array<card_traits,26>,4> total_cards;
    array<card_traits,26> cards;

    //putting shit in the struct
    //rn i'm trying out putting this within a suit for loop
    for(int j=0;j<4;j++){
        for (int i=0; i<13; i++){
            cards[i].value=i+1;
            cards[i].on_screen_value=on_screen_values[i];
            cards[i].suit=suits[j];

            total_cards.at(j).at(i).value=cards[i].value;
            total_cards.at(j).at(i).suit=cards[i].suit;
            total_cards.at(j).at(i).on_screen_value=cards[i].on_screen_value;

            /*for (int k=0;k<4;k++){
                total_cards[k[i]].suit=suits[j];
            }*/
            
        }
    }
    for (int i=0;i<total_cards.size();i++){
        for (int j=0;j<108;j++){
            cout<<total_cards[i][j].on_screen_value<<total_cards[i][j].suit<<"\n";
        }
    }

    //suit shit here. so i need the cards to fit certain suits but idk how to do that :thonk:
 



    return 0;
    
    }
