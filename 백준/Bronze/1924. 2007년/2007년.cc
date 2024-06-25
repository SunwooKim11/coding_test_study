#include<iostream>

using namespace std;

int calDays(int month){
    switch (month)
    {
    case 2: return 28;

    case 4: case 6: case 9: case 11: return 30;
    
    default: return 31;
    }
}

void printDay(int n_of_days){
    int day = n_of_days%7;
    string name;

    switch (day)
    {
    case 0: name = "SUN"; break;
    case 1: name = "MON"; break;
    case 2: name = "TUE"; break;
    case 3: name = "WED"; break;
    case 4: name = "THU"; break;
    case 5: name = "FRI"; break;
    case 6: name = "SAT"; break;
    }

    cout << name;

}

int main(){
    int x, y;
    int days =0;

    cin >> x >> y;

    for(int i=1; i<x; i++) days+= calDays(i);
    days+=y;
    
    printDay(days);


    return 0;
}