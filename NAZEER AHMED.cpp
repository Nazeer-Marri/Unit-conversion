
 #include<stdio.h>
 main()
 {
 	float miles;
 	printf("input distance in miles:");
 	scanf("%f", &miles);
 	printf("value in kilometers is %f",miles*1.6);
 	printf("\n value in feet is %f",miles*5280);
 	printf("\nvalue in inches is %f",miles*5280*12);
 	return 0;
 	
 }
