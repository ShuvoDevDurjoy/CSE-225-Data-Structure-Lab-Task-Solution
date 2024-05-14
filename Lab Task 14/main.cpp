#include <iostream> 
#include "pqtype.cpp" 
using namespace std ; 
int main()
{
    PQType<int> queue1(15) ; 
    if(queue1.IsEmpty())
    {
        cout<<"Queue is Empty."<<endl;
    }
    else {
        cout<<"Queue is not Empty."<<endl;
    }
    //4 9 2 7 3 11 17 0 5 1
    queue1.Enqueue(4) ; 
    queue1.Enqueue(9) ; 
    queue1.Enqueue(2) ; 
    queue1.Enqueue(7) ; 
    queue1.Enqueue(3) ; 
    queue1.Enqueue(11) ; 
    queue1.Enqueue(17) ; 
    queue1.Enqueue(0) ; 
    queue1.Enqueue(5) ; 
    queue1.Enqueue(1) ; 

    if(queue1.IsEmpty())
    {
        cout<<"Queue is Empty."<<endl;
    }
    else {
        cout<<"Queue is not Empty."<<endl;
    }

    int x ; 
    queue1.Dequeue(x) ; 
    cout<<x<<endl;
    queue1.Dequeue(x) ; 
    cout<<x<<endl;


    //second problem 
    int bags , total = 0 , minutes ; 
    cout<<"Entere number of bags : " ; 
    cin>>bags ; 
    cout<<"Enter minutes : " ; 
    cin>>minutes ; 
    cout<<"Enter candies : " ; 
    PQType<int> queue2(bags) ; 
    while(!queue2.IsFull())
    {
        cin>>x ; 
        queue2.Enqueue(x) ; 
    }
    for(int i = 0 ; i < minutes ; ++i)
    {
        queue2.Dequeue(x) ; 
        total += x ; 
        queue2.Enqueue(x/2) ; 
    }
    cout<<"Total Candies : "<<total<<endl;
}
