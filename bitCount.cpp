

//ͳ�����β���������λΪ1�ĸ���


//num����Ϊunsigned,��֤��num����ʱ,��߿ճ���λ����0��䣬�����Ƿ���λ
int bitCount(unsigned int num)
{
	int count = 0;
	for(; num != 0; num >>= 1)
	{
		if((num & 01) == 1)
		{
			count++;
		}
	}
	
	return count;
}


//������ÿһ��ɾ��num�����ұ�ֵΪ1��һ��������λ
int bitCount2(unsigned int num)
{
	int count = 0;
	while(num != 0)
	{
		count++;
		num = num & (num - 1);
	}
	
	return count;
}