#include<stdio.h>
int SequentialSearch(int n, int s[], int key);
int SequentialSearch(int n, int s[], int key) {
	int i;
	i = 0;
	while (i < n && s[i] != key)
		i++;
	if (s[i] == key)
		return i;
	else
		return 0;
}
int main() {
	int T[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 10, x = 30;
	printf("%d", SequentialSearch(9,T,x));
	return 0;
}