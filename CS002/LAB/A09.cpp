#include <iostream>
#include <vector>
#include <cassert>

class TV{
    public:
        
        //setter

        //identity
        void set_tv_model(std::string model){
            
            model_name = model;
            
        }
        void set_panel_type(std::string panel){
            panel_type = panel;
        }
        void set_screen_size(int screenSize){
            screen_size = screenSize;
        }
        void set_resolution_x(int x){
            resolutionX = x;
        }
        void set_resolution_y(int y){
            resolutionY = y;
        }
        void set_refresh_rate(int hz){
            refresh_rate = hz;
        }

        //channel & volume
        void set_current_channel(int cur_channel){
            current_channel = cur_channel;
        }
        void set_max_channel(int total_channel){
            max_channels = total_channel;
        }
        void set_volume(int v){
            volume = v;
        }
        void set_max_volume(int max_v){
            max_volume = max_v;
        }
        //power
        void turn_on(){
            is_on = true;
        }
        void turn_off(){
            is_on = false;
        }
        void mute(){
            is_muted = true;
        }
        void unmute(){
            is_muted = false;
        }

        //parametereized constructor
        TV(std::string model, std::string panel, int size, int x, int y, int hz, int channel, int maxCh, int vol, int maxVol, bool on, bool muted){
            //identity
            model_name = model;

            //screen
            panel_type = panel;
            screen_size = size;
            resolutionX = x;
            resolutionY = y;
            refresh_rate = hz;

            //channel & volume
            current_channel = channel;
            max_channels = maxCh;
            volume = vol;
            max_volume = maxVol;
            is_on = on;
            is_muted = muted;

            //keep track of tv created:
            tv_counts++;
        }
        
        //Delating constructor
        TV() : TV("Samsung", "LED", 32, 1920, 1080, 60, 3, 999, 15, 100, false, false){}

        //output
        void display(){
            std::cout << "TV INFO\n"
                      //idenity                    
                      << "Model: " << model_name << "\n"
                      //screen
                      << "Panel type: " << panel_type << "\n"
                      << "Screen Size: " << screen_size << " Inches" << "\n"
                      << "Resolution :" << resolutionX << "x" << resolutionY << "\n"
                      << "Refrese rate: " << refresh_rate << " Hz" << "\n"
                      //channel & volume
                      << "Current Channel: " << current_channel << "\n"
                      << "Max Channels: " << max_channels << "\n"
                      << "Volume: " << volume << " / " << max_volume << "\n"
                      //power
                      << "Power: " << (is_on ? "On" : "Off") << "\n"
                      << "Muted: " << (is_muted ? "On" : "Off") << "\n";
        }


        static void display_total_tv(){
            std::cout << "Total tv created so far: " << tv_counts << std::endl;
        }

        
    private:

        //identity
        std::string model_name;

        //screen
        std::string panel_type;
        int screen_size;
        int resolutionX;
        int resolutionY;
        int refresh_rate;

        //channel & volume
        int current_channel;
        int max_channels;
        int volume;
        int max_volume;

        //power
        bool is_on;
        bool is_muted;

        //total tv
        static int tv_counts;

};

//vairable
    int TV::tv_counts{0};

//get user input int
    void get_input(int &n){
        std::cin >> n;
        assert(n > 0);
    }

//get user input string
    void get_input(std::string &n){
        std::getline(std::cin >> std::ws, n);
    }

//global vector
    std::vector<TV> collections;

//save tv lists
    void save_tv_informations(TV TVs){
        collections.push_back(TVs);
    }

//handle uses default? option
    int custome_or_default(int prompt, int defaultValue){
        char choice{};
        std::cout << "Current: " << defaultValue << ". Keep default? (Y/N): ";
        std::cin >> choice;

        if(choice == 'y' || choice == 'Y'){
            return defaultValue;
        } else {
            int customValue;
            std::cout << "Enter custom value: ";
            std::cin >> customValue;
            return customValue;
        }
    }

//menu
    void display_menu(){
        using namespace std;
        
        cout << "-- TV MANAGEMENT SYSTEM -- " << endl;
        cout << "1. Create new TV" << endl;
        cout << "2. View collections" << endl;
        cout << "3. Exit" << endl;
    }

    enum menuOption {
        CREATE = 1,
        VIEW = 2,
        EXIT = 3
    };

//tv icon
    void display_tv_icon(){
            const std::string tv_art = R"(                            
         ___________
        |  .----.  o|
        | |      | o| 
        | |      | o|
        |__`----`___|
        `         `
            )";
            std::cout << tv_art;
        };


