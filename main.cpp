#include <iostream>

using namespace std;

class person {
public:

    string name;
    string surname;
    int age;


person(): name("nothing"), surname("nothing"), age(0){
}

person(string a, string b, int c){
    setName(a);
    setSurname(b);
    setAge(c);
}
void setName(string a) {
    name = a;
}
string GetName() {
    return name;
}

void setSurname(string b) {
    surname = b;
}
string GetSurname() {
    return surname;
}

void setAge(int c) {
    age = c;
}
int GetAge() {
    return age;
}

void printper(){
    cout << "Family information: " << endl;
    cout << "Name : " << name << " " <<"Surname : " << surname << " " << "Age : "<< age << " ";

}
};



class family

{

     int number_of_children, kindergeld;

     person member;

public:

    family(): number_of_children(0),kindergeld(0){
    }


 //   family(person member,int number_of_children){
  //  setnumber_of_children(a);
   // setPerson(b)
   // }


    family(person member,int number_of_children){
        setNumChildren(number_of_children);
        setPerson(member);
        setkindergeld(0);
    }

    void setPerson(person d){
        member = d;
    }
    person getPerson(){
        return member;
    }


    void setNumChildren(int a){
        number_of_children = a;
    }
    int getnumber_of_children(){
        return number_of_children;
    }

    void setkindergeld(int b){
        kindergeld = b;
    }
    int getkindergeld(){
        return kindergeld;
    }




    int calculate_support(){

        if(number_of_children <= 2){
        kindergeld = 184*number_of_children;
    }

    else if(number_of_children == 3){
        kindergeld = (184*2)+190;
    }
    else if(number_of_children > 3){
        int finalson;

        finalson = number_of_children-3;
        kindergeld = (184*2+190)+(finalson*215);
    }

    // family(void);
    return kindergeld;
    }


     void printfam(){
        cout << "Number of Child : " << number_of_children << endl;
        cout << "Kindergeld : " << kindergeld;
     }

     void printInfo();

};

//Test your class in main function:



int main()

{
   person father("Burak", "Surname", 33);
   // p1.setName("Burak");
   // p1.setSurname("Barlas");
   // p1.setAge(5);

    father.printper();

 //   family p2;
  //  p2.setnumber_of_children(3);
   // p2.calculate_support();
   // p2.printfam();
//Create 2 objects by using default constructor and overloaded constructor.

// #Person father(“Name”, “Surname”,45);

family (father,2);

// #cout<<"Print family information :"<<endl;

return 0;

}

