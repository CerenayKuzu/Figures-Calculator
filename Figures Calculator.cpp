#include <iostream>

using namespace std;
int main(int argc, char** argv) {
int a;
int b;
int c;
int d;
float pi=3.14;
float r;
float h;
float ba;
float ss;
float ts;
float s;
Menu:
cout<<"Select a shape 1-Circle 2-Triangle 3-Square"<<endl;
cin>>a;

switch(a)
{
case 1:
cout<<"Do you want to know 1-Area or 2-Perimeter?"<<endl;
cin>>b;
switch(b){
	case 1:
		cout<<"Provide the radius"<<endl;
		cin>>r;
		cout<<"Area of your circle = "<<pi*r*r<<endl;
		break;
		case 2:
			cout<<"Provide the radius"<<endl;
		cin>>r;
		cout<<"Perimeter of your circle is "<<2*pi*r<<endl;
		break;
}
break;
case 2:
cout<<"Do you want to know 1-Area or 2-Perimeter?"<<endl;
cin>>c;
switch(c){
	case 1:
		cout<<"Provide the height"<<endl;
		cin>>h;
		cout<<"Provide the base"<<endl;
		cin>>ba;
		cout<<"Area of your triangle is "<<0.5*h*ba<<endl<<endl;
		break;
		case 2:
			cout<<"Provide the base"<<endl;
			cin>>ba;
			cout<<"Provide the second side"<<endl;
			cin>>ss;
			cout<<"Provide the third side"<<endl;
			cin>>ts;
			cout<<"Perimeter of your triangle is "<<ba+ss+ts<<endl<<endl;
		break;
}
break;
case 3:
cout<<"Do you want to know 1-Area or 2-Perimeter?"<<endl;
cin>>d;
switch(d){
	case 1:
		cout<<"Provide the side of your square"<<endl;
		cin>>s;
		cout<<"Area of your Square is "<<s*s<<endl;
		break;
		case 2:
		cout<<"Provide the side of your square"<<endl;
		cin>>s;
		cout<<"Perimeter of your Square is "<<4*s<<endl;
		break;
}
break;
}
system ("pause");
system("cls");
goto Menu;
return 0;
}
