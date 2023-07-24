#include <stdio.h>
#include <stdlib.h>

void diziyap(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
		printf("%d. satir ve %d. sutunu giriniz:",i+1,j+1);
		scanf("%d", &ikiBoyutluDizi[i][j]);
		}
	}
}

void diziyaz(int **ikiBoyutluDizi,int satirSayisi,int sutunSayisi){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("%d ",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
	
}
void dizikontrol(int **ikiBoyutluDizi, int satirSayisi, int sutunSayisi){
	int k=0,i,j,a=0;
	if(satirSayisi!=sutunSayisi){
		k=1;
		a=1;
	}
	else{	
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
		if(ikiBoyutluDizi[i][j]!=ikiBoyutluDizi[j][i]){
			a=1;
			break;
		}
	}
}
}
	if(k){
		printf("Girmis oldugunuz matris kare matris degildir. Simetriklik kontrolu yapilamaz.\n");
	}
	if(a){
		printf("Girmis oldugunuz matris simetrik degildir.");
	}
	else{
		printf("Girmis oldugunuz matris simetriktir.");
	}
}
int main(int argc, char *argv[]) {
	int satirSayisi,sutunSayisi;
	int **Matris;
	int i;
	printf("Lutfen satir sayisini giriniz:");
	scanf("%d",&satirSayisi);
	printf("Lutfen sutun sayisini giriniz:");
	scanf("%d",&sutunSayisi);
	Matris=(int**)malloc(sizeof(int*)*satirSayisi);
	for(i=0;i<satirSayisi;i++){
	Matris[i]=(int*)malloc(sizeof(int)*sutunSayisi);
}
	diziyap(Matris,satirSayisi,sutunSayisi);
	printf("Matris:\n");
	diziyaz(Matris,satirSayisi,sutunSayisi);
	dizikontrol(Matris,satirSayisi,sutunSayisi);
	return 0;
}
