#include <stdio.h>
int main(){
	int deposits,interest_rate,month;
	float interest=0;
	printf("Nhap so tien gui: ");
	scanf("%d",&deposits);
	printf("\nNhap lai suat: ");
	scanf("%d",&interest_rate);
	printf("\nNhap so thang: ");
	scanf("%d",&month);
	printf("Thang	Tien gui	Tien lai");
	for(int i=1;i<=month;i++){
    deposits+=interest;
		interest=deposits*(interest_rate/100.0);
    printf("\n%d	%d		%1f\n",i,deposits,interest);
	}
}
