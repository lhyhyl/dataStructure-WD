///*
//	��֪����������������a[l], b[m]��c[n]���������������и���һ��Ԫ�أ��ǵ���ɵ���Ԫ�������С����Ԫ��ľ��붨���ǣ�����a[i]��b[j]��c[k]��һ����Ԫ�飬��ô����Ϊ:
//
//����Distance = max(|a[ I ] �C b[ j ]|, |a[ I ] �C c[ k ]|, |b[ j ] �C c[ k ]|)
//
//���������һ������С��Ԫ�����������㷨��������ʱ�临�Ӷȡ�
//*/
//#include <stdio.h>
//#include <math.h>
//int dis(int a,int b,int c) {//���ؾ���
//	return abs(a - b) + abs(b - c) + abs(a - c);
//}
//int min(int a,int b,int c) {//���ص�ǰ��Сֵ����ʱ���ƶ�����ָ��
//	if (a < b&&a < c) return a;
//	else if(b < c&&b < a) return b;
//	else return c;
//}
//int findMinofTrip(int *s1,int *s2,int *s3,int len1,int len2,int len3) {
//	int i=0, j=0, k = 0;//�����±꣬��������
//	int Max = 1000;//�趨һ�����ֵ���ٶ�Ϊ1000
//	int nowD = 0;
//	while (i<len1&&j<len2&&k<len3) {
//
//	nowD = dis(s1[i],s2[j],s3[k]);
//	if (nowD < Max) Max = nowD;//���и���
//	if (s1[i] == min(s1[i], s2[j], s3[k])) i++;
//	else if (s2[j] == min(s1[i], s2[j], s3[k])) j++;
//	else k++;
//	}
//	return Max;
//}
//int main() {
//	int S1[] = { -1,0,9 };
//	int S2[] = { -25,-10,10,11 };
//	int S3[] = {2,9,17,30,41};
//	int minD = findMinofTrip(S1,S2,S3,3,4,5);
//	return 0;
//}