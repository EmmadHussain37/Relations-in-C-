#include <iostream>
using namespace std;

class empbirthday{
    private:
     int day;
     int month;
     int year;
    public:

    // Null Constructor        
     empbirthday(){
         day=0;
         month=0;
         year=0; 
     }

     // Parametrized Constructor 
     empbirthday(int d,int m,int y){
         day=d;
         month=m;
         year=y;
     } 

      //  Copy Contructor
     empbirthday(empbirthday&obj){
         day=obj.day;
         month=obj.month;
         year=obj.year;
     }

     // Get/Set Method 
     void setdate(int d,int m,int y){
         day=d;
         month=m;
         year=y;
     } 

     int getdata(){
         return day,month,year;

     }

     void display(){
         cout<<"Birthday : "<<day<<"/"<<month<<"/"<<year<<endl;
     }

};

class employee{
    string name;
    int id;
    empbirthday obj;
    public:

    // Parametrized Constructor 
     employee(string name,int id,int d,int m,int y){
         this->name=name;
         this->id=id;
         obj.setdate(d,m,y);
         }

     // Null Constructor  
     employee(){
         this->name="";
         this->id=0;
         obj.setdate(0,0,0);
     }

     //  Copy Contructor
    employee(employee&obj){
            id=obj.id;
            name=obj.name;
            }

     // Get/Set Method 
     void setemployee(string name,int id){
         this->name=name;
         this->id=id;
     }
    void display(){

        cout<<"Employee Name : "<<name<<endl<<"Employee ID :"<<id<<endl;
        obj.display();
    }
};

int main(){
    employee o1("Emmad",12,20,3,2001);
    o1.display();
    return 0;
}