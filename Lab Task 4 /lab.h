#ifndef LAB_H_INCLUDED
#define LAB_H_INCLUDED
#include <iostream>
const int MAX_ITEMS = 5;
template <typename ItemType>
class UnsortedType
{
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
    void print();
    private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif
