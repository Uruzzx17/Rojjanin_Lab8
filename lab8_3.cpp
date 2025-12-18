/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int age,hight;
    double Bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> hight;
        if(hight<100){
            character = "Chopper";
        }else if(hight<180){
                character = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> Bounty;
            if(Bounty<=11000e5){
                character = "Sanji";
            }else{
                character = "Zoro";
                }
            }
        
    }
    else if(age<=60){
        cout << "Enter your bounty: ";
        cin >> Bounty;
        if(Bounty<=5000e5){
            character = "Franky";
        } else{
                character = "Jinbe";}
    }
    
    else{
        character ="Brook";
    }
    cout << "Your character = "<<character;
   }