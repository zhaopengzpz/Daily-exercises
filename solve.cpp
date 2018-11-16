#include <stdio.h>
 int solve() {
  int x,y,z;
    for (y=1;y<=100;y++)
   for (z=0;z<12;z++)
       if (10*y-2==12*(y-1)-z)
	        x=10*y-2;
			  return x;
 }
int main()
{ printf("求解结果\n");
 printf("  最多人数:%d\n",solve());
}
