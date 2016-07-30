/*
	CO222-2016 Lab05
	Author: E13XXX

	TicTacToe game
*/
#include<stdio.h>
#include<stdlib.h>

#define SIZE 3

void scanBoard(int a[SIZE][SIZE]);
void printBoard(int b[SIZE][SIZE]);
int getWinner(int b[SIZE][SIZE]);

int main(){

	int inBoard[SIZE][SIZE];	//declaring an array

	printf("Please enter the board:\n");
	scanBoard(inBoard);	//scanBoard
	printf("Here is the board:\n");
	printBoard(inBoard);	//printBoard

	//printing the result
	if(getWinner(inBoard)==0)	
		printf("Noughts win\n");
	else if(getWinner(inBoard)==1)
		printf("Crosses win\n");
	else
		printf("There are no winners\n");
	
	return 0;
}


//scan function
void scanBoard(int board[SIZE][SIZE]){
	scanf("%d %d %d",&board[0][0],&board[0][1],&board[0][2]);
	scanf("%d %d %d",&board[1][0],&board[1][1],&board[1][2]);
	scanf("%d %d %d",&board[2][0],&board[2][1],&board[2][2]);
	
	int i, j;
	for(i=0; i<=2; i++){
		for(j=0;j<=2;j++){
			if(board[i][j]==0){
			}
			else if(board[i][j]==1){
			}
			else if(board[i][j]==2){
			}
			else{
				printf("Enter valid input.\n");
				exit(1);
			}
		}
	}
		
	
	
	//check if the input is 0 || 1 || 2
	//else give the error message "Enter valid input." and terminate the program
}


//print function
void printBoard(int board[SIZE][SIZE]){
	//printing board
	int k,l;
	for(k=0; k<=2; k++){
		for(l=0; l<=2; l++){
			if(board[k][l]==0){
				printf("O ");
			}
			if(board[k][l]==1){
				printf("X ");
			}
			if(board[k][l]==2){
				printf(". ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
}

	
//find the winner of the game
//assume both two players can't win the game at the same time. It can't happen in a real game
int getWinner(int board[SIZE][SIZE]){
	int winner;
	if((board[0][0]==0 && board[0][1]==0 && board[0][2]==0) || (board[1][0]==0 && board[1][1]==0 && board[1][2]==0) || (board[2][0]==0 && board[2][1]==0 && board[2][2]==0) || (board[0][0]==0 && board[1][0]==0 && board[2][0]==0) || (board[0][1]==0 && board[1][1]==0 && board[2][1]==0) || (board[0][2]==0 && board[1][2]==0 && board[2][2]==0) || (board[0][0]==0 && board[1][1]==0 && board[2][2]==0) || (board[2][0]==0 && board[1][1]==0 && board[2][0]==0)){
		winner=0;}
	
	else if((board[0][0]==1 && board[0][1]==1 && board[0][2]==1) || (board[1][0]==1 && board[1][1]==1 && board[1][2]==1) || (board[2][0]==1 && board[2][1]==1 && board[2][2]==1) || (board[0][0]==1 && board[1][0]==1 && board[2][0]==1) || (board[0][1]==1 && board[1][1]==1 && board[2][1]==1) || (board[0][2]==1 && board[1][2]==1 && board[2][2]==1) || (board[0][0]==1 && board[1][1]==1 && board[2][2]==1) || (board[2][0]==1 && board[1][1]==1 && board[2][0]==1)){
		winner=1;
		
	}
	else{
		winner = 2;
	}
	
	
	//if winner is Noughts, winner = 0
	//if winner is Crosses, winner = 1
	//if there is no winner, winner = 2

	return  winner;
}
