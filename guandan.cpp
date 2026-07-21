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

    //setting up the struct
    struct card_traits{
        int value;
        string on_screen_value;
        string suit;
        bool is_trump;

    };

    array<card_traits,26> cards;

    //putting shit in the struct
    //rn i'm trying out putting this within a suit for loop
    for(int i=0;i<suits.size();i++){
        cards[i].suit=suits[i];

            for (int i=0; i<14; i++){
                cards[i].value=i+1;

                if(i==0){
                    cards[0].on_screen_value="A";
                    cards[0].value=13;
                }

                else if(i<=9)
                    cards[i].on_screen_value=to_string(i+1);
                else if(i==10)
                    cards[i].on_screen_value="J";
                else if(i==11)
                    cards[i].on_screen_value="Q";
                else if(i==12)
                    cards[i].on_screen_value="K";

                if (cards[i].is_trump==true)
                    cards[i].value=14;

                cout<<cards[i].on_screen_value;
            }
        }

    //suit shit here. so i need the cards to fit certain suits but idk how to do that :thonk:
 



    return 0;
    
    }
