#include "Binary.h"


// void Binary::input(std::istream& ins){

// }

void Binary::output(std::ostream& outs){
    outs << state;
}

std::ostream& operator << (std::ostream& outs, const Binary& b){
    outs << b.get_state();
    return outs;
};