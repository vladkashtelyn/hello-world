#include <iostream>
#include <cmath>
int if1(int a)
{
	if (a > 0)
	{
		return a + 1;
	}
	return a;
}

int if2(int a)
{
	if (a > 0)
	{
		return a + 1;
	}
	return a - 2;
}

int if3(int a)
{
	if (a > 0)
	{
		return a + 1;
	}
	if (a < 0)
	{
		return a - 2;
	}
	return a = 10;
}
int if4(int a, int b, int c)
{
	int result = 0;
	if (a > 0)
	{
		result += 1;
	}
	if (b > 0)
	{
		result += 1;
	}
	if (c > 0)
	{
		result += 1;
	}
	return result;
}
void if5(int a, int b, int c)
{
	int result_plus = 0;
	int result_minus = 0;
	if (a > 0)
	{
		result_plus += 1;
	}
	else
	{
		result_minus += 1;
	}
	if (b > 0)
	{
		result_plus += 1;
	}
	else
	{
		result_minus += 1;
	}
	if (c > 0)
	{
		result_plus += 1;
	}
	else
	{
		result_minus += 1;
	}
	std::cout << result_plus << std::endl;
	std::cout << result_minus;
}
void if6(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}
int if7(int a, int b)
{
	if (a < b)
	{
		return 1;
	}
	if (b < a)
	{
		return 2;
	}
}

void if8(int a, int b)
{
	if (a > b)
	{
		std::cout << a << " " << b;
	}
	else
	{
		std::cout << b << " " << a;
	}
}
void if9(int a, int b)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
		std::cout << a << " " << b;
	}
	else
	{
		std::cout << a << " " << b;
	}
}

void if10(int a, int b)
{
	if (a != b)
	{
		int plus1 = a + b;
		std::cout << plus1 << " " << plus1 << std::endl;
	}
	if (a == b)
	{
		a = 0;
		b = 0;
		std::cout << a << " " << b << std::endl;
	}
}
int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}
void if11(int a, int b)
{
	if (a == b)
	{
		a = 0;
		b = 0;
	}
	else
	{
		a = max(a, b);
		b = max(a, b);
	}
	std::cout << a << " " << b << std::endl;
}

int min(int a, int b) {
	if (a < b)
	{
		return a;
	}
	return b;
}
int if12(int a, int b, int c)
{
	return min(min(a, b), c);
}
int if13(int a, int b, int c)
{
	if (a < c && b < c)
	{
		return min(max(a, b), c);
	}
	if (a < b && c < b)
	{
		return min(max(a, c), b);
	}
	if (c < a && b < a)
	{
		return min(max(b, c), a);
	}
}
void if14(int a, int b, int c)
{
	std::cout << min(min(a, b), c) << std::endl;
	std::cout << max(max(a, b), c);
}
void sumMaxAndMax/*if15*/(int a, int b, int c)
{
	int maximal = max(max(a, b), c);
	int average = min(max(a, b), c);
	std::cout << maximal + average << std::endl;
}
void if16(double a, double b, double c)
{
	if (a > b && a > c)
	{
		if (b > c)
		{
			std::cout << a * 2 << " " << b * 2 << " " << c * 2;
		}
	}
	else
	{
		std::cout << -a << " " << -b << " " << -c;
	}
}
void if17(double a, double b, double c)
{
	if (a > b && a > c)
	{
		if (b > c)
		{
			std::cout << a * 2 << " " << b * 2 << " " << c * 2;
		}
	}
	else if (c > a && c > b)
	{
		if (a < b)
		{
			std::cout << a * 2 << " " << b * 2 << " " << c * 2;
		}
	}
	else
	{
		std::cout << -a << " " << -b << " " << -c;
	}
}

