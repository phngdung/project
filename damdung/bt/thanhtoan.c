#include<stdlib.h>
#include <stdio.h>
#include<btree.h>
#include<string.h>
#define MAX 255
typedef struct {
	char *mo_ta;
	int tong;
} KhoanThanhToan;
typedef struct {
  char *dat;
  unsigned int len;
} Bytes;
KhoanThanhToan *deserialize(char *buff){
	int i,j,h=0;
	KhoanThanhToan* a = (KhoanThanhToan*)malloc(sizeof(KhoanThanhToan));
	a->mo_ta = (char*)malloc(sizeof(char)*1000);
	char b[100];
	for(i=1,j=0; i< strlen(buff) ;i++,j++)
	{
		if(buff[i]>64 &&buff[i]<91)
		a->mo_ta[j]=(unsigned char)buff[i];
		if(buff[i]>47 &&buff[i]<58)
			{
				b[h]=(unsigned char)buff[i];
				h++;
			}
	}
	int l = atoi(b);
	a->tong = l;
	return a;
}

int main(){
	btinit();
	int size;
	int sum =0; 
	BTA* ktt = btopn("/home/phuongdung/damdung/lib/test.bt",0,0);
	if(ktt == NULL){
		printf("Loi khong the mo file.\n");
		return -1;
	}
	char khoa[MAX];
	char giatri[MAX];
	btpos(ktt,ZSTART);
	while((btseln(ktt,khoa,giatri,MAX,&size) == 0))
	{
		sum+= deserialize(giatri)->tong;
	}
	btcls(ktt);
	printf("%d\n",sum);
}