#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
    int randomNumber;
    int guess;
    srand(time(0));
    cout<<"**************NUMBER GUESSING GAME****************"<<endl;
    cout<<"                  Instructions                   "<<endl;
    cout<<"You have to guess a number between 1 and 50"<<endl;
    randomNumber = (rand()%(50-1))+1;
    cout<<randomNumber<<endl;

    do{
        cout<<"Enter your guess between 1 and 50"<<endl;
        cin>>guess;

        if(guess<randomNumber){
            cout<<"The guess is low"<<endl;
        }

        else if(guess>randomNumber){
            cout<<"The guess is high"<<endl;
        }
        else{
            cout<<"AMAZING! You got a right guess"<<endl;
        }
    }while(guess!=randomNumber);

    return 0;

}