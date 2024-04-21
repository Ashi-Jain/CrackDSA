//------------------------------------------------------------------------------------------------------------
/*Problem statement
Programming languages have some conditional / decision-making statements that execute when some 
specific condition is fulfilled.

If-else is one of the ways to implement them.

You are given two numbers 'a' and 'b'. Compare the numbers and print the relation.
Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, 
or equal to ‘b’ respectively.

Example :
Input: ‘a’ = 5 and ‘b’ = 3
Output: greater
*/

//------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here
	if(a<b){
		return "smaller";
	}
	else if(a>b){
		return "greater";
	}
	else{
		return "equal";
	}
}


int main(){
    int a = 5, b = 6;
    cout<<"Result: "<<compareIfElse(a,b);
    return 0;
}