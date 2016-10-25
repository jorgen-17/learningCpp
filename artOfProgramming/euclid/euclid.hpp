//returns the greatest common divisor between two integers m and n
inline int euclid(unsigned int m, unsigned int n)
{
	int r = m % n;
	return r ? euclid(n, r) : n;
}

inline int euclidEnhanced(unsigned int m, unsigned int n)
{
	unsigned int dividend;
	unsigned int divisor;
	if (m < n)
	{
		dividend = n;
		divisor = m;
	}
	else
	{
		dividend = m;
		divisor = n;
	}
	int r = dividend % divisor;
	return r ? euclid(divisor, r) : divisor;
}