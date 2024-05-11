#include <iostream> 
#include<ctime>
using namespace std; 
  
int main() 
{ 
    srand(time(0));
    cout<< " \n****************** HEY! ****************** \n I am Pearl and you're playing  -Race-With-Me- \nWhat should I call you?";
    string name;
    cin>> name;
    cout<< "Nice to meet you "<< name<< "!"<< endl;
    cout<< "Instructions: \n You are racing with me so you have to press ENTER key everytime your chance comes till you reach the finish line.\n GOOD LUCK!"<< endl;
    
    int tracklen= 25;
    int playerpos= 0;
    int pearlpos=0;

    cout<< "Tracklength is 25 units."<<endl;
    // Toss to know who will play first
        cout<< "Choose a number between 0 and 1: "<<endl;
        int num,check=0;
        cin >>num;
        if(num!=0 && num!=1){
            cout<<"Please enter 0 or 1 only!"<<endl;
            cin>>num;
        }

        int toss= rand()%2;
        if(toss==num){
            cout<<"You won the toss! You start the race."<<endl;
            check=1;
        }
        else{
            cout<<"Aw, you lost the toss. Pearl will start the race."<< endl;
            check=0;
        }

    while(playerpos <tracklen && pearlpos< tracklen){
        if(check==1)
        {
            //Player's turn
            cout<< "Your turn..."<<endl;
            cin.get(); //The player will press enter

            int playermove= rand()% 3 +1; // it will ensure that player moves between 1 to 3 units at a time
            playerpos+= playermove;
            cout<< "You have moved "<< playermove<<"units."<<endl;
            cout<< "You are now at "<< playerpos<<"units."<<endl;

            if(playerpos>= tracklen){
                cout<< "Congratulations! You have won the race :D"<<endl;
                return 0;
            }

            //Pearl's turn
            cout<< "Pearl's turn..."<<endl;
            int pearlmove= rand()% 3 +1;
            pearlpos+=pearlmove;
            cout<< "Pearl has moved "<< pearlmove<<"units."<<endl;
            cout<< "Pearl is now at "<< pearlpos<<"units."<<endl;
            
            if(pearlpos>= tracklen){
                cout<< "Pearl has won the race! You lose T-T"<<endl;
                return 0;
            }
        }

        else{
            //Pearl's turn
            cout<< "Pearl's turn..."<<endl;
            int pearlmove= rand()% 3 +1;
            pearlpos+=pearlmove;
            cout<< "Pearl has moved "<< pearlmove<<"units."<<endl;
            cout<< "Pearl is now at "<< pearlpos<<"units."<<endl;
            
            if(pearlpos>= tracklen){
                cout<< "Pearl has won the race! You lose T-T"<<endl;
                return 0;
            }

            //Player's turn
            cout<< "Your turn..."<<endl;
            cin.get(); //The player will press enter

            int playermove= rand()% 3 +1; // it will ensure that player moves between 1 to 3 units at a time
            playerpos+= playermove;
            cout<< "You have moved "<< playermove<<"units."<<endl;
            cout<< "You are now at "<< playerpos<<"units."<<endl;

            if(playerpos>= tracklen){
                cout<< "Congratulations! You have won the race :D"<<endl;
                return 0;
            }
        }
    }
    
    return 0;
} 