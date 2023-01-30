#include<iostream>


int main(){
	std::cout<<"Kac sayi girilecek?"<<std::endl;
	int a;
	std::cin>>a;
	int max=0;
	int b[a];
	for(int i=0;i<a;i++)
	{
		std::cout<<i+1<<". sayiyi giriniz";
		std::cin>>b[i];
		}
	for(int i=0;i<a;i++)
	{
		std::cout<<i+1<<". sayi = "<<b[i]<<std::endl;
	}
	for(int i=0;i<a;i++)
	{
		if(max<b[i])
		max=b[i];
	}
	std::cout<<"En buyuk sayiniz = "<<max;
	return 0;
}


