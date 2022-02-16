#include <iostream>
#include <string>
#include "ttt_header.hpp"
#include <vector>

using namespace std;

int main(){

  bool gameState = false;
  int totalMoves = 0;
  string currentBoard;
  char winner;
  currentBoard = initialiseGameBoard(currentBoard);
  
  
  while(!gameState){

    displayBoard(currentBoard);
    

    if(totalMoves > 5){
    winner = outCome(currentBoard);
    if(winner != 'N' && winner !='-'){

        gameState = true;
        if(winner == 'X'){cout << "You have won!\n";}
        if(winner == 'O'){cout << "You have lost!\n";}}}


  if(!gameState){
      currentBoard = playerChoice(currentBoard);
      totalMoves +=1;

         if(totalMoves==9 && !gameState){

            cout<< "The game is a draw!\n";
            displayBoard(currentBoard);
            gameState=true;}
  

  if(totalMoves!=9){
      currentBoard = computerChoice(currentBoard);
      totalMoves +=1;}}


   }

return 0;
}


