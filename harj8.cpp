/*
Teht„v„: Harjoitus 8
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 24.9.2013
Kuvaus: Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
j„rjestyksess„ (pienimm„st„ suurimpaan) n„yt”lle
(katso harj. 1 suunnitelma)
a) k„yt„ kokonaislukuja
b) k„yt„ liukulukuja (=reaalilukuja) */

#include <iostream> 
using namespace std; 
#include <cstring>
int main() 
{ 
	int a, b, c; // Harjoitus 8 b:ssä vaihdetaan vain int --> float

	cout<<"Anna luku: "<<endl;
	cin>>a;
	cout<<"Anna toinen luku: "<<endl;
	cin>>b;
	cout<<"Anna kolmas luku: "<<endl;
	cin>>c;

	if (a < b)
		if (a < c)
			if (c < b)
				cout<<"Luvut suuruusj„rjestyksess„ "<<a<<" "<<c<<" "<<b<<endl;
			else
				cout<<"Luvut suuruusj„rjestyksess„ "<<a<<" "<<b<<" "<<c<<endl;
		else
				cout<<"Luvut suuruusj„rjestyksess„ "<<c<<" "<<a<<" "<<b<<endl;
	else
		if (a < c)
			cout<<"Luvut suuruusj„rjestyksess„ "<<b<<" "<<a<<" "<<c<<endl;
		else
			if (c < b)
				cout<<"Luvut suuruusj„rjestyksess„ "<<c<<" "<<b<<" "<<a<<endl;
			else
				cout<<"Luvut suuruusj„rjestyksess„ "<<b<<" "<<c<<" "<<a<<endl;


 return 0; 
}