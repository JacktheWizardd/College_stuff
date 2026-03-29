    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    using namespace std;

    //variables
    const int deck_size = 52;
    int deck[deck_size];

    int player_max_card[11];
    int dealer_max_card[11];

    int player_card_count = 0;
    int dealer_card_count = 0;

    int deck_index = 0;

    enum suits{club, diamond, heart, spade};
    enum Rank {
        ace,
        two,
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        ten,
        jack,
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
            case ace:
                cout << "Ace of";
                break;
            case two:
                cout << "Two of";
                break;
            case three:
                cout << "Three of";
                break;
            case four:
                cout << "Four of";
                break;
            case five:
                cout << "Five of";
                break;
            case six:
                cout << "Six of";
                break;
            case seven:
                cout << "Seven of";
                break;
            case eight:
                cout << "Eight of";
                break;
            case nine:
                cout << "Nine of";
                break;
            case ten:
                cout << "Ten of";
                break;
            case jack:
                cout << "Jack of";
                break;
            case queen:
                cout << "Queen of";
                break;
            case king:
                cout << "King of";
                break;
        }

        switch(suit){
            case 0:
                cout << " Clubs ♣";
                break;
            case 1:
                cout << " Diamonds ♦";
                break;
            case 2:
                cout << " Hearts ♥";
                break;
            case 3:
                cout << " Spades ♠";
                break;
        }

    }
    int card_value(int current_card){
        int rank = current_card % 13;
        switch(rank){
            case ace:
                return 11;
            case two:
                return 2;
            case three:
                return 3;
            case four:
                return 4;
            case five:
                return 5;
            case six:
                return 6;
            case seven:
                return 7;
            case eight:
                return 8;
            case nine:
                return 9;
            case ten:
            case jack:
            case queen:
            case king:
                return 10;
        }return 0;
    }

    int calculate_hand(int index, int count){
        
    }
    

    int main(){
        Initialize_Deck();
        shuffle_deck();
        pick_a_card(deck[0]);
        card_value(deck[0]);
        return 0;
    }
