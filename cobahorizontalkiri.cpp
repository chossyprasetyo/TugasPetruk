#include <iostream>
#include <cstring>
using namespace std;
int main(){
	
	char fndwrds[15];
	int j,k,l,nf;
	
	char word[15][15] =	{{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n',},
						{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b',},
						{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r',},
						{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i',},
						{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c',},
						{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k',},
						{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a',},
						{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b',},
						{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r',},
						{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c',},
						{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y',},
						{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g',},
						{'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o',},
						{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z',},
						{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a',}};
	cout<<endl<<endl;		
				
				
		
	for (int i=0;i<=14;i++){
		for (j=0;j<=14;j++){
			cout<<" "<<word[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl<<" Masukkan Kata Yang Akan Dicari Pada Program Find Words : ";
		cin>>fndwrds;
		nf=strlen(fndwrds);
		nf=nf-1;
		l=0;
		
		
		//Cari Horizontal Ke Kiri>>>>>
		
		for(j=14;j>=0;j--){
			for(k=14;k>=0;k--){
				if (fndwrds[l]==word[j][k])	{
					l++;
				}else{
					if(word[j][k]==word[j][k+1]){
						
					}else{
						l=0;
					}
				}
				if(l==nf){
					goto selesaifor;
				}
				
										}
										}
		
		//Cari Horizontal Ke Kiri<<<<<
		selesaifor:;
			if(l==nf){
				cout<<" Ada ";
			}else{
				cout<<" Tidak Ada ";
			}
	cout<<l<<"    "<<nf;

	 return 0;
}
