#include <iostream>
using namespace std;

class employee{
     private:
      string name;
      int id;
     public:

     // Null Constructor
      employee(){
         this->name="";
         this->id=0;
         
     }

     // Parametrized Constructor 
      employee(int id,string  name){
            this->id=id;
            this->name=name;
      }

      //  Copy Contructor
      employee(employee&obj){
            id=obj.id;
            name=obj.name;

      }

      // Get/Set Method
      void setemployee(int id,string name){
         this->id=id;
         this->name=name;
     }
      void getemployee(){
         cout<<"Id of Employee is "<<id<<endl<<"The name of employee is "<<name<<endl;
     }
     ~employee(){

     }
};

class company{
      private:
       string Cname;
       float Crating;
       employee* emp;// Example of Aggregation as we are passing object using pointer
      public:

      // Null Constructor 
         company(){
               this->Cname="";
               this->Crating=0;
               emp->setemployee(0,"");
             }

      // Parametrized Constructor
         company(float Crating,string Cname,employee* emp){
               this->Cname=Cname;
               this->Crating=Crating;
               this->emp=emp;
         }

      //  Copy Contructor
         company(company&obj){
              Cname=obj.Cname;
              Crating=obj.Crating;

         }
      // Get/Set Method
         void setdata(string Cname,float Crating,int id,string name){
               this->Cname=Cname;
               this->Crating=Crating;
               emp->setemployee(id,name);
         }
         void display(){
               cout<<"Company Name "<<Cname<<endl<<"Company Rating "<<Crating<<endl;
               emp->getemployee();

         }
      
      // Destructor
         ~company(){
          
         }
};
      
int main(){

 employee o1;
 o1.setemployee(12,"Emmad");
      
 company o2(9,"IFLEX",&o1); //here passing the employee object as a refrence.
 o2.display();
            
 //Even if we destroy the company object the employee object won't be destroyed which is the main concept of aggregation 
 o2.~company();
      
 //As above we have destroyed the company object but employee object is not destroyed
 // o1.getemployee();


      return 0;
}