int if18(int a, int b, int c)
{
	if (a != b && c == b)
	{
		return 1;
	}
	if (b != a && a == c)
	{
		return 2;
	}
	if (c != a && a == b)
	{
		return 3;
	}
}
int if19(int a, int b, int c, int d)
{
	if (a == b && b == c && d != a)
	{
		return 4;
	}
	if (a == d && d == c && b != a)
	{
		return 3;
	}
	if (a == b && b == d && c != a)
	{
		return 2;
	}
	if (d == b && b == c && a != b)
	{
		return 1;
	}
}
void if20(int a, int b, int c)
{
	if (std::abs(b - a) > std::abs(c - a))
	{
		std::cout << c << " " << std::abs(c - a);
	}
	if (std::abs(b - a) < std::abs(c - a))
	{
		std::cout << b << " " << std::abs(c - a);
	}
}
int if21(int x, int y)
{
	if (x == 0 && y == 0)
	{
		return 0;
	}
	if (x != 0 && y == 0)
	{
		return 1;
	}
	if (y != 0 && x == 0)
	{
		return 2;
	}
	if (x != 0 && y != 0)
		return 4;
}
int if22(int x, int y)
{
	if (x > 0 && y > 0)
	{
		return 1;
	}
	if (x < 0 && y > 0)
	{
		return 2;
	}
	if (x < 0 && y < 0)
	{
		return 3;
	}
	if (x > 0 && y < 0)
	{
		return 4;
	}
}
int if24(int x)
{
	if (x > 0)
	{
		return 2 * sin(x);
	}
	else
	{
		return 6 - x;
	}
}
int if25(int x)
{
	if (x < -2 && x>2)
	{
		return 2 * x;
	}
	else
	{
		return 6 - x;
	}
}
int if26(int x)
{
	if (x <= 0) {
		return -x;
	}
	if (x > 0 && x < 2)
	{
		return std::pow(x, 2);
	}
	else {
		return 4;
	}
}
int if27(int x)
{
	if (x < 0)
	{
		return 0;
	}
	if (((x % 2 == 0) <= x) && (x % 2 != 1) < x)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void if28(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0 && x % 400 != 0)) {
		std::cout << "Visocosnii god" << std::endl;
	}
	else {
		std::cout << "Nevisocsnii god" << std::endl;
	}
}
void if29(int a)
{
	if (a % 2 == 0) {
		std::cout << "Chetnoe ";
	}
	if (a % 2 != 0) {
		std::cout << "Nechetnoe ";
	}
	if (a < 0) {
		std::cout << "Otriz";
	}
	if (a > 0) {
		std::cout << "Polozh";
	}
	if (a == 0) {
		std::cout << "Nylevoe";
	}
}
void if30(int a)
{
	if (a > 9 && a < 100 && a % 2 == 0)
	{
		std::cout << "Even double_count";
	}
	if (a > 9 && a < 100 && a % 2 != 0)
	{
		std::cout << "not_Even double_count";
	}
	if (a > 99 && a < 1000 && a % 2 != 0)
	{
		std::cout << "Not_even tripl_count";
	}
	if (a > 99 && a < 1000 && a % 2 == 0)
	{
		std::cout << "even tripl_count";
	}
}


