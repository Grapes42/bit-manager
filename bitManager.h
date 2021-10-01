int getInt(unsigned int num, int pos)
{
	for (; pos > 0; pos--)
	{
		num = num >> 1;
	}

    return num & 0x01;
}