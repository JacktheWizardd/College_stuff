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
        ten,
        eleven,
        twelve,
        thirdteen
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



    int main(){
        Initialize_Deck();
        shuffle_deck();
        Rank rank = one;
        cout << rank;
        return 0;
    }
