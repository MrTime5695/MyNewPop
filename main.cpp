#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Human {
    public:
      int health;
      string name;
    void setName();
};

void Human::setName(){
  cout << "\nHello What's Your Name?\n:";
  cin >> Human::name;
};
Human player;

string inv[10];
int num = 0;

void listInventory();
void BuyMenu();
void CmdIn();
void Lambda();

int main() {
  Lambda();
  player.setName();
  //starting equipment
  inv[num++] = "kevlar vest";
  inv[num++] = "glock17";
  cout << "Welcome to gun buying simulator!\n";
  CmdIn();
} 

void listInventory(){
  cout << "You have: \n";
  for(int i = 0; i < num; ++i)
    cout << inv[i] << endl;
}

void BuyMenu(){
  int sn = 0; //shop item number
  string SI[30]; //Shop Items
  //adds these items to the shop
  SI[sn++] = "M16";
  SI[sn++] = "AK-47";
  SI[sn++] = "Luger";
  SI[sn++] = "Kar";
  SI[sn++] = "M1-Garand";
  SI[sn++] = "BFG9000";

  cout << "\nWhat would you like to buy?\n";
  for(int i = 0; i < sn; ++i)
    cout << SI[i] << endl;
  char Ubuy[20];
  cout << "> ";
  cin >> Ubuy;
  for(int i = 0; i < 20; ++i)
    if(Ubuy == SI[i]){
      inv[num++] = Ubuy;
      cout << "You got a " << Ubuy << "!\n";
    }
}

void CmdIn(){
    string cmd;
    bool exit = false;
    while(!exit){
        cout << "\nHi " << player.name << " What Do you want to do?\n";
        cout << "inv  | List your inventory.\n";
        cout << "buy  | Buy something from the menu.\n";
        cout << "lmb  | Draws Ascii lambda logo\n";
        cout << "exit | Hault the program.\n: ";
        cin >> cmd;
        cout << "\n=============================\n";
        if(cmd == "inv"){listInventory();}
        else if(cmd == "buy"){BuyMenu();}
        else if(cmd == "exit"){exit = true;}
        else if(cmd == "lmb"){Lambda();}
        else {cout << "\nThats not on the list.\n";}
        cout << "\n=============================\n";
    }
}

void Lambda(){
  cout << "\n         ========           ";
  cout << "\n    ===================     ";
  cout << "\n ====  _____         ====   ";
  cout << "\n===   |___  \\          === ";
  cout << "\n==         \\ \\          ==";
  cout << "\n==         /  \\         == ";
  cout << "\n==        / /\\ \\        ==";
  cout << "\n==       / /  \\ \\       ==";
  cout << "\n==      / /    \\ \\__    ==";
  cout << "\n===    /_/      \\___|  === ";
  cout << "\n ====                ====   ";
  cout << "\n    ==================      ";
  cout << "\n         ========           ";
  cout << endl;
}