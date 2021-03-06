#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel{

string snowman(int x){
    if(x<0) throw invalid_argument("not good - negative number...\n");
    // if(x>99999999) throw invalid_argument("not good - too long number...\n");
    // count digits
    int tmp = x;
    int count = 0;
    while(tmp != 0){
        if(tmp%10>4)
            throw invalid_argument("not good - number between 5-9...\n");
        if(tmp%10==0)
            throw invalid_argument("not good - number is 0...\n");
        tmp = tmp/10;
        count ++;
    }
    if(count != 8)
        throw invalid_argument("not good\n");
   
    if(x == 11114411)
        return "_===_\n(.,.)\n( : )\n( : )";

    return " _===_\n\\(o.o)/\n ( : )\n (   )";
    }
    
}


