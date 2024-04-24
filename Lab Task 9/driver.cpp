#include <iostream>
#include "lab.cpp"
using namespace std;
int main()
{
    int x = 0 ; 
    QueType<int> queue(5) ;
    if(queue.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;
    queue.Enqueue(5);
    queue.Enqueue(7);
    queue.Enqueue(4);
    queue.Enqueue(2);
    if(queue.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;
    if(queue.IsFull()) cout<<"Queue is full"<<endl;
    else cout<<"Queue is not full"<<endl;
    queue.Enqueue(6) ;
    QueType<int> queue1 ; 
    while(!queue.IsEmpty())
    {
        queue.Dequeue(x) ; 
        cout<<x<<" ";
        queue1.Enqueue(x) ;
    }
    cout<<endl;

    while(!queue1.IsEmpty())
    {
        queue1.Dequeue(x) ; 
        queue.Enqueue(x) ; 
    }
    if(queue.IsFull()) cout<<"Queue is full"<<endl;
    else cout<<"Queue is not full"<<endl;
    try{
        queue.Enqueue(8);
    }catch(FullQueue)
    {
        cout<<"Queue Overflow"<<endl;
    }
    queue.Dequeue(x) ; 
    queue.Dequeue(x) ; 
    while(!queue.IsEmpty())
    {
        queue.Dequeue(x) ; 
        cout<<x<<" ";
        queue1.Enqueue(x) ;
    }
    cout<<endl;

    while(!queue1.IsEmpty())
    {
        queue1.Dequeue(x) ; 
        queue.Enqueue(x) ; 
    }

    queue.Dequeue(x) ; 
    queue.Dequeue(x) ; 
    queue.Dequeue(x) ; 
    if(queue.IsEmpty()) cout<<"Queue is Empty"<<endl;
    else cout<<"Queue is not Empty"<<endl;
    try{
        queue.Dequeue(x) ;
    }catch(EmptyQueue)
    {
        cout<<"Queue Underflow"<<endl;
    }

    /*
        Second Part
    */

    int n ; 
    cout<<"Enter a number : ";
    cin>>n ; 
    QueType<string> strQueue ; 
    strQueue.Enqueue("1") ; 
    string str ; 
    for(int i = 1 ; i <= n ; ++i)
    {
        strQueue.Dequeue(str) ; 
        cout<<str<<endl;
        strQueue.Enqueue(str+'0') ;
        strQueue.Enqueue(str+'1') ;
    }

}
