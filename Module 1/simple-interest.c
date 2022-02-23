/*Calculation of Simple Interest*/
/*Author Vishnu Ajit Date: 09/12/2021*/

void main()
{
	int p,n;
	float r,si;
	
	p = 2500;
	n = 3;
	r = 8.5;
	
	/*formula for simple interest*/
	si = p * n * r / 100;
	
	/*All the below methods of comments work too*/
	
	///*formula*/ si = p*n*r / 100;
	//si = p*n*r/100; /*forumla*/
	//si = p*n*r/ /*forumla*/ 100;
	//si = p*n*/*we multiply p by n*/ r/ /*now we divide by 100*/ 100;
	//si = p*n/*we multiply p by n*/ *r/ /*now we divide by 100*/ 100;
	
	
	
	
	
	
	
	printf("Principal is %d, \nRate of Interest is %f, \nNumber of years=%d \nSo, calculated Simple Interest is: %f", p,r,n,si);
	
	

}
