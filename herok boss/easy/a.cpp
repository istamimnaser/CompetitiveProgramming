#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

struct Card{
    char rank;
    char suit;
};

bool matches(Card a, Card b){
    return a.rank == b.rank || a.suit == b.suit;
}

int main(){
    string token;
    while(cin>>token && token != "#"){
        vector<stack<Card>> piles;

        Card c;
        c.rank = token[0];
        c.suit = token[1];

        stack<Card> firstPile;
        firstPile.push(c);
        piles.push_back(firstPile);

        for(int i = 1; i <52; i++){
            cin>>token;
            Card nextCard;
            nextCard.rank = token[0];
            nextCard.suit = token[1];

            stack<Card> s;
            s.push(nextCard);
            piles.push_back(s);
        }


        for(int i = 1; i < piles.size();i++){
            Card currentTop = piles[i].top();

            if(i>=3 && matches(currentTop,piles[i-3].top())){
                piles[i-3].push(currentTop);
                piles[i].pop();

                if(piles[i].empty()){
                    piles.erase(piles.begin()+i);
                }
                i= 0;
            }

            else if(i>=1 && matches(currentTop,piles[i-1].top())){
                piles[i-1].push(currentTop);
                piles[i].pop();

                if(piles[i].empty()){
                    piles.erase(piles.begin()+i);
                }
                i= 0;


             
        }
    }
       cout<<piles.size()<<" pile" << (piles.size() == 1 ? "" : "s") << " remaining:";
                for(auto &pile : piles){
                    cout<<" "<<pile.size();
                }
                cout<<endl;
}
    return 0;
}