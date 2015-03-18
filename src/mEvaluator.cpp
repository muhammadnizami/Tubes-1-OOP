//g++ mEvaluator.cpp token/converter.cpp history.cpp token/Arab.cpp token/Logika.cpp token/Romawi.cpp token/Operator.cpp token/Token.cpp token/mesintoken.cpp katakr/mesinkar.cpp katakr/mesinkata.cpp Evaluator.cpp FileManager.cpp

#include "Evaluator.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

//!tes kelas main
int main(){
	Evaluator E;
	/*std::string cmd;
	cout<<"Ini untuk debug saja, masukkan perintah yang benar"<<endl;
	cout<<"Postfix Evaluator. expr:"<<endl<<"> ";
	getline(cin,cmd);
	cout<<E.ComputeExprPostfix(cmd)<<endl;
	cout<<"Ini untuk debug saja, masukkan perintah yang benar"<<endl;
	cout<<"Prefix Evaluator. expr:"<<endl<<"> ";
	getline(cin,cmd);
	cout<<E.ComputeExprPrefix(cmd)<<endl;
	cout<<"Ini untuk debug saja, masukkan perintah yang benar"<<endl;
	cout<<"Infix Evaluator. expr:"<<endl<<"> ";
	getline(cin,cmd);
	cout<<E.ComputeExprInfix(cmd)<<endl;*/
	while (true){
		std::string cmd;
		cout<<"\n> ";
		getline(cin,cmd);
		cout << E.DoCmd(cmd);
	}
}
