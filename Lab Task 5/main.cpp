#include "lab.cpp"
#include <iostream>
using namespace std;


class timeStamp{
    private : 
    int hour;
    int minute;
    int second;
    public : 
    timeStamp(int s = 0 , int m = 0 , int h = 0){
        hour = h;
        minute = m;
        second = s;
    }

    bool operator==(timeStamp time){
        if(hour == time.hour && minute == time.minute && second == time.second){
            return true;
        }
        return false;
    }

    void operator=(timeStamp time){
        hour = time.hour;
        minute = time.minute;
        second = time.second;
    }

    bool operator<(timeStamp time){
        if(hour<time.hour){
            return true ; 
        }
        else if(hour == time.hour){
            if(minute < time.minute){
                return true ; 
            }
            else if( minute == time.minute){
                if(second < time.second){
                    return true ;
            }
            else return false ; 
        }
        return false ; 
    }
    else return false ; 
    }

    bool operator!=(timeStamp time){
        if(hour!= time.hour || minute!= time.minute || second!= time.second){
            return true ; 
        }
        return false ;
    }

    void print(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};


int main(){
    cout<<boolalpha ; 
    SortedType<int> list;
    cout<<"Length of the list : "<<list.LengthIs()<<endl;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);
    int x = 0 ;
    list.ResetList();
    for ( int i = 0 ; i < list.LengthIs() ; ++i ){
        list.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;
    bool found ;
    int item = 6 ; 
    list.RetrieveItem(item,found);
    cout<<item<<" is "<<((found)?"found":"not found")<<endl;
    item = 5  ;
    list.RetrieveItem(item,found);
    cout<<item<<" is "<<((found)?"found":"not found")<<endl;
    (list.IsFull())?cout<<"List is full"<<endl : cout<<"list is not full"<<endl;
    list.DeleteItem(1);
    cout<<"1 is deleted from the list"<<endl;
    cout<<"List after deletion"<<endl;
    list.ResetList();
    for ( int i = 0 ; i < list.LengthIs() ; ++i ){
        list.GetNextItem(x);
        cout<<x<<" ";
    }
    cout<<endl;
    (list.IsFull())?cout<<"List is full"<<endl : cout<<"list is not full"<<endl;
    cout<<endl<<endl;
    cout<<"#--------------------------------Time Stamp--------------------------------#"<<endl;
    SortedType<timeStamp> timelist ; 
    timeStamp time1 = timeStamp(15,34,23);
    timeStamp time2 = timeStamp(13,13,02);
    timeStamp time3 = timeStamp(43,45,12);
    timeStamp time4 = timeStamp(25,36,17);
    timeStamp time5 = timeStamp(52,02,20);

    timelist.InsertItem(time1);
    timelist.InsertItem(time2);
    timelist.InsertItem(time3);
    timelist.InsertItem(time4);
    timelist.InsertItem(time5);
    timeStamp t ; 
    cout<<"Time Stamp list after inserting all the times "<<endl;
    timelist.ResetList();
    for ( int i = 0 ; i < timelist.LengthIs() ; ++i ){
        timelist.GetNextItem(t);
        t.print();
    }
    timelist.DeleteItem(time4);
    cout<<"time4 is deleted"<<endl;
    cout<<"Time Stamp list after deleting time4"<<endl;
    timelist.ResetList();
    for ( int i = 0 ; i < timelist.LengthIs() ; ++i ){
        timelist.GetNextItem(t);
        t.print();
    }
    cout<<endl;
    


}
