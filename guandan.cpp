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
    // spade, heart, diamond, club
    vector<string> suits = {"\u2660","\u2665","\u2666","\u2663"};
    
    //colors 
    bool is_red;

    //each card's number and value
    vector<tuple<string,int>> card_value;
    
    //numbers 
    //i end up not even understanding my own code at times
    for (int i=0;i<=25;i++){
        if (i<=10)
            card_value.push_back(tuple<string,int>(to_string(i+1),i+1));
        else if (i==11)
            card_value.push_back(tuple<string,int>("J",i-1));
        else if (i==12)
            card_value.push_back(tuple<string,int>("Q",i-1));
        else if (i==13)
            card_value.push_back(tuple<string,int>("K",i-1));
        else if (i==14)
            card_value.push_back(tuple<string,int>("A",i-1));

    }

    //card itself
    tuple<int,string,bool> card_traits;

    if(is_red=true){
        for (int i=0;i<card_value.size();i++){
            get<0>(card_traits) = i;
            get<2>(card_traits) = true;

            for (int j=0;j<suits.size();j++){
                get<1>(card_traits) = suits[j];
                }

        }
    }else if(is_red=false){
        for (int i=0;i<card_value.size();i++){
            get<0>(card_traits) = i;
            get<2>(card_traits) = false;

            for (int j=0;j<suits.size();j++){
                get<1>(card_traits) = suits[j];
                }

        }
    }




    return 0;
}
