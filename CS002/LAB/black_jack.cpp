    #include <iostream>
    #include <ctime>
    #include <cstdlib>
    using namespace std;

    //variables
    const int deck_size = 52;
    int deck[deck_size];

    enum suits{club, diamond, heart, spade};

    void Initialize_Deck(){
        for(int i = 0; i < deck_size; i++){
            deck[i] = i;
        }
    }

    void shuffle_deck(){
        srand(time(0));
        for(int i = 51; i > 0; i--){
            int j = rand() % (i + 1);
            int temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
            cout << deck[i] << endl;
        }
    }



    int main(){
        Initialize_Deck();
        cout << endl;
        shuffle_deck();

        return 0;
    }
