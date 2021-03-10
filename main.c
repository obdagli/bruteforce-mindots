#include <stdio.h>
#include <stdlib.h>


int *bf(int dizi[],int n){
	/*Minimum kabul edecegimiz bir degisken tanimladik daha sonrasinda gelen array'in elemanlari kontrol edilirken
	karsilastirilan elemanlar daha once atadigimiz minimum degerden kucukse yani daha yakin mesafe bulunduysa
	bunlari mindots isimli diziye atiyoruz. Dongu boyle devam ederken sona ulastiginda, "mindots" isimli array'im icerisinde
	yer alan 2 nokta en yakin iki noktayi temsil etmektedir.*/
		int i,j,mindots[] = {dizi[0],dizi[1]};
		int mindist = abs(dizi[0]-dizi[1]);
		for (i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(abs(dizi[i] - dizi[j]) < mindist){
					mindist = abs(dizi[i] - dizi[j]);
					mindots[0] = dizi[i];
					mindots[1] = dizi[j];
				}
			}
		}
		return mindots;
	}
int main(){
	
	int n,i;
	printf("\tDizinin eleman sayisi giriniz: ");	
	scanf("%d",&n);
	printf("\t--------------------------------\n");
	int dizi[n];
	
	for(i=0;i<n;i++){
		printf("\tArr[%d]:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("\n\tOlusan Dizi: \n");
	printf("\t-----------------\n\t");
	for(i=0;i<n;i++){
		printf("%d-",dizi[i]);
	}	
	int *arr = bf(dizi,n);
	printf("\n\n\tEn yakin dugumler(minDots): \n\t--------------------\n\t%d ve %d",arr[0],arr[1]);
	return 0;
}
