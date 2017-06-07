#include <bits/stdc++.h>
using namespace std;
int main()
{
	double value=0; 
	string input;
	string extra="";
	map <string,int> keys={{"negro",0},{"cafe",1},{"rojo",2},{"naranja",3},
	{"amarillo",4},{"verde",5},{"azul",6},{"violeta",7},{"gris",8},{"blanco",9}};

	cout<<"Ingrese colores separados por espacios: ";
	getline(cin,input);
	istringstream iss(input);
	vector<string> colors{istream_iterator<string>{iss},istream_iterator <string> {}};
	
	for(int i=0;i<colors.size();i++)
		for(int j=0;j<colors[i].size();j++)
			colors[i][j]=tolower(colors[i][j]);

	if(colors[0]=="negro" or colors.size()!=3)
	{
		cout<<"No valido";
		return false;
	}
	for(int i=0;i<colors.size();i++)
	{
		if(i==0 or i==1)
			value+=keys[colors[i]]*pow(10,colors.size()-(i+1));
		else value=value*pow(10,keys[colors[i]]-1);
	}
	if(value>=1e9)
	{
		value/=1e9;
		extra="Giga";
	}
	else if (value>=1e6)
	{
		value/=1e6;
		extra="Mega";
	}
	else if (value>=1e3)
	{
		value/=1e3;
		extra="Kilo";
	}

	cout<<"El valor de la resistencia es: "<<value<<" "<<extra<<" ohms";
	return 0;
}