#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void check (int t){
    srand(time(NULL));
    int comp = rand() % 3 + 1;
    cout << "Computer: ";
    switch (comp) {
        case 1: cout << "paper" << endl;
        break;
        case 2: cout << "scissors" << endl;
        break;
        case 3: cout << "rock" << endl;
        break;
    }
    if(comp == 1 && t == 3) cout << "Computer wins!" << endl;
   else  if(comp == 3 && t == 1) cout << "Player wins!" << endl;
   else if(comp>t) cout << "Computer wins!" << endl;
   else if(comp<t) cout << "Player wins!" << endl;
   else cout << "Draw!" << endl;
    
    
    
}
void game(){
  cout<<"Choose: \n 1 for paper, \n 2 for scissors, \n 3 for rock"<<endl;
  int player;
    cin >> player; 
    cout << "Player: ";
    switch (player) {
        case 1: cout << "paper" << endl;
        break;
        case 2: cout << "scissors" << endl;
        break;
        case 3: cout << "rock" << endl;
        break;
    }
    check(player);  
}
int replay () {
    cout<<"What to play? (1 - yes, 2 - no)" << endl;
    int play;
    cin >> play;
    if(play == 1)
     {game();
     replay();}
    else return 0;
}

int main()
{
    
    cout<<"_____________________"<<endl;
    cout<<"Rock, Paper, Scissors"<<endl;
    cout<<"_____________________"<<endl;
    
      replay();
    
    
    
    return 0;
}
