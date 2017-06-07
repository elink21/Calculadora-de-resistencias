#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input)
{
	vector<string> ans;
	string sub="";
	int pos=0;
	while(pos<(input.size()))
	{
		if(input[pos]==' ')
		{
			if(sub.size())
			ans.push_back(sub);
			sub="";
			while(input[pos]==' ' && pos<input.size())pos++;
		}
		else 
		{
			sub+=tolower(input[pos]);
			pos++;
		}
	}
	if(sub.size())
	ans.push_back(sub);
	return ans;
}

int main()
{
	double value=0;
	vector<string>colors;  
	string input;
	map <string,int> keys={{"negro",0},{"cafe",1},{"rojo",2},{"naranja",3},
	{"amarillo",4},{"verde",5},{"azul",6},{"violeta",7},{"gris",8},{"blanco",9}};
	cout<<"Ingrese colores separados por espacios: ";
	getline(cin,input);
	colors=split(input);
	if(colors[0]=="negro" or colors.size()!=3)
	{
		cout<<"No valido";
		return false;
	}
	for(int i=0;i<colors.size();i++)
	{
		if(i==0 or i==1)
		{
			value+=keys[colors[i]]*pow(10,colors.size()-(i+1));
		}
		else value=value*pow(10,keys[colors[i]]-1);
	}
	cout<<"\nEl valor de la resistencia es: "<<value<<" Ohms";
	return 1;
}