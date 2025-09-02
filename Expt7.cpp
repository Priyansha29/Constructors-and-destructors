//PRIYANSHA 
//24070123079
//ENTC-A3

#include<iostream>
using namespace std;

class Date{
    public:
    ~Date(){
        cout<<"Destructor Called"<<endl;
    }
};

int main(){

    Date d1, d2, d3, d4;

    int i;
    for(i=0; i<4; i++){
        Date d1;
    }
    return 0;
}


/*OUTPUTS:
Destructor Called
Destructor Called
Destructor Called
Destructor Called
Destructor Called
Destructor Called
Destructor Called
Destructor Called
*/
