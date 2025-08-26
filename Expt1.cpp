//Priyansha 
//24070123079
//ENTC-A3

#include <iostream>
using namespace std;

class Electronics{
    string name;
    string type;
    string use;
    int price;
    public:
    Electronics(){
        cout<<"enter name of component"<<endl;
        cin>>name;
        cout<<"enter type of component"<<endl;
        cin>>type;
        cout<<"enter use of component"<<endl;
        cin>>use;
        cout<<"enter price of compoment"<<endl;
        cin>>price;
        
    }
};
int main() {
    Electronics E1;
    Electronics E2;
    
    

    return 0;
}

//OUTPUT:
/*
enter name of component
Diode
enter type of component
Zener
enter use of component
circuits
enter price of compoment
50*/
