#include<stdio.h>
#include<math.h>
void sd(int*,int,int);
int main() {
	int numInput[99], n, sum = 0, average = 0;
	printf("Enter count: ");
	scanf_s("%d",&n);
	for (int i = 0;i<n;i++) {
		printf("Enter number %d: ",i);
		scanf_s("%d", &numInput[i]);
		sum += numInput[i];
	}
		average = sum / n;
		sd(numInput, n, average);
	return 0;
}
void sd(int* x,int n,int a) {
	double sumSquare=0;
	double SD;
	for (int i = 0;i<n;i++) {
		sumSquare += pow(x[i] - a,2);
	}
	SD = sqrt(sumSquare / (n - 1)) ;
	printf("%.2lf",SD);
}