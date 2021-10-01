int getInt(unsigned int num, int pos)
{
	num = num >> pos;

    return num & 0x01;
}