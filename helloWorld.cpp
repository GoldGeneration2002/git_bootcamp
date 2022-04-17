//this is random file
#include<iostream>
#include<string>
using namespace std;

class Name{
    string realName;
    public:
        void getData(){
            cout<<"Enter the real name: ";
            cin>>realName;
        }
        void displayName(){
            cout<<"The real entered name is : "<<realName<<endl;
        }

};
int main(){
    Name n1;
    n1.getData();
    n1.displayName();
    return 0;

}