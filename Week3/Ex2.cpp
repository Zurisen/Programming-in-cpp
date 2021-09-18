#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;

int main ()
{
    istringstream iss;
    string input;

    getline(cin, input); // get input until newline
    iss.str(input);
    
    string val;
    
    int it = 0;
    string comm;
    int num[1001] = {}; 
    while(val != "quit"){
        iss >> val;
        if (it%2 == 0){
            comm = val;
        }
        else{
            if (comm == "add"){
                num[stoi(val)]++;
            }
            else if (comm == "del"){
                num[stoi(val)]--;
                if (num[stoi(val)]<0){
                    num[stoi(val)] = 0;
                }
            } 
            else if (comm == "qry"){
                if (num[stoi(val)]>0){
                    cout << "T";
                }
                else{
                    cout << "F";
                }
            }
   
        }

        it++;
            
    }

}

