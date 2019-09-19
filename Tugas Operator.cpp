#include <iostream>
using namespace std;
int main() {
	bool benar = true, salah = false;
	cout << " A  B  C     "<<" A or B	 "<<" A or C       "<<"F1 = (A or B) AND (A or C)" <<endl<<endl;															
	cout << " 0  0  0	"<<""<<( salah || salah)<<" 	    "<<( salah || salah) <<"                         "<<((salah || salah) && (salah || salah))  << endl;
	cout << " 0  0  1	"<<""<<( salah || salah)<<" 	    "<<( salah || benar) <<"                         "<<((salah || salah) && (salah || benar))  << endl;
	cout << " 0  1  0	"<<""<<( salah || benar)<<" 	    "<<( salah || salah) <<"                         "<<((salah || benar) && (salah || salah))  << endl;
	cout << " 0  1  1	"<<""<<( salah || benar)<<" 	    "<<( salah || benar) <<"                         "<<((salah || benar) && (salah || benar))  << endl;
	cout << " 1  0  0	"<<""<<( benar || salah)<<" 	    "<<( benar || salah) <<"                         "<<((benar || salah) && (benar || salah))  << endl;
	cout << " 1  0  1	"<<""<<( benar || salah)<<" 	    "<<( benar || benar) <<"                         "<<((benar || salah) && (benar || benar))  << endl;
	cout << " 1  1  0	"<<""<<( benar || benar)<<" 	    "<<( benar || salah) <<"                         "<<((benar || benar) && (benar || salah))  << endl;
	cout << " 1  1  1	"<<""<<( benar || benar)<<" 	    "<<( benar || benar) <<"                         "<<((benar || benar) && (benar || benar))  << endl;
	
	return 0;
	
}
