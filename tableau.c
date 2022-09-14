#include<stdio.h>
#include<stdlib.h>
int main(){
	int *t,n,i,j,max,min,imin,s,pos,tmp,val,milieu,fin,deb=0;
	t=malloc(n*sizeof(int));
	printf("entrer le size du tableau");
	scanf("%d",&n);
	fin=n-1;
	
	for(i=0;i<n;i++){
		printf("\nt[%d]:",i);
		scanf("%d",(t+i));
	}
	max=min=*t;
	for(i=1;i<n;i++){
		if(*(t+i)>max){
			max=*(t+i);
		}
		if(*(t+i)<min){
			min=*(t+i);
		}
	}
	printf("le min de ce tableau c'est:%d \nle max de ce tableau c'est :%d",min,max);
	printf("\nentrer le nombre que vous voulez supprimer:");
	scanf("%d",&s);
	
  // methode de recherche liniaire :
	for(i=0;i<n;i++){
		if(*(t+i)==s){
			for(pos=i;pos<n;pos++){
			*(t+pos)=*(t+pos+1);
		}
	}
	}
	printf("\nle tableau aprés suppression:\n");
	for(i=0;i<n-1;i++){
		printf("t[%d]:%d\n",i,*(t+i));
	}
	
	//tri du tableau
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-1;j++){
		if(*(t+i)>*(t+j)){
			tmp=*(t+i);
			*(t+i)=*(t+j);
			*(t+j)=tmp;
			}
		}
	}
	printf("\ntab apres tri:\n");
	for(i=0;i<n-1;i++){
		printf("t[%d]:%d\n",i,*(t+i));	
	}
	printf("\nentrer le nombre que vous voulez savoir sa position:");
	scanf("%d",&val);
	
	// methode de recherche dichotomique :
	while(*(t+milieu) != val && fin>deb){
		printf("inside while, fin = %d \n", fin);
		milieu=(fin+deb)/2;
		if(*(t+milieu)>val)
			fin=milieu-1;
		
		else
			deb=milieu+1;
		
		
	}
	if(*(t+milieu) == val)
		return printf("sa position c'est:%d",milieu);
	
	return -1;
	
}
