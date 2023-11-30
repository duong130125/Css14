#include<stdio.h>
#include<string.h>
void HoanDoi(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp; 
} 
int main(){
	int x, y; 
    printf("Nhap vao gia tri X mong muon:");
	scanf("%d",&x); 
	printf("Nhap vao gia tri Y mong muon:");
	scanf("%d",&y); 
	printf("Gia tri truoc khi hoan doi x = %d, y = %d\n",x, y);
	HoanDoi(&x, &y); 
	printf("Gia tri sau khi hoan doi x = %d, y = %d\n",x, y); 
	return 0; 
} 
