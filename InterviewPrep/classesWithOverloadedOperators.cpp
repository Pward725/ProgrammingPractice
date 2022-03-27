#include<bits/stdc++.h>

using namespace std;

class Box
{
    private:
        int l;
        int b;
        int h;
    public:
        Box(){l = 0;b = 0;h = 0;};
        Box(int lIn, int bIn, int hIn)
        {
            l = lIn;
            b = bIn;
            h = hIn;
        }
        Box(Box &b){
            this->l = b.l;
            this->b = b.b;
            this->h = b.h;
        }
        int getLength(void){return l;}
        int getBreadth(void){return b;}
        int getHeight(void){return h;}
        long long CalculateVolume(void){return l*b*h;}
        bool operator<(const Box& b) {
            if (this->l < b.l)
            {
                return 1;
            }
            else if ((this->l == b.l) && this->b < b.b)
            {
                return 1;
            }
            else if ((this->l == b.l) && (this->b == b.b) 
            && (this->h < b.h))
            {
                return 1;
            }
            else {
            return 0;
            }
        }
        friend ostream& operator<<(ostream& out, Box& B) {
            out << std::to_string(B.l)+" "+
                   std::to_string(B.b)+" "+
                   std::to_string(B.h);
            return out;
        }
};
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

