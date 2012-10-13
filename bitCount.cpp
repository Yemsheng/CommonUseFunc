

//统计整形参数二进制位为1的个数


//num声明为unsigned,保证了num右移时,左边空出的位都用0填充，而不是符号位
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


//减法的每一次删除num中最右边值为1的一个二进制位
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