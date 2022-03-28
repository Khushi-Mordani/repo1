//Khushi Mordani
//File handling assignment 
//1. Count the number of 'the' in given file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    ifstream input;
    string temp;
    input.open("data.txt");
    if (!input)
    {
        cout<<"File could not be opened!";
    }
    else{
        while(!input.eof()){
            input>>temp;
            if(temp=="the"){
                count++;
            }
        }
    }
    
    cout<<"Number of 'the' in the given file: "<<count<<endl;

    return 0;
}
