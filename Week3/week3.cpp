//--------------EXAMPLE 3.1--------------

////#include <iostream>
////#include <conio.h>
////using namespace std;
////
////int fact(int n) {
////	if (n == 0) {
////		return 1;
////	}
////	else {
////		return (n * fact(n - 1));
////	}
////}
////int main() {
////	cout << "Factorial of 5 is: " << fact(5) << endl;
////	return 0;
////}

//--------------EXAMPLE 3.2--------------

//#include <iostream>
//#include <conio.h>
//using namespace std;
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	return 0;
//}

//--------------EXAMPLE 3.3 & EXERCISE 3.1--------------

//#include <iostream>
//#include <iomanip> 
//using namespace std;
//int Power(int X, int N) {
//    return (N == 0 ? 1 : Power(X, N - 1) * X);
//}
//int main() {
//    cout << " N  |  2^N " << endl;  
//    cout << "----|--------" << endl;
//    for (int i = 0; i <= 20; i++) {
//        cout << setw(2) << i << "  | " << setw(6) << Power(2, i) << endl;
//    }
//    return 0;
//}

//--------------EXAMPLE 3.4 & EXERCISE 3.2--------------

//#include <iostream>
//using namespace std;
//int Ackermann(int m, int n) {
//    if (m == 0) { return n + 1;}
//    else if (m > 0 && n == 0) { return Ackermann(m - 1, 1); }
//    else if (m > 0 && n > 0) { return Ackermann(m - 1, Ackermann(m, n - 1)); }
//}
//int main() {
//    cout << "Ackermann value for A(3,4) is: " << Ackermann(3, 4);
//}

//--------------EXERCISE 3.3 (a)--------------

//#include <iostream>
//using namespace std;
//
//void print_Num(int n) {
//    if (n < 0) { return; }
//    cout << n << " ";
//    print_Num(n - 1);
//}
//int main() {
//    int n;
//    cout << "Enter the number you want to print down to 0: ";
//    cin >> n;
//    print_Num(n);
//    cout << endl;
//    return 0;
//}

//--------------EXERCISE 3.3 (b)--------------

//#include <iostream>
//using namespace std;
//
//int binomial_Coeff(int n, int k) {
//    if (k == 0 || k == n) { return 1;}
//    if (k > n || k < 0) { return 0;}
//    return binomial_Coeff(n - 1, k - 1) + binomial_Coeff(n - 1, k);
//}
//int main() {
//    int n, k;
//    cout << "Enter values of n and k to calcuate Binomial Coefficient: ";
//    cin >> n >> k;
//    if (n < 0 || k < 0 || k > n) {
//        cout << "Invalid entry! k should be between 0 and n." << endl;
//    }
//    else { cout << "C(" << n << ", " << k << ") = " << binomial_Coeff(n, k) << endl;}
//    return 0;
//}

//--------------EXERCISE 3.3 (c)--------------

//#include <iostream>
//using namespace std;
//
//bool is_Prime(int n, int i = 2) {
//    if (n <= 1) return false;  // 0 and 1 are NOT prime
//    if (n == 2) return true;   // 2 is the smallest prime number
//    if (n % i == 0) return false; // If n is divisible by i, it's not prime
//    if (i * i > n) return true;  // If no divisors found till sqrt(n), it's prime
//    return is_Prime(n, i + 1); // Check next number
//}
//
//int main() {
//    int n;
//    cout << "Enter a number to chcek is it is a prime number or not: ";
//    cin >> n;
//    if (is_Prime(n)) { cout << n << " is a prime number." << endl; }
//    else { cout << n << " is not a prime number." << endl; }
//    return 0;
//}