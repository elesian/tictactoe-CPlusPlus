//display array
//computer decision
//player decison
//game status

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string initialiseGameBoard(string emptyBoard){

  for(int i = 0; i < 9; i++){

    emptyBoard.push_back('-');
  }

  return emptyBoard;
}

void displayBoard(string currentBoard){

  for(int i = 1; i < 10; i++){
    if (i % 3 == 0){

      cout<< currentBoard[i-1] << "\n";}

    else{ cout << currentBoard[i-1] << "\t";}

  }}

string playerChoice(string currentBoard){

  int playerChoice;
  bool validChoice = false;

  while(validChoice==false){
    cout << "Please enter 1-9: ";
    cin >> playerChoice;
    if(currentBoard[playerChoice-1] == '-'){
    currentBoard[playerChoice-1] = 'X';
    validChoice = true;}
  
  else {cout << "Please enter a correct value!\n";}}
  return currentBoard;
}

string computerChoice(string currentBoard){

  int computerChoice;
  bool validChoice = false;
  srand (time(NULL));

  while(validChoice == false){
      computerChoice = rand() % 8;
          if(currentBoard[computerChoice] == '-'){
            validChoice = true;
          }}

  currentBoard[computerChoice] = 'O';
  return currentBoard;
}

char outCome(string currentBoard){

       //case horizontal

       
        if(currentBoard[0]==currentBoard[1] && currentBoard[1]==currentBoard[2]){
        return currentBoard[0];}

        else if(currentBoard[3]==currentBoard[4] && currentBoard[4]==currentBoard[5]){
        return currentBoard[3];}

        else if(currentBoard[6]==currentBoard[7] && currentBoard[7]==currentBoard[8]){
        return currentBoard[6];}

       //case vertical

        else if(currentBoard[0]==currentBoard[3] && currentBoard[3]==currentBoard[6]){
        return currentBoard[0];}

        else if(currentBoard[1]==currentBoard[4] && currentBoard[4]==currentBoard[7]){
        return currentBoard[1];}

        else if(currentBoard[2]==currentBoard[5] && currentBoard[5]==currentBoard[8]){
        return currentBoard[2];}
        //case diagonal

        else if(currentBoard[0]==currentBoard[4] && currentBoard[4]==currentBoard[8]){
        return currentBoard[0];}

        else if(currentBoard[2]==currentBoard[4] && currentBoard[4]==currentBoard[6]){
        return currentBoard[2];}

        else{ return 'N';}

}



        
        
           


        
   

        

    