int main(){
    using namespace std;
    //variables
    int user_input{};
    bool create_new_item;
    int tempChoice{};
    int tv_counts;
    int view_menu_choice{};
    
    char choice{};


    TV user_tv;
    TV user_tv_2("LG", "OLED", 32, 1980, 1200, 120, 5, 200, 50, 100, true, false);

    display_tv_icon();
    user_tv.display();

    //tv 2
    user_tv_2.set_current_channel(35);
    user_tv_2.set_volume(62);
    display_tv_icon();
    user_tv_2.display();
    
    cout << endl;
    

    //get user input and save new tv
    do{
        display_menu();
        cin >> tempChoice;

        switch(tempChoice){
            case CREATE:
                if(tempChoice == 1){
                    cout << "\033[2J\033[3J\033[H";
                    create_new_item = true;
                    choice = 'y';
                } else{
                    create_new_item = false;
                }

                while(choice == 'y' || choice == 'Y'){
                    TV new_item;

                    //variables

                    //idenity
                    string model_name;

                    //screen
                    string panel_type;
                    int screen_size;
                    int resolutionX;
                    int resolutionY;
                    int refresh_rate;

                    //channel & volume
                    int current_channel;
                    int max_channels;
                    int volume;
                    int max_volume;

                    //power
                    char yes_no;
                    bool is_on;
                    bool is_muted;

                    //get custom values
                    cout << "Model name (Example: Samsung, LG, Sony,...): "; get_input(model_name);
                    cout << "Panel type (Example: LCD, OLED,...): "; get_input(panel_type);

                    cout << "Model screen size: "; get_input(screen_size);

                    cout << "Resolition example: 1980 x 1200" << endl;
                    cout << "Resolution X: "; get_input(resolutionX);
                    cout << "Resolution Y: "; get_input(resolutionY);

                    cout << "Refresh Rate: "; get_input(refresh_rate);

                    cout << "Is your tv on? (y/n): ";
                    cin >> yes_no;
                    if (yes_no == 'y' || yes_no == 'Y'){
                        is_on = true;
                    } else{
                        is_on = false;
                    }

                    cout << "Is your tv muted? (y/n): ";
                    cin >> yes_no;
                    if (yes_no == 'y' || yes_no == 'Y'){
                        is_muted = true;
                    } else{
                        is_muted = false;
                    }

                    new_item.set_tv_model(model_name);
                    new_item.set_panel_type(panel_type);

                    new_item.set_screen_size(screen_size);

                    new_item.set_resolution_x(resolutionX);
                    new_item.set_resolution_y(resolutionY);
                    
                    new_item.set_refresh_rate(refresh_rate);

                    cout << "Channel: " << endl;
                    new_item.set_current_channel(custome_or_default(current_channel, 1));
                    cout << endl;

                    cout << "Max Channels: " << endl;
                    new_item.set_max_channel(custome_or_default(max_channels, 999));
                    cout << endl;

                    cout << "Volume: " << endl;
                    new_item.set_volume(custome_or_default(volume, 1));
                    cout << endl;

                    cout << "Max Volume: " << endl;
                    new_item.set_max_volume(custome_or_default(max_volume, 100));
                    cout << endl;

                    collections.push_back(new_item);
                    tv_counts++;
                    cout << "\033[2J\033[3J\033[H";
                    cout << "Your info has been saved." << endl;
                    cout << "Create another one? (y/n): ";
                    cin >> choice;
                    cout << "\033[2J\033[3J\033[H";
                    
                }
                break;
            
            case VIEW:
                do{
                    cout << "\033[2J\033[3J\033[H";
                    cout << "collections: " << endl;
                    cout << "You have total of: "<< collections.size() << " TVs" << endl;
                    
                    cout << endl;
                    
                    //menu
                    cout << "-- VIEW MENU --" << endl;
                    cout << "1. View list" << endl;
                    cout << "2. Exit" << endl;
                    
                    cin >> view_menu_choice;
                        if(view_menu_choice == 1){
                                if(collections.empty()){
                                    cout << "The collection is empty!" << endl;
                                    
                                }else{
                                    cout << "\033[2J\033[3J\033[H";
                                    for(int i = 0; i < collections.size(); i++){
                                    display_tv_icon();
                                    cout << "TV #" << (i + 1) << endl;
                                    collections[i].display();
                                    }   
                                }
                                cout << "\nPress ENTER to return to menu...";
                                cin.ignore(1000, '\n');
                                cin.get();

                        } else if(view_menu_choice == 2){
                            cout << "\033[2J\033[3J\033[H";
                        }
                                  
                }while(view_menu_choice != 2);
                break;

            case EXIT:
                break;
        }

        

    }while(tempChoice != EXIT);
    
    return 0;
}