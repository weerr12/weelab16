#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &x,int &y,int &z,int &j){
	int i[]={x,y,z,j};
	int l = rand()%4;
	int m = rand()%4;
	
	int n =i[l];
	i[l]=i[m];
	i[m]=n;
	x=i[0];
	y=i[1];
	z=i[2];
	j=i[3];
}