    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    using namespace std;

    //variables
    const int deck_size = 52;
    int deck[deck_size];

    enum suits{club, diamond, heart, spade};
    enum Rank {
        ace,
        one,
        two,
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        joker,
        queen,
        king,
    };

    void Initialize_Deck(){
        for(int i = 0; i < deck_size; i++){
            
            //choosing deck[variable] then add number to it 
            deck[i] = i;
        }
    }

    void shuffle_deck(){
        //random each time
        srand(time(0));

        for(int i = 51; i > 0; i--){
            int j = rand() % (i + 1);

            //temporarity snapshot value from deck[i] variable
            int temp = deck[i];

            //swap
            deck[i] = deck[j];
            deck[j] = temp;
        }
    }

    void pick_a_card(int index){
        int rank = index % 13;
        int suit = index / 13;

        switch(rank){
            case 0:
                cout << "Ace of";
                break;
            case 1:
                cout << "One of";
                break;
            case 2:
                cout << "Two of";
                break;
            case 3:
                cout << "Three of";
                break;
            case 4:
                cout << "Four of";
                break;
            case 5:
                cout << "Five of";
                break;
            case 6:
                cout << "Six of";
                break;
            case 7:
                cout << "Seven of";
                break;
            case 8:
                cout << "Eight of";
                break;
            case 9:
                cout << "Nine of";
                break;
            case 10:
                cout << "Jack of";
                break;
            case 11:
                cout << "Queen of";
                break;
            case 12:
                cout << "King of";
                break;
        }

        switch(suit){
            case 0:
                cout << " clubs";
                break;
            case 1:
                cout << " diamonds";
                break;
            case 2:
                cout << " hearts";
                break;
            case 3:
                cout << " spades";
                break;
        }

    }

    int main(){
        int i = 0;
        Initialize_Deck();
        shuffle_deck();
        pick_a_card(deck[0]);
        return 0;
    }
