

#include <iostream>
void main()
{
	double t, u, k = 4, x = 2e-4, a = 4.1;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t - 1);
	std::cout << "t=" << t  << std::endl;
	std::cout << "u=" << u;

}

