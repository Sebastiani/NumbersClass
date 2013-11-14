#include<iostream>
#include<vector>
using namespace std;


//I need to implement a hashtable to make a general case, so that toBinary and toHex reduce to toBase(base)

class Number
{
public:
	Number(double num);
	Number();

	void toBase(int base);
	void PrettyPrinter();
	/* data */

private:

	double number;
	int Integer;
	double Fractional;

	vector<int> Integers;
	vector<int> Fractionals;

	void Formatter(num);

};

int main(){
	double number;
	int base;

	cout <<"Enter a Decimal number to convert\n";
	cin >> number;
	cout << "Enter the base of convertion\n"
	cin >> base
	Number num(number);

	num.toBase(base);
	num.PrettyPrinter();
}

Number::Number(double num){

	number = num;
	Formatter(number);
}

Number::Number(){

	//Empty =)
}

void Number::toBase(int base){
	int bn;
	while(Integer >0){

		bn = Integer%base;
		Integers.pushback(bn);
		Integer = (Integer-bn)/base;		
	}

	for(int i =0; Fractional>0 && i<100; i++){

		bn = int(Fractional*base);
		Fractionals.pushback(bn);
		Fractional = Fractional*base -bn;
	}
}


void Number::Formatter(){

		Integer = int(number);
		Fractional = number - int(number);
}

void PrettyPrinter(){
	char dict[] ={'0','1','2','3','4','5','6','7','8','9','A', 'B', 'C','D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X','Y', 'Z'} 
	for(int i=Integers.size()-1; i>=0; i--){
		cout << dict[Integers[i]]
	}

	cout << ".";

	for(int i = 0; i<Fractionals.size(); i++){
		cout<< dict[Fractionals[i]];
	}
	delete[] dict;
}