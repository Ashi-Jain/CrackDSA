//------------------------------------------------------------------------------------------------------------
/*Problem statement
Data type refers to the type of value a variable has and the way the computer interprets it.

Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte

You’re given a data type. Print its size in bytes.*/

//------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	if(type=="Integer"){
		return sizeof(int);
	}
	else if(type=="Long"){
		return sizeof(long);
	}
	else if(type=="Float"){
		return sizeof(float);
	}
	else if(type=="Double"){
		return sizeof(type);
	}
	else if(type=="Character"){
		return sizeof(char);
	}
	return -1;
}

int main(){
    string type = "Integer";
    cout<<"Size of "<<type<<" is "<<dataTypes(type)<< " bytes "<<endl;
    return 0;
}
