#include <stdio.h>

int main(void)
{
    float input1,input2,output;
    char  arithmetic;
    
    printf("Enter arithmetic p/s/d/m = ");
    scanf("%c*%c",&arithmetic );

    
    if (arithmetic == 'p')
    	{
	
    		printf("input value : ");
    		scanf("%f" ,&input1);
	
			printf("input value : ");
    		scanf("%f" ,&input2); 
    	
        	output = input1 + input2;
    	}
    else if (arithmetic == 's')
    
        {
	
    		printf("input value : ");
    		scanf("%f" ,&input1);
	
			printf("input value : ");
    		scanf("%f" ,&input2); 
    	
        	output = input1 - input2;
    	}
    
    else if (arithmetic == 'd')
    
        {
	
    		printf("input value : ");
    		scanf("%f" ,&input1);
	
			printf("input value : ");
    		scanf("%f" ,&input2); 
    	
        	output = input1 / input2;
    	}
    
    else if (arithmetic == 'm')
    
        {
	
    		printf("input value : ");
    		scanf("%f" ,&input1);
	
			printf("input value : ");
    		scanf("%f" ,&input2); 
    	
        	output = input1 * input2;
    	}
    
    else 
    {
    	printf("Try Again");
	}
    
    

    printf("output = %.2f" ,output);



}
