
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

		//把pivot放在最后
        swap(array, index, right);

		//index记录从左边数第一个比pivot大的
		//i记录位于index之后第一个比piovt小的或等的，找到就与index交换
        for (int i=left; i<right; i++)
        {
                if (array[i] < pivot)    // 升序
				{
                        swap(array, index, i);
						index++;
				}
        }

		//最后把pivot与左边数起第一个比pivot大的交换
        swap(array, right, index);

        return index;
}

void swap(int *array, int first, int second)
{
	int temp = array[first];
	array[first] = array[second];
	array[second] = temp;
}

