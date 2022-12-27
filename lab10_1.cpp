#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double init,rate,ppy;
	cout << "Enter initial loan: ";
	cin>>init;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>ppy;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=1;

	do{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << init;
		double interest=(rate/100.00)*init;
		cout << setw(13) << left << interest;
		double total=init+interest;
		cout << setw(13) << left << total;
		if(total<ppy){
			ppy=total;
		}
		cout << setw(13) << left << ppy;
		cout << setw(13) << left << total-ppy;
		cout << "\n";
		init=total-ppy;
		i++;
	}while(init>0);
	
	
}
