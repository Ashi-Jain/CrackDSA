//----------------------------------------------------------------------------------------------------------

//Problem statement
//Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.

//1, if the character is an uppercase alphabet (A - Z).
//0, if the character is a lowercase alphabet (a - z).
//-1, if the character is not an alphabet.

//Sample Input: v
//Sample Output: 0

//---------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main() {
	 char character;
    cin>>character;
    if(character=='A' || character=='B'|| character=='C' || character=='D' || 
    character=='E' || character=='F' || character=='G' || character=='H' ||
    character=='I' || character=='J' || character=='K' || character=='L'||
    character=='M' || character=='N' || character=='O' || character=='P' ||
    character=='Q' || character=='R' || character=='S' || character=='T' || 
    character=='U' || character=='V' || character=='W' || character=='X' ||
    character=='Y' || character=='Z'){
        cout<<"1";
    }
    else if(character=='a' || character=='b' || character=='c' || character=='d' || 
    character=='e' || character=='f' || character=='g' || character=='h' ||
    character=='i' || character=='j' || character=='k' || character=='l' ||
    character=='m' || character=='n' || character=='o' || character=='p' ||
    character=='q' || character=='r' || character=='s' || character=='t' || 
    character=='u' || character=='v' || character=='w' || character=='x' ||
    character=='y' || character=='z'){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
	
}
