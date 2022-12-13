#include<iostream>
#include<string>

using namespace std;

string func1(string x){ //กลับคำ 
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){   //พิมใหญ๋ 
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){  //พิมเล็ก 
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}


int main(){

 string input;
 string a;
 string b;
 string c;
 string d;


    cout << "Input text: ";
	cin >> a;
    cout << "Reversed text: " << func1(a) <<"\n";

     b = func1(a);
	 c = func2(a);
     d = func2(b);

    
	if(c == d){

     cout << "Palindrome: " << "Yes";
	} else{
     cout << "Palindrome: " << "No";

	}
    return 0;
}
