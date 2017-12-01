#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;


struct pieces{
	int ID;
	double price;
	char place_where_bought[100];
	char type_of_piece[100];
} piece;



int main()
{
	
	cout << "Enter the piece ID" << endl;
	cin >> piece.ID ;
	cout << "Enter the price" << endl;
	cin >> piece.price;
	cout << "Place where bought" << endl;
	fflush(stdin);
	gets(piece.place_where_bought);
	cout << "Type of piece" << endl;
	fflush(stdin);
	gets(piece.type_of_piece);

	cout << "Piece ID " << piece.ID  << endl;
	cout << "Piece price " << piece.price << endl;
	cout << "Place where bought " << piece.place_where_bought << endl;
	cout << "Piece type " << piece.type_of_piece << endl;

	ofstream outfile;
	outfile.open("pieces.txt" , ios::app);
	outfile << piece.ID << endl << piece.price << endl << piece.place_where_bought << endl << piece.type_of_piece << endl;

	outfile.close();
	
	system("pause");
	return 0;
}




