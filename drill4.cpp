#include "std_lib_facilities.h"

int main()
{

double a,b,x=0;

string unit;
double sum=0;
double smallest,largest,db=0;
bool k=true;
vector <double> v;


cout<<"Adj meg egy szamot majd egy mertekegyseget: \n";

while (cin>>a>>unit) {
    		if (unit == "cm"){
            a=a/100;
			sum +=a;
			db++;
			}
		else if (unit == "in"){
            a=(a/100)*2.54;
			sum +=a;
			db++;
			}
		else if (unit == "ft"){
		    a=(a/100)*2.54*12;
			sum +=a;
			db++;
			}
		else if (unit == "m"){
			sum +=a;
			db++;
		}
		else
			cout << "wrong unit\n";
        v.push_back(a);
  if(k){
    smallest = a;
    largest = a;
    k=false;
}else if (a<smallest) {
    cout<<"The smallest so far "<<"\n";
    smallest = a;
}else if (a>largest){
    cout<<"The large so far "<<"\n";
    largest = a;

}
}
cout<<"Largest: "<<largest<<'\n';
cout<<"Smallest: "<<smallest<<'\n';
cout<<"Sum: "<<sum<<'\n';
cout<<"DB: "<<db<<'\n';

sort(v.begin(),v.end());
 for (int i = 0;i<v.size();i++){
   cout<<v[i]<<" ";
 }

return 0;
}
