#include<stdio.h>
int main(){
	int i,j,tmp=0,n,t[n];
	printf("entrer la taille du tableau: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("entrer la case t[%d]: ",i);
		scanf("%d",&t[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		if(t[i]>t[j]){
			tmp=t[j];
			t[j]=t[i];
			t[i]=tmp;
		}
	}
	}


	
	for(i=0;i<n;i++){
		printf(" %d:",t[i]);
	}

}

