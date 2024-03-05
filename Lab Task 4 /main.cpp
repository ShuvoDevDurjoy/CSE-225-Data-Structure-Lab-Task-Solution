#include "lab.h"
using namespace std;

class StudentInfo{
    private : 
        int id ; 
        string name;
        float cgpa ; 
    public : 
        StudentInfo(int id = 0, string name = "null",float cgpa = 0.0f) : id(id), name(name), cgpa(cgpa){}
        bool operator==(StudentInfo student){
            if(name==student.name && cgpa==student.cgpa && id == student.id){
                return true ; 
            }
            return false ; 
        }

        void operator=(StudentInfo student){
            this->name = student.name ; 
            this->id = student.id ; 
            this->cgpa = student.cgpa ;
        }
        friend ostream& operator<<(ostream& out, StudentInfo& student){
            out << student.id << " " << student.name << " " << student.cgpa<<endl ; 
            return out ; 
        }
};

int main(){
    cout<<boolalpha ; 
    UnsortedType<int> list;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);
    list.print();
    cout<<"here the length of the list is : "<<list.LengthIs()<<endl;
    list.InsertItem(1);
    list.print();
    bool found ;
    int item = 4 ; 
    list.RetrieveItem(item,found);
    cout<<"4 "<<((found)?"found":"not found")<<endl;
    item = 5  ;
    list.RetrieveItem(item,found);
    cout<<"5 "<<((found)?"found":"not found")<<endl;
    item = 9 ; 
    list.RetrieveItem(item,found);
    cout<<"9 "<<((found)?"found":"not found")<<endl;
    item = 10 ; 
    list.RetrieveItem(item,found);
    cout<<"10 "<<((found)?"found":"not found")<<endl;
    (list.IsFull())?cout<<"list is full"<<endl : cout<<"list is not full"<<endl;
    list.DeleteItem(5);
    list.print();
    (list.IsFull())?cout<<"list is full"<<endl : cout<<"list is not full"<<endl;
    list.DeleteItem(1);
    list.print();
    list.DeleteItem(6);
    cout<<"list after deleting 6 "<<endl;
    list.print();



    UnsortedType<StudentInfo> list2 ;
    StudentInfo student1 = StudentInfo(15234,"Jon",2.6);
    StudentInfo student2 = StudentInfo(13732,"Tyrion",3.9);
    StudentInfo student3 = StudentInfo(13569,"Sandor",1.2);
    StudentInfo student4 = StudentInfo(15467,"Ramsey",3.1);
    StudentInfo student5 = StudentInfo(16285,"Arya",3.1);
    list2.InsertItem(student1);
    list2.InsertItem(student2);
    list2.InsertItem(student3);
    list2.InsertItem(student4);
    list2.InsertItem(student5);
    list2.print();
    list2.DeleteItem(student4);
    list2.print();
    StudentInfo student = student4 ; 
    list2.RetrieveItem(student,found);
    cout<<student<<((found)?"found":"not found")<<endl;
    list2.print();



}
