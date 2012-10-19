
void swap(int *array, int first, int second);
int partition(int* array, int left, int right);


void quickSort(int* array, int left, int right)
{
        if (left >= right) 
                return;
        int index = partition(array, left, right);
        quickSort(array, left, index - 1);
        quickSort(array, index + 1, right);
}

int partition(int* array, int left, int right)
{
        int index = left;
        int pivot = array[index];

		//��pivot�������
        swap(array, index, right);

		//index��¼���������һ����pivot���
		//i��¼λ��index֮���һ����piovtС�Ļ�ȵģ��ҵ�����index����
        for (int i=left; i<right; i++)
        {
                if (array[i] < pivot)    // ����
				{
                        swap(array, index, i);
						index++;
				}
        }

		//����pivot����������һ����pivot��Ľ���
        swap(array, right, index);

        return index;
}

void swap(int *array, int first, int second)
{
	int temp = array[first];
	array[first] = array[second];
	array[second] = temp;
}