void z1_a(int x, int y, int z)
{
	std::cout << min((x, y), z) + max(x, y);
}
void z2_a(int x, int y, int z)
{
	std::cout << max((x, y), z) + min(x, y);
}
void z3_a(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4;
}
void z4_a(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4;
}
void z5_a(int x1, int x2, int x3, int x4)
{
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 <= x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4;
}
void z6_a(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 < x4)
	{
		int swap2 = x3;
		x3 = x4;
		x4 = swap2;
	}
	std::cout << x1 << " " << x2 << " " << x3 << " " << x4;
}
void z7_a(int x, int y, int z)
{
	if (x > y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y > z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x > y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z;
}
void z8_a(int x, int y, int z)
{
	if (x <= y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y <= z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x <= y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z;
}
void z9_a(int x1, int y1, int x2, int y2)
{
	std::cout << max(((x1, y1), x2), y2);
}
void z10_a(int x1, int y1, int x2, int y2)
{
	std::cout << min(((x1, y1), x2), y2);
}
void z11_a(int x1, int y1, int x2, int y2)
{
	std::cout << min(((x1, y1), x2), y2) + min((x1, x2), y1);
}
void z12_a(int x1, int y1, int x2, int y2)
{
	std::cout << max(((x1, y1), x2), y2) + max((x1, x2), y1);
}


void z1_b(int x, int y, int z)
{
	if (x <= y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y <= z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x <= y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z;
}
void z2_b(int x, int y, int z)
{
	if (x > y)
	{
		int swap1 = x;
		x = y;
		y = swap1;
	}
	if (y > z)
	{
		int swap2 = y;
		y = z;
		z = swap2;
	}
	if (x > y)
	{
		int swap3 = x;
		x = y;
		y = swap3;
	}
	std::cout << x << " " << y << " " << z;
}
void z3_b(int x1, int x2, int x3, int x4)
{
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 > x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 > x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 > x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z4_b(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 < x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z5_b(int x1, int x2, int x3, int x4)
{
	if (x2 > x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 <= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z6_b(int x1, int x2, int x3, int x4)
{
	if (x2 < x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 >= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 >= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z7_b(int x1, int x2, int x3, int x4)
{
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 <= x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	if (x2 <= x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 <= x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z8_b(int x1, int x2, int x3, int x4)
{
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x1 > x2)
	{
		int swap3 = x1;
		x1 = x2;
		x2 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z9_b(int x1, int x2, int x3, int x4)
{
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x1 < x2)
	{
		int swap1 = x1;
		x1 = x2;
		x2 = swap1;
	}
	if (x3 > x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z10_b(int x1, int x2, int x3, int x4)
{
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x2 < x3)
	{
		int swap2 = x2;
		x2 = x3;
		x3 = swap2;
	}
	if (x3 < x4)
	{
		int swap1 = x3;
		x3 = x4;
		x4 = swap1;
	}
	if (x1 > x2)
	{
		int swap3 = x1;
		x1 = x2;
		x2 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z11_b(int x1, int x2, int x3, int x4)
{
	if (x2 > x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 <= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 <= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
void z12_b(int x1, int x2, int x3, int x4)
{
	if (x2 < x3)
	{
		int swap1 = x2;
		x2 = x3;
		x3 = swap1;
	}
	if (x1 >= x2)
	{
		int swap2 = x1;
		x1 = x2;
		x2 = swap2;
	}
	if (x3 >= x4)
	{
		int swap3 = x3;
		x3 = x4;
		x4 = swap3;
	}
	std::cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4;
}
int main()
{
	//std::cout << if1(3);
	//std::cout << if2(0);
	//std::cout << if3(0);
	//std::cout << if4(2, 4, -3);
	//if5(3, 2, -6);
	//if6(3, 2);
	//if7(2, 6);
	//if8(2, 5);
	//if9(4, 6);
	//if10(5, 5);
	//if11(2, 4);
	//std::cout<<if12(3,6,4);
	//std::cout<<if13(6, 8, 10);
	//if14(4, 2, 6);
	//if15(1,2,3);
	//if16(1,2,3);
	//if17(1,2,3);
	//if18(1,2,3);
	// if19(4, 4, 4, 1);
   // if20(5, 7, 10);
   // if21(20, 22);
	 // if22(20, -35);
// if24(5);
// if25(5);
	// if26(10);
	//if27(5);
  //if28(251);
	// if29(15);
   // if30(20);

	//z1_a(3, 5, 2);
	//z2_a(2, 6, 4);
	//z3_a(3, 2, 5, 4);
	//z4_a(3, 2, 5, 4);
	//z5_a(3, 2, 5, 4);
	//z6_a(3, 2, 5, 4);
	//z7_a(2, 5, 3);
	//z8_a(4, 2, 7);
	//z9_a(4, 2, 7, 3);
	//z10_a(4, 2, 7, 2);
	//z11_a(2, 5, 2, 6);
	//z12_a(2, 5, 2, 6);
	
	//z1_b(9, 5, 7);
	//z2_b(3,6,2);
	//z3_b(2, 5, 2, 4);
	//z4_b(4, 2, 7, 1);
	//z5_b(1,4,4,1);
	//z6_b(2, 6, 8, 3);
	//z7_b(2, 6, 6, 2);
	//z8_b(9, 8, 2, 7);
	//z9_b(5, 2, 8, 1);
	//z10_b(3, 2, 7, 4);
	//z11_b(4, 2, 4, 1);
	//z12_b(4, 2, 7, 1);
	return 0;
}