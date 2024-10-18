#include<iostream>
#include<list>

using namespace std;

class HashTable{
    int capacity;
    list<int> *table;

public:
    HashTable(int i):
        void insertValue(int key, int value);

};

    void HashTable::insertValue(int key, int value)
    {
        int index = hashFunction(key);
        table[index].push_back(value);
    }

    void HashTable::deleteValue(int key)
    {
        int index = hashFunction(key);
        list<int>::iterator i;
        for(i=table[index].end(); i++)
        {
            if(*i == key)
                break;
        }

        if(i!=table[index].end())
            table[index].erase(i);

    }


int main()
{
    int key[] = {1,2,3,4,5};
    int value[] = {11,22,33,44,55};

}




