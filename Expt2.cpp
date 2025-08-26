//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
    date();
    void display();
};
    
    date::date(){
        cout<<"enter the date today: ";
        cin>>day;
        cout<<"enter month : ";
        cin>>month;
        cout<<"enter year: ";
        cin>>year;
        
        
    }
    
    void date::display(){
        cout<<endl<<"the date today is  "<<day<<"/"<<month<<"/"<<year<<endl;
    }

int main() {
   date d;
   d.display();
    
    

    return 0;
}

//OUTPUT:
/*enter the date today: 29
enter month : 1
enter year: 2005

the date today is  29/1/2005
*/
