
template <typename ItemType>
UnsortedType<ItemType>::UnsortedType()
{
length = 0;
currentPos = -1;
}
template <typename ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
length = 0;
}
template <typename ItemType>
bool UnsortedType<ItemType>::IsFull()
{
return (length == MAX_ITEMS);
}
template <typename ItemType>
int UnsortedType<ItemType>::LengthIs()
{
return length;
}
template <typename ItemType>
void UnsortedType<ItemType>::ResetList()
{
currentPos = -1;
}
template <typename ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
currentPos++;
item = info [currentPos] ;
}
template <typename ItemType>
void
UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool &found)
{
int location = 0;
bool moreToSearch = (location < length);
found = false;
while (moreToSearch && !found)
{
if(item == info[location])
{
found = true;
item = info[location];
}
else
{
location++;
moreToSearch = (location < length);
}
}
}
template <typename ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType
item)
{
info[length] = item;
length++;
}
template <typename ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    bool check = false ; 
    int location = 0 ; 
    while(location < length){
        if(info[location] == item){
            check = true ; 
            break;
        }   
        ++location ; 
    }
    if(check){
        while(location+1 <length)
        {
            info[location] = info[location+1];
            location++;
        }
        --length;
    }
}

template <typename ItemType>
void UnsortedType<ItemType>::print()
{
    for (int i = 0; i < length; i++){
        std::cout<< info[i] <<" ";
    }
    std::cout<<"\n";
}
