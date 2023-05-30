#include <stdio.h>

#define PRODUCT_NAME_LENGTH 32

struct Product {

	char Name[PRODUCT_NAME_LENGTH];
	double Price;
	int Count;
	double TotalPrice;

};

int main() {

	//붓펜 볼펜
	struct Product product;

	printf("상품의 이름: ");
	gets(product.Name);

	printf("상품의 가격: ");
	scanf("%lf", &product.Price);

	printf("상품의 개수: ");
	scanf("%d", &product.Count);

	product.TotalPrice = product.Price * product.Count;

	printf("상품의 이름: %s\n", product.Name);
	printf("상품의 가격: %lf\n", product.Price);
	printf("상품의 개수: %d\n", product.Count);
	printf("상품의 재고액: %lf", product.TotalPrice);

	return 0;

}