+// fungsi Horizontal Kiri dan Vertikal Kebawah +++
 +				l=0;
 +			for(j=0;j<=14;j++){
 +			for(k=0;k<=14;k++){
 +				if (fndwrds[l]==word[k][j])	{
 +					l++;
 +				}else{
 +					if(word[k][j]==word[k-1][j]){
 +						
 +					}else{
 +						l=0;
 +					}
 +				}
 +				if(l+1==nf){
  					goto selesaifor;
  				}
