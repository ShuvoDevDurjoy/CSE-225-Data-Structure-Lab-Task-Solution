#include <iostream> 
#include "lab.cpp" 
using namespace std;
int ind  ; 
void create(int *nums , int *&nums2 ,int left , int right)
{
    if(left<=right)
    {
        int mid = (left+right)/2 ; 
        nums2[ind++] = nums[mid] ; 
        create(nums,nums2,left,mid-1) ; 
        create(nums,nums2,mid+1,right) ; 
    }
}
int main()
{
    TreeType<int> tree ; 
    if(tree.IsEmpty()){
        cout<<"Tree is Empty."<<endl;
    }
    else{
        cout<<"Tree is not Empty."<<endl;
    }
    tree.InsertItem(4) ; 
    tree.InsertItem(9) ; 
    tree.InsertItem(2) ; 
    tree.InsertItem(7) ; 
    tree.InsertItem(3) ; 
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0) ; 
    tree.InsertItem(5) ; 
    tree.InsertItem(1) ; 
    if(tree.IsEmpty()){
        cout<<"Tree is Empty."<<endl;
    }
    else{
        cout<<"Tree is not Empty."<<endl;
    }
    cout<<"Size is : "<<tree.LengthIs()<<endl;
    int item = 9; 
    bool found = false ; 
    tree.RetrieveItem(item,found) ; 
    if(found){
        cout<<item<<" is found."<<endl;
    }
    else{
        cout<<item<<" is not found."<<endl;
    }
    item = 13 ; 
    tree.RetrieveItem(item,found) ; 
    if(found){
        cout<<item<<" is found."<<endl;
    }
    else{
        cout<<item<<" is not found."<<endl;
    }
    cout<<"Here in in order traversal : " ; 
    tree.ResetTree(IN_ORDER) ; 
    found = false ; 
    while(!found)
    {
        tree.GetNextItem(item,IN_ORDER,found) ; 
        cout<<item<<" "; 
    }
    cout<<endl;
    tree.ResetTree(IN_ORDER) ; 
    cout<<"Here in pre-order traversal : " ; 
    tree.ResetTree(PRE_ORDER) ; 
    found = false ; 
    while(!found)
    {
        tree.GetNextItem(item,PRE_ORDER,found) ; 
        cout<<item<<" "; 
    }
    cout<<endl;
    tree.ResetTree(PRE_ORDER) ; 
    cout<<"Here in post-order traversal : " ; 
    tree.ResetTree(POST_ORDER) ; 
    found = false ; 
    while(!found)
    {
        tree.GetNextItem(item,POST_ORDER,found) ; 
        cout<<item<<" "; 
    }
    cout<<endl;
    tree.ResetTree(POST_ORDER) ; 
    tree.MakeEmpty(); 

    int arr[] = {0,1,2,3,4,5,7,9,11,17} ; 
    int *arr1 = new int[10] ; 
    create(arr,arr1,0,9) ; 
    for(int i = 0 ; i < 10 ; ++i)
    {
        cout<<arr1[i]<<endl;
    }

}
