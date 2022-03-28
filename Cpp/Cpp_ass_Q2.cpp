//Khushi Mordani
//File handling assignment 
//2. Count the number of 'a' in given file
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
            for(int i=0;i<temp.length();i++){
                if(temp[i]=='a'){
                    count++;
                    break;
                }
            } 
        }
    }
    
    cout<<"Number of 'a' in the given file: "<<count<<endl;

    return 0;
}
