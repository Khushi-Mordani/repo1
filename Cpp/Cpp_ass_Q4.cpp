//Khushi Mordani
//File handling assignment 
//4. Count the number of words that ends with 's' in given file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int count=0;
    ifstream input;
    string temp;
    input.open("data.txt");
    if (!input){
        cout<<"file did't open";
    }
    else{
        while(!input.eof()){
            input>>temp;
            int i=temp.length();
            if(temp[i-1]=='S' || temp[i-1]=='s'){
               
                count++;
            }
        }
    }
    cout<<"Number of words that ends with 's' in given file: "<<count<<endl;
    return 0;
}

