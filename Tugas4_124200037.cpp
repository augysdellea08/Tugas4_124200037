#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
	int pilih, n, m, k, p ;
	
	cout<<"--------------------------"<<endl;
	cout<<"PERKALIAN DAN PERPANGKATAN"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"1.Perkalian"<<endl;
	cout<<"2.Perpangkatan"<<endl;
	cout<<"Pilih : ";
	cin>>pilih;
	switch (pilih)
	{
		case 1 :
		{
			cout<<"Masukan N : ";
			cin>> n ;
			cout<<"Masukan M : ";
			cin>> m ;
			cout<<"k"<<n<<"*"<<m<<endl ;
			k = 1 ;
			for (int loop=1;loop<=n;loop++){
				k =m*n ;
				if(loop!=n){
					cout<<m<<" + ";
				}
				else {
					cout<<m<<" = "<<k<<endl ;
				}
		}
	}
	break;
	
	case 2 :
	{
	cout<<"Masukan N :";
	cin>>n;
	cout<<"Masukan M :";
	cin>>m ;
	cout<<"Hasil"<<n<<"^"<<m<<endl;
	p = 1;
	for(int loop =1; loop<=m;loop++){
		p *=n;
		if(loop!=m){
			cout<<n<<"*";
		}
		else {
			cout<<n<<" = "<<p<<endl;
		}
	}
	}
}

}
