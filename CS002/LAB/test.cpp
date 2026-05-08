#include <iostream>
#include <cassert>

//class
    class rectangle{
        private:

            //variables
            int width{0};
            int height{0};

        public:

            //setters
            void set_width(int &w){
                assert(w >= 0 || w <= 0);
                width = w;
            }

            //getter
            void get_area(int w, int h){
                int result = w * h;
            }
            //*constructors*
            //------------------
            //default constructor
            rectangle(){
                width = 0;
                height = 0;
            }
            //parameterized constructor
            rectangle(int &w, int &h){
                width = w;
                height = h;
            }

            //friend functions
            
            
    };

int main(){
    
    return 0;
}