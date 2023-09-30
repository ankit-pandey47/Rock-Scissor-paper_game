#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int computer_choice,user_choice;
    srand(time(0));
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tWELCOME TO THE ROCK,PAPER,SCISSOR GAME"<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t1: ROCK"<<endl;
    cout<<"\t\t\t\t2: PAPER"<<endl;
    cout<<"\t\t\t\t3: SCISSOR"<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tEnter your choice:";
    cin>>user_choice;
     cout<<"-------------------------------------------------------------------------------------------"<<endl;

    if(user_choice<1 || user_choice>3){
        cout<<"Sorry!,You have choosen a wrong number"<<endl;
    
    }

    computer_choice=(rand()%3)+1;
    cout<<"\tComputer choose: ";

    if(computer_choice==1){
        cout<<"Rock";
    }
    else if(computer_choice==2){
        cout<<"Paper";
    }
    else{
        cout<<"Scissor";
    }


    cout<<"\t\t\t\t You choose: ";
    
    if(user_choice==1){
        cout<<"Rock"<<endl;
    }
    else if(user_choice==2){
        cout<<"Paper"<<endl;
    }
    else{
        cout<<"Scissor"<<endl;
    }
    cout<<"-------------------------------------------------------------------------------------------"<<endl;

    if(user_choice==computer_choice){
        cout<<"\t\t\t\t hehehe<> -Game TIE-!";
    }
    else if(user_choice==1 && computer_choice==3 ||
            user_choice==2 && computer_choice==1 ||
            user_choice==3 && computer_choice==2 ){
                cout<<"\t\t\t\t Superb<> -YOU WIN-";
            }
        
        else{
            cout<<"\t\t\t\t Uff You Losses(COMPUTER WINS)";
        }




}
