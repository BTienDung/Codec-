#include <stdio.h>
#include<math.h>
#define Max 1000
void nhapMang(int a[], int n){
	for(int i=0; i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%4d", a[i]);
	}
}
int demSoLan(int a[], int n, int x){
	int dem = 0;
	for(int i=0;i<n;i++){
		if (a[i] == x){
			dem++;
		} 
	}
	return dem;
}

void sapXep(int a[], int n){
	int tg;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if (a[j] % 2 == 0){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
int soNguyenTo(int n){
	if(n<2){
		return 0;
	} 
	if(n==2){
		return 1;
	}
	if(n>2){
		for(int i=2; i<=ceil(sqrt(n));i++){
			if(n % i ==0){
				return 0;
			}
		}
		return 1;
	}
}

void tangDan(int a[], int n){
	int tg;
	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n;j++){
			if(a[i]>a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void boBaSo(int a[], int n){
	
	for(int i=0; i<n-2; i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1; k<n;k++){
				if(a[i]*a[i] == a[j]*a[j] + a[k]*a[k] ){
					printf("%d%d%d", a[i], a[j], a[k]);
				}
			}
		}
	}
}
int main(){
	int a[Max], n, x;
	//cau a
	printf("Cau a. ");
	printf("Nhap N: ");
	scanf("%d", &n);
	nhapMang(a,n);
	printf("Mang ban vua nhap la: ");
	xuatMang(a,n);
	//cau b
	printf("\n\nCau b. ");
	printf("Nhap so nguyen can dem: ");
	scanf("%d", &x);
	printf("So ban %d ban nhap xuat hien %d lan. ", x, demSoLan(a, n, x));
	//cau c
	printf("\n\nCau c. ");
	printf("Mang truoc khi sap xep la: ");
	xuatMang(a,n);
	printf("\nMang sau khi sap xep la: ");
	sapXep(a,n);
	xuatMang(a,n);
	//cau d
	printf("\n\nCau d. ");
	printf("So nguyen to khac nhau trong day la: ");
	for(int i=0 ; i<n;i++){
		if(soNguyenTo(a[i]) == 1 && a[i]!=a[i+1] ){
			printf("%5d", a[i]);
		}
	}
	//cau e
	printf("\n\nCau e. ");
	tangDan(a,n);
	boBaSo(a,n);
	
	return 0;
}
