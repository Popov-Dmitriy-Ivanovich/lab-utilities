
#ifndef MENU
#define MENU
#include <string>
#include <iostream>
class menu{            
    protected: 
        int choose=0;
        std::string mes;
        void choose_action(std::string inp){
            if (inp[0]=='q'){
                this->choose=-1;
            }
            else if (inp[0]<='9' && inp[0]>='0'){
                this->choose=inp[0]-'0';
            }
            else{
                throw "not any instance of menu!\n";
            } 
        }
    public:
        menu(){
            this->choose=1;
        }
        int show_menu(){
            std::cout<<this->mes;
            std::string inp;
            std::cin>>inp;
            choose_action(inp);
            return choose;
        }
        bool stop(){
            return this->choose!=-1;
        }
        
};
#endif