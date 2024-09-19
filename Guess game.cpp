#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int ranNum,guess,chances=0;
    srand(time(0));
    ranNum=rand()%100+1;
    cout<<"\t\tWelcome to Guess the number Game\n\n";
    do{
        cout<<"Enter your guess between 1 to 100: ";
        cin>>guess;
        chances++;
        if(guess>ranNum){
            cout<<"The guess number is not right: "<<guess<<"\n\n";
        }


        else{
            cout<<"WoW! Your guess is right "<<guess<<" in "<<chances<<" tries\n";
        }
    }
    while(guess!=ranNum);

    return 0;
}
