#include <iostream>
uint8_t s[9],k,i,f,a[]=" \xff\xf9\xf1\xfe'r\xe9#\x9b%\x14\x1fI\xfd'\xff\xf1\x86\x17";
int main()
{
	for(std::cin>>s;i<4;i++,puts(""))
		for(int j:s)
			for(k=0;j&&k<5;k++)
				f=a[i*5+(j-48)/2]>>(j&1)*4,std::cout<<a[f<<k&8];
}
