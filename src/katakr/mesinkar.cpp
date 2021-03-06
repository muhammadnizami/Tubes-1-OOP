/*
NAMA/NIM : 135135061/Lucky Cahyadi Kurniawan
FILE     : mesinkar.h
TANGGAL  : 5 Maret 2014
*/
#include "mesinkar.h"
#include <string>
#include <assert.h>

mesinkar::mesinkar(){
	std::string L = "default";
	std::string& LT=L;
	SetIdxChar(0);
	SetCC('#');
	SetEnd(false);
	SetPitaKarakter(LT);
}
mesinkar::mesinkar(const std::string& _pitakar):PitaKarakter(_pitakar){
	assert(!_pitakar.empty());
	SetIdxChar(0);
	SetCC('#');
	SetEnd(false);
}
mesinkar::mesinkar (const mesinkar& m){
	CC = m.CC;
	End = m.End;
	std::string ST =m.PitaKarakter; 
	PitaKarakter=ST;
	idxChar=m.idxChar;
}
mesinkar& mesinkar::operator=(const mesinkar& m){
	CC = m.CC;
	End = m.End;
	std::string ST =m.PitaKarakter; 
	PitaKarakter=ST;
	idxChar=m.idxChar;
	return *this;
}
mesinkar::~mesinkar(){
}
//Getter
char mesinkar::GetCC() const{
   return CC;
}
bool mesinkar::GetEnd() const{
   return End;
}
const std::string& mesinkar::GetPitaKarakter() const{
	return PitaKarakter;
}
int mesinkar::GetIdxChar() const{
	return idxChar;
}
//Setter
void mesinkar::SetCC(char CT){
   	CC=CT;
}
void mesinkar::SetEnd(bool ET){
   	End=ET;
}
void mesinkar::SetPitaKarakter(const std::string& ST){
	assert(!ST.empty());
	std::string STemp=ST;
	PitaKarakter=STemp;
}
void mesinkar::SetIdxChar(int i){
	idxChar=i;
}
//Fungsi
void mesinkar::START(){
	SetIdxChar(0);
	SetCC(GetPitaKarakter().at(GetIdxChar()));
	SetEnd(false);
}
void mesinkar::ADV(){
	assert(!EOP());
	int temp = GetIdxChar();
	temp++;
	SetIdxChar(temp);
	if(temp<GetPitaKarakter().length())
		SetCC(GetPitaKarakter().at(GetIdxChar()));
	else{
		SetCC('\0');
		SetEnd(true);
	}
}
bool mesinkar::EOP() const{
	return (GetEnd()==true);
}
