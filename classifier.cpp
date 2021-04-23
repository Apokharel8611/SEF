#include <stdio.h>

struct classifier
{
	int data;
	
	
	
	void train(void)
	{
		printf("This function is called: %s\n", __func__);
		printf"The first feature is added";
	}



	void predict(void )
	{
		printf("This function is called: %s\n", __func__);
		printf("The second feature is added");
	}


};



int main()
{
	struct classifier  c;

	c.train();
	c.predict();

	return 0;
}