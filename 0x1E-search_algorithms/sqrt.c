#include <stdio.h>

int sq_rt(int n)
{
	int low = 1, mid;
	int high = n, result = 0;

	if (n == 0 || n == 1)
		return (n);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
			return mid;
		else if (mid * mid < n)
		{
			low = mid + 1;
			result = mid;
		}
		else
			high = mid - 1;
	}
	return result;
}

int main(void)
{
	int val, root;

	val = 15;
	root = sq_rt(val);
	printf("%d\n", root);

	return 0;
}
