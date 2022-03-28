//Khushi Mordani
//File handling assignment 
//5.Student details
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream input;
    string id;
    string name;
    string branch;
    string location;
    int choice;
    string temp;
    string res;


    input.open("Students.txt", ios::app|ios::in);
    cout<<"1- Add new student"<<endl<<"2- Find student using ID"<<endl<<"Enter your choice:";
    cin>>choice;
    cout<<endl;

    try{
        if(choice==1){
            cout<<"Enter Id: ";
            cin>>id;

            cout<<"Enter name: ";
            cin>>name;

            cout<<"Enter branch: ";
            cin>>branch;

            cout<<"Enter location: ";
            cin>>location;

            string Sdata = id+" "+name+" "+branch+" "+location;
            cout<<"Entered Data: "<<Sdata<<endl;
            input<<id+" "+name+" "+branch+" "+location<<endl;
        }
        else if(choice==2){
            int flag=0;
            string ID;
            cout<<"Enter Id: ";
            cin>>ID;
            try{
                while (!input.eof()){
                    input>>temp;
                    if(temp == ID){
                        flag = 1;
                        getline(input,res);
                    }
                }
                if(flag==1)
                    cout<<"\nStudent Data :"<<res<<endl;
                else
                    throw id;
            }
             catch(int a){
                cout<< "No student found"<<endl;
            }
        }
        else{
            throw choice;
        }
    }
    catch(int x){
        cout<<"Invalid choice...!!"<<endl;
    }
    return 0;
}
