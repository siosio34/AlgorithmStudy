1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	int a, b;
	int k = 1;

	cin >> num;
	int *c = new int[num];

	for (int i = 0; i<num; i++)
	{
		cin >> a >> b;

		switch (a % 10)
		{
		case 0:
		case 1:
		case 5:
			b = 1;
			break;
		case 2:
		case 3:
		case 7:
		case 8:
			b %= 4;
			if (b == 0)
				b = 4;
			break;

		case 4:

		case 6:
		case 9:
			b %= 2;
			if (b == 0)
				b = 2;
			break;
		}


		for (int i = 0; i< b; i++)
		{
			k *= a;
		}
		c[i] = k % 10;

		if (k % 10 == 0)
			c[i] = 10;
		else
			c[i] = k % 10;

		k = 1;

	}

	for (int i = 0; i<num; i++)
	{
		cout << c[i] << endl;
	}
	return 0;
}