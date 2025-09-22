
#ifndef BINARY_H
#define BINARY_H
#include <iostream>


class Binary{
    public:

       Binary(const bool initState = false) : state(initState){};

        // void input(std::istream& ins);
        void output(std::ostream& outs);

        bool get_state() const {return state;}

        Binary operator + (const Binary b2) const {return Binary((state || b2.state));}

        Binary operator + (const bool b2)   const {return Binary((state || b2));}

        Binary operator * (const Binary b2) const {return Binary((state && b2.state));}

        Binary operator * (const bool b2)   const {return Binary((state && b2));}

        Binary operator ! ()                const {return Binary(!state);}

         


    private:

        const bool state;



};
    
std::ostream& operator << (std::ostream& outs, const Binary& p);

// std::istream& operator >> (std::istream& ins, Binary& p);

#endif