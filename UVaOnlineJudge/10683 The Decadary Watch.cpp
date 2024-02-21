#include <iostream>
using namespace std;

int main()
{
	int h, m, s, c, g;
	while(scanf("%2d%2d%2d%2d", &h, &m, &s, &c) != EOF){
		g = h * 3600 + m * 60 + s;
		g *= 100;
		g += c;
		g = (125 * g) / 108;
		printf("%07d\n", g);
	}
    return 0;
}
