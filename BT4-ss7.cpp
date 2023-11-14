#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,sum,perfect_number;
	int j=0;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	do{
		printf("********INTEGER NUMBER********\n");
		printf("1. In ra day so co gia tri nho hon hoac bang n và tinh tong .\n");
		printf("2. In ra và dem cac so chia het cho 3 nho hon n .\n");
		printf("3. Kiem tra so nguyen co phai so nguyen to khong .\n");
		printf("4. Kiem tra so nguyen co phai so hoan hao khong .\n");
		printf("5. Tinh tong cac uoc so cua n .\n");
		printf("6. Tinh giai thua n .\n");
		printf("7. In ra so dao nguoc cua n .\n");
		printf("8. In ra cac so nguyen to tu 1-n .\n");
		printf("9. Thoat .\n");
		
		int choice;
			scanf("%d",&choice);
			switch (choice){
				case 1:
				for(int i=0;i<=n;i++){
					printf("%d\t",i);
					sum+=i;
				}
				printf("\n tong = %d\n",sum);
				break;
				case 2:
				for(int i=0; i<n; i++){
					if(i%3==0){
						printf("%d\t",i);
						j++;
					}
				}
					printf("\nCo %d so chia cho 3 ma nho hon %d\n",j,n);
					break;
				case 3:
				if(n<2){
					printf("%d không phai so nguyen to",n);
					}
					for (int i = 2; i < (n - 1); i++){
      				 if (n % i == 0){
      				 	printf("%d khong phai so nguyen t",n);
       			 } 
					else{
					printf("%d la so nguyen to\n",n); 
				}
				}
				break;
				case 4:
				if(n < 0){
					printf("%d khong la so hoan hao \n",n);
				}else{
					for(int i = 1 ; i <=n ; i++){
						if(n % i == 0){
							perfect_number += i;	
						}
					}
					if(perfect_number == n){
						printf("%d la so hoan hao \n",n);
					}else{
						printf("%d khong la so hoan hao \n",n);
					}
				}
			break;
			case 5:
				for(int i = 1 ; i <= n ; i++){
					if(n % i == 0){
						perfect_number += i;
					}
				}
				printf("tong uoc so cua n la %d \n",perfect_number);
			break;
			case 6:
				int factorial;
				for(int i = 1 ; i <= n ; i++){
					factorial = factorial * i;
				}
				printf("giai thua cua %d la %d \n",n,factorial);
			break;
			case 7:
				int reverseNumber,remain;
				while(n != 0){
					remain = n % 10;
					reverseNumber = reverseNumber * 10 + remain;
					n /= 10;
				}
				printf("so dao nguoc cua n la %d \n",reverseNumber);
			break;
			case 8:
				printf("Em khong biet lam");
				break;
			case 9:
				exit(0);
			default: 
				printf("vui long chon tu 1 - 9");
				}	
	}while (1==1);
}

