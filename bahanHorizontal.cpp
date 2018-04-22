// fungsi Horizontal Kanan dan Horizontal Kiri <<<
 +				l=0;
 +			for(j=15;j>=0;j--){
 +			for(k=15;k>=0;k--){
 +				if (fndwrds[l]==word[j][k])	{
 +					l++;
 +				}else{
 +					if(word[j][k]==word[j][k+1]){
 +						
 +					}else{
 +						l=0;
 +					}
 +				}
 +				if(l+1==nf){
 +					goto selesaifor;
 +				}
