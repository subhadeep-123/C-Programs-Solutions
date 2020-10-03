#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
int main(){
	float lat1, lat2, lon1, lon2, res, dlon, dlat, a, c;
	int r = 6371;
	printf("Print Lat annd Lon for A");
	scanf("%lf%lf",&lat1,&lon1);
	printf("Print Lat annd Lon for B");
	scanf("%lf%lf",&lat2,&lon2);
	/*lat1 = 53.32055555555556;
	lat2 = 53.31861111111111;
	lon1 = -1.7297222222222221;
	lon2 =  -1.6997222222222223;*/
	
	lat1 = lat1/(180/PI);
	lat2 = lat2/(180/PI);
	lon1 = lon1/(180/PI);
	lon2 = lon2/(180/PI);
	
	dlon = lon2 - lon1;
	dlat = lat2 - lat1;
	a = pow(sin(dlat/2),2) + cos(lat1) * cos(lat2) * pow(sin(dlon/2), 2);
	
	c = 2 * atan2( sqrt(a), sqrt(1-a) );

	res = c * r;
	printf("%f Km",res);
}

