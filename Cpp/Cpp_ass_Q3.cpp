//Khushi Mordani
//File handling assignment 
//3. Count the number of words that start with 'e' in given file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    ifstream input;
    string temp;
    input.open("data.txt");
    if (!input){
        cout<<"File could not be opened!";
    }
    else{
        while(!input.eof()){
            input>>temp;
            if(temp[0]=='e'){
		
                count++;
            }
        }
    }
    
    cout<<"Number of words that start with 'e' in given file: "<<count<<endl;

    return 0;
}
