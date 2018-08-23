#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * 原地删除数组中重复的元素
 */
int removeDuplicates(int* nums, int numsSize) {

}


/**
 * 字符串转数字
 */
int myAtoi(char *str)
{
	int i = strlen(str);
	int j = 0;
	int res = 0;
	int flag=1;
	while (j<i)
	{
		if (*(str+j)>='a'&&*(str+j)<='z')
		{
			break;
		}
		if (*(str + j) <= ' ')
		{
			j++;
			continue;
		}
		if (*(str + j)!='-'|| *(str + j) != '+')
		{
			res = res * 10 + (*(str + j) - '0');
		}
		if (*(str + j) == '-')
		{
			flag = 0;
			j++;
			continue;
		}
		if (*(str + j) == '+')
		{
			flag = 1;
			j++;
			continue;
		}
		j++;
		
	}
	//printf("%d\n", res);
	if (flag==0)
	{
		return -res;
	}
	return res;
}

/**
 * 最长回文字符串
 */
char* longestPalindrome(char* s) {
	int len = strlen(s);
	int i = 0,j=len-1;
	int k = i;
	char *p = NULL;
	p = (char *)malloc(strlen(s)+1);
	memset(p, 0, strlen(p));
	while (i<j)
	{
		if (*(s+i)==*(s+j))
		{
			*(p + i) = *(s + i);
			*(p + j) = *(s + j);
		}
		i++, j--;
	}
	printf("%s\n", p);
}

/**
 * 两个有序数组的中位数
 */
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
	int *tmp = (int *)malloc(sizeof(int)*(nums1Size+nums2Size));
	for (int i=0;i<nums1Size;i++)
	{
		*(tmp + i) = *(nums1 + i);
	}

	int k = 0;
	for (int i=nums1Size;i<nums1Size+nums2Size;i++)
	{
		*(tmp + i) = *(nums2 + k);
		k++;
	}
	for (int i=0;i<nums1Size + nums2Size; i++)
	{
		printf("%d ", *(tmp + i));
	}
	//printf("%d\n", sizeof(nums1));

	int tmplen = sizeof(tmp) / sizeof(int);

	free(tmp);
}


/**
 * 反转数
 */
int res = 0;
int reverse(int x) 
{
	int tmp = x;
	int i = tmp / 10;
	int j = tmp % 10;
	//printf("%d\n", j);
	
	res = res * 10 + j;
	if (i!=0)
	{
		reverse(i);
	}
	return res;
}

int main()
{
	//int res=reverse(120);
	//printf("%d\n", res);
	//int a[] = {2,3};
	//int alen = sizeof(a) / sizeof(int);
	////printf("alen=%d\n", alen);
	//
	//int b[] = { 4,5 };
	//int blen = sizeof(b) / sizeof(int);

	////printf("blen=%d\n", blen);
	//double c= findMedianSortedArrays(a, alen, b, blen);


	//char *s = "cbbd";
	//longestPalindrome(s);
	int a=myAtoi("  411rwq2");
	printf("%d\n", a);
	return 0;
}