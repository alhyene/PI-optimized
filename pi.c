#include "stdio.h"
int a=10000,b,c=280000,d,e,f[280001],g;
main()
{for(;b-c;)f[b++]=a/5;
for(;d=0,g=c*2;c-=14,printf("%.4d",e+d/a),e=d%a)for(b=c;d+=f[b]*a,
f[b]=d%--g,d/=g--,--b;d*=b);
}

exit;

#include <stdio.h>

int main() {
    int r[2800 + 1];
    int i, k;
    int b, d;
    int c = 0;

    for (i = 0; i < 2800; i++) {
	r[i] = 2000;
    }
    r[i] = 0;

    for (k = 2800; k > 0; k -= 14) {
	d = 0;

	i = k;
	for (;;) {
	    d += r[i] * 10000;
	    b = 2 * i - 1;

	    r[i] = d % b;
	    d /= b;
	    i--;
	    if (i == 0) break;
	    d *= i;
	}
	printf("%.4d", c + d / 10000);
	c = d % 10000;
    }

    return 0;
}
