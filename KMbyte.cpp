//一个数组中有一种数出现K次，其他数都出现了M次，并且规定M>1,K<M,找到出现了K次的数，要求额外空间复杂度O(1)，时间复杂度O(N)
/*#include <stdio.h>
#define n 8

int main()
{
	int arr[8] = { 2,-1,4,2,-1,4,2,4};              //2出现3次，4出现3次，5出现2次
	int byte[32] = { 0 };
	int i, j, K = 2, M = 3, ans = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < 32; j++)
			byte[j] += (arr[i] >> j) & 1;          //把元素中每一个二进制上的1加入到位图中,用位图记录每一种数出现的次数
	for (i = 0; i < 32; i++)
		if (byte[i] % M != 0)                      //注意这里是求对M的余数而不是K
			ans |= (1 << i);
	printf("%d\n", ans);                           //小心这个数就是0的特殊情况

	return 0;
}*/