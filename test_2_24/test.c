#include <stdio.h>
//���ֲ��ҷ�����ֱ�Ӳ��Ҹ���Ч�ʡ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�������û��/0���ַ����С�
	int k = 11;
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k> arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û�ҵ�\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 11;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û�ҵ�\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("zhaodaole%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("meizhaodao\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 17;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("zhaodaole%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("meizhaodao\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr);
//		for(i = 0; i < sz; i++)
//		{
//			if (k == arr[i])
//			{
//				printf("�ҵ���%d\n", i);
//				break;
//			}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//	}
//	printf("sum=%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}