#include<iostream>
using namespace std;
struct employee{
    int eid;
    char favchar;
    float salary;

};



int main(){
    struct employee aditya;
    aditya.eid=456;
    aditya.favchar='t';
    aditya.salary=23343453;
    cout<<"The employee id is :"<<aditya.eid<<endl;
    cout<<"the favchar is "<<aditya.favchar<<endl;
    cout<<"the salary of aditya is "<<aditya.salary<<endl;


}