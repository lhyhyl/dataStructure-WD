///*
//	��������
//			����������һ�����͵ĵݹ������������������һ��һ�ο�������Ĺ��̣����ǻὫ�������Ԫ����Ϊ��ŦԪ�أ����������±꣬low
//			Ϊ��߿�ʼ��high��ĩβԪ�ؿ�ʼ���ȴ�high��ʼѰ�ҵ�һ��С��pivot��Ԫ�أ������Ŵ�low��ʼѰ�ҵ�һ������pivot��Ԫ�أ�ֱ��low==high
//			Ȼ��������Ƿ��ص�pivotpos�����黮��Ϊ�����ӱ����еݹ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int partition(int *arr, int low, int high) {//�ú�������һ�ο������򲢷��ػ�׼Ԫ����������λ��
//	int pivot = arr[low];//��ŦԪ��
//	while (low < high) {
//		while (low < high&&arr[high] >= pivot)--high;//��high�����ҵ�һ��С��pivot��Ԫ��
//		arr[low] = arr[high];//�Ƶ�low���ڵ�λ��
//		while (low < high&&arr[low] <= pivot)++low;//��low�����ҵ�һ������pivot��Ԫ��
//		arr[high] = arr[low];//�Ƶ�high���ڵ�λ��
//	}
//	arr[low] = pivot;
//	return low;//���ش����Ŧ������λ��
//}
//void quickSort(int *arr,int low,int high) {
//	if (low<high) {//�ӱ�Ԫ�ظ�������һ�������п�������
//		int pivotPos = partition(arr,low,high);//��������һ�β���ȡ�����Ŧ������λ�ã����ڻ����ӱ�
//		quickSort(arr,low,pivotPos-1);//���ӱ�
//		quickSort(arr,pivotPos+1,high);//���ӱ�
//	}
//}
//int main() {
//	int arr[] = { 5,3,4,10,6,11,12 };
//	quickSort(arr,0,6);
//	return 0;
//}