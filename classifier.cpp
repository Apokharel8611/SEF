#include <stdio.h>

struct classifier
{
	int data;
	
	
	
	void train(void)
	{
		printf("This function is called: %s\n", __func__);
	}



	void predict(void )
	{
		printf("This function is called: %s\n", __func__);
	}


};



int main()
{
	struct classifier  c;

	c.train();
	c.predict();

	return 0;
}