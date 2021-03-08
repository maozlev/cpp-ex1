#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel{

string snowman(int x){
    if(x<0)
        throw invalid_argument("not good - negative number...\n");
    if(x == 0)
        throw invalid_argument("not good - invalid input...\n");
    if(x>99999999)
        throw invalid_argument("not good - too long number...\n");
    if(x>44444444)
        throw invalid_argument("not good - invalid input...\n");
    
    int list[8]; // my list to build a snowman!
        
    string hat[4] = { "       \n _===_ \n", "  ___  \n ..... \n","   _   \n  /_\\  \n","  ___  \n (_*_) \n" }; //0
    string nose[4] = { ",", ".", "_", " " }; // 1
    string left_eye[4] = { "(.", "(o", "(O", "(-" }; // 1
    string right_eye[4] = { ".)", "o)", "O)", "-)" }; // 1
    string left_arm[4] = { "<", "\\", "/", " " }; // if \ 1 else 2
    string right_arm[4] = { ">", "/", "\\", " " }; // if / 1 else 2
    string torso[4] = { "( : )", "(] [)", "(> <)", "(   )" }; // 2
    string base[4] = { " ( : ) ", " (\" \") ", " (___) " , " (   ) " }; // 3

     // count digits and find out if there are any invalid digits
    int tmp = x;
    int count = 0;
    int index_list = 7; 

    while(tmp != 0){
        if(tmp%10>4)
            throw invalid_argument("not good - in input there is number between 5-9...\n");
        if(tmp%10==0)
            throw invalid_argument("not good - in input there is number 0...\n");
        list[index_list] = tmp%10; // fill the list of our snowman
        tmp = tmp/10;
        index_list--; 
        count ++;
    }
    if(count > 8)
        throw invalid_argument("not good - number of digits bigger then 8...\n");
    if(count < 8)
        throw invalid_argument("not good - number of digits smaller then 8...\n");
    
    // cout<<"count is: "<< count<<endl;
    
    string snowman_out=""; // h n l r x y t b - order of snowman

    snowman_out+=hat[list[0]-1];
        if(list[4] == 2){
            snowman_out+= "\\";
        }
        else{
            snowman_out+=" ";
        }

    snowman_out+= left_eye[list[2]-1]+nose[list[1]-1]+right_eye[list[3]-1]; 

        if(list[5] == 2){
            snowman_out+= "/\n";
        }
        else{
            snowman_out+=" \n";
        }
        if(list[4] != 2){
            snowman_out+= left_arm[list[4]-1];
        }
        else{
            snowman_out+=" ";
        }

    snowman_out+= torso[list[6]-1];

        if(list[5] != 2){
            snowman_out+= right_arm[list[5]-1]+"\n";
        }
        else{
            snowman_out+=" \n";
        }

    snowman_out+=base[list[7]-1];
            
    // cout << "----------------------------" <<endl;
    // cout << snowman_out <<endl;
    // cout << "----------------------------" <<endl;

    return snowman_out;
    }
}


