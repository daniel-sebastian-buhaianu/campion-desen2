#include <fstream>
using namespace std;
int cmmdc(int a, int b);
int main()
{
	ifstream f("desen2.in");
	long long n, m;
	f >> n >> m;
	f.close();
	long long mc = n*m/cmmdc(n, m);
	long long nr = mc/n * mc/m;
	ofstream g("desen2.out");
	g << mc << '\n' << nr;
	g.close();
	return 0;
}
int cmmdc(int a, int b)
{
	while (b)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
