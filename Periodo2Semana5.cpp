#include <iostream>
using namespace std;

float convertirKilometro(float milla){
	double kilometro=milla*1.60934;
return kilometro;
}

int main(){
double milla;
cout<<"ingrese la cantidad en millas:" <<endl;
cin>>milla;
cout<<"la cantidad en kilometros es:" <<convertirKilometro(milla);
return 0;
}
