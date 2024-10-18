#include<iostream>
#include <vector>

using namespace std;

int main()
{
    int myNum[3] = {1,2,3};
    string cars[4];
    string cars[4] = {"mazda", "bmw", "volvo", "Ena"};
    cars[5] = "supra";
    cout<<cars[0];

    cout<< sizeof(cars);
    string length = sizeof(cars)/sizeof(cars[0]);
    cout<<length<<endl;


    for(int i=0; i<5; i++)
    {
        cout<<cars[i]<<endl;
        cout<<i<<"->"<<cars[i]<<endl;
    }

    for(int i=0; i<length; i++)
    {
        cout<<cars[i]<<endl;
    }

    for(string car:cars)
    {
        cout<<car<<endl;
    }

    for(int i:cars)
    {
        cout<<i<<endl;
    }




    string letters[2][4];
    string letters[2][4]={{"A","B","c","D"},{"E","F","G","H"}};
    for(int o=0; i<2; i++)
    {
        for(j=0; j<4;j++)
        {
            cout<<letters[i][j]<<endl;
        }
    }
    string letters[2][2][2]={{{"a","b"},{"c","d"}},{{"e","f"},{"g","h"}};
    for(int i=0; i<2; i++)
    {
        for(j=0; j<2;j++)
        {
            for(k=0; k<2; k++)
            {
                cout<<letters[i][j][k]<<endl;
            }
        }
    }
    int value[2][3][2]={
                        {
                            {1,2},
                            {3,4},
                            {5,6}
                        },
                        {
                            {7,8},
                            {9,10},
                            {11,12}
                        }
                        };

    int numbers[5];
    for(int i=0; i<5; i++)
    {
        cin>>numbers[i];
    }

    vector<int> numbers = {1,2,3,4,5};
    vector<string> cars = {"mazda", "bmw", "volvo", "Ena"};
    cars.push_back("supre");
    cars.at(1)="rolls";
    car.pop_back("volvo");

    for(string car:cars)
    {
        cout<<car<<endl;
    }
    vector<int> numbers(2,3);
    vector<int> numbers={3,3};

}
