#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: " << endl;
    getline(cin, fileName);
    ifstream fi;
    fi.open(fileName);
    if(fi.is_open()){
        cout<<"Work with file";
         string str;
        while(!fi.eof()){
            str="";
            getline(fi,str);
            cout<<str<<endl;
        }
    } else{
        cout<<"Error open file!";
    }
    fi.close();
}
