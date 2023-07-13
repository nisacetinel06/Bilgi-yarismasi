#include <stdio.h>
#include <string.h>

void hosgeldinizFonksiyonu(){
	printf("Bilgi yarismamiza hosgeldiniz.Lutfen asagidaki kurallari okuyunuz.\n"
	"*Yarismamiz puan sistemlidir.\n*Lutfen kullanici adini doðru giriniz kayitli degilseniz üye olun.");
}
int secimFonksiyonu(){
	int secim;
	printf("Lutfen asagidaki seceneklerden birini seciniz\n[1]-Giris yap\n[2]-Kayit ol\n");
	scanf("%d",&secim);
	return secim;
}
int girisYapFonksiyonu(char isim[200],char sifre[200]){
	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol=false;
	while (kontrol==false){
	printf("Lutfen adinizi girin: ");
	scanf("%s",&isimVeri);
	printf("Lutfen sifrenizi girin: ");
	scanf("%s",&sifreVeri);
	if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0)
	{
		printf("Sisteme hosgeldiniz.\n");
		kontrol=true;
	}
	else
	{
		printf("Hatali giris.\n");
	}
}
}
int kayitOlFonksiyonu(){
	char isim[200];
	char sifre[200];
	printf("Lutfen bir isim giriniz: ");
	scanf("%s",&isim);
	printf("Lutfen sifreyi giriniz: ");
	scanf("%s",&sifre);
	printf("Basarili bir sekilde kayit oldunuz.\n***Giris ekranina yonlendiriliyorsunuz.***\n");
	girisYapFonksiyonu(isim,sifre);
}
int bilgiYarismasi(){
	int can=3;
	char cevap[2];
	int puan=0;
	printf("Yarisma basladi!\n");
	printf("Puaniniz:%d\n",puan);
	while(can!=0){
	
	if (puan==0){
		printf("[SORU 1]Asagidakilerden hangisi Turkiyenin baskentidir?\na-)Antakya\nb-)Antalya\nc-)Ankara\n");
		scanf("%s",&cevap);
		if (strcmp(cevap,"c")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap c sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
		
	}
	if(puan==10){
		printf("Manti asagida verilen hangi sehire aittir?\na-)Urfa\nb-)Malatya\nc-)Kayseri\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"c")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap c sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
	}
		if(puan==20){
		printf("Asagidakilerden hangisi ana renktir?\na-)mavi\nb-)Mor\nc-)Yesil\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"a")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap a sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
	}
		if(puan==30){
		printf("Cumhurbaskaný kaç yilda bir secilir?\na-)1 yilda\nb-)5 yilda\nc-)10 yilda\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"b")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap b sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
	}
	if(puan==40){
		printf("Pusulada ( N ) harfi hangi yonu ifade eder?\na-)Kuzey\nb-)Dogu\nc-)Bati\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"a")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap a sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
	}
	if(puan==50){
		printf(" Türkiye’nin en yüksek daðý hangisidir?\na-)Amonos Dagi\nb-)Agri Dagi\nc-)Toros Dagi\n");
		scanf("%s",&cevap);
		if(strcmp(cevap,"b")==0)
		{
			printf("\nTebrikler dogru cevap!\n");
			puan+=10;
			printf("Puaniniz:%d",puan);
		}
		else
		{
			printf("\nHatali cevap.Dogru cevap b sikkidir.\n");
			can=can-1;
			printf("\nKalan caniniz:%d\n",can);
			printf("Puaniniz:%d",puan);
		}
	}
}
	return puan;
}
int yarismaSon(int puan){
	printf("\nYarismaniz sona ermistir.\nGuncel skorunuz:%d",puan);
	
}

int main(){
    char isim[200]="Nisa";
    char sifre[200]="1126";
	hosgeldinizFonksiyonu();
	int secim=secimFonksiyonu();
	if(secim==1)
	{
		girisYapFonksiyonu(isim,sifre);
	}
	else if(secim==2)
	{
		kayitOlFonksiyonu();
	}
	int skor=bilgiYarismasi();
	yarismaSon(skor);
	
	
	
	
	
	
	return 0;
}
