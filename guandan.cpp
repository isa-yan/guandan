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

    vector<card_traits> cards;

    //putting shit in the struct
    //rn i'm trying out putting this within a suit for loop
    for(int i=0; i<suits.size();i++){
        for (int i=0; i<14; i++){
            cards[i].value=i+1;
            if(i<=10)
                cards[i].on_screen_value=to_string(i);
            else if(i==11)
                cards[i].on_screen_value="J";
            else if(i==12)
                cards[i].on_screen_value="Q";
            else if(i==13)
                cards[i].on_screen_value="K";
            else if(i==14)
                cards[i].on_screen_value="A";


            if (cards[i].is_trump==true)
                cards[i].value=15;



        }
    }
    //suit shit here. so i need the cards to fit certain suits but idk how to do that :thonk:
 







    return 0;
    
    }
