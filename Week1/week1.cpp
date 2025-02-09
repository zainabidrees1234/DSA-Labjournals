// --------------EXAMPLE 1.1--------------

// #include <iostream>
// using namespace std;
// int max1(int X, int Y){
// 	return(X > Y) ? X : Y;
// }
// int max2(int X, int Y, int &Larger) {
// 	Larger = (X > Y) ? X : Y;
// }
// int max3(int X, int Y , int *Larger) {
// 	*Larger = (X > Y) ? X : Y;
// }
// int main() {
// 	int Larger = 10;
// 	int X = 2;
// 	int Y = 3;
// 	max3(X, Y, &Larger);
// 	cout << X << endl << Y << Larger;
// }

// --------------EXAMPLE 1.2--------------

// #include<iostream>
// #include<math.h>
// #include<complex.h>
// using namespace std;
// class Complex {
// private:
// 	float re, im;
// public:
// 	Complex(float r, float i) : re(r), im(i) {}
// 	Complex(float r) : re(r), im(0.0) {}
// 	~Complex() {}
// 	float Real() { return re; }
// 	float Imag() { return im; }
// 	double Magnitude() {
// 		return sqrt(re*re + Imag()*Imag());
// 	}

// 	Complex operator +(Complex b) {
// 		return Complex(re + b.re, im + b.im);
// 	}
// 	Complex operator =(Complex b) {
// 		re = b.re;
// 		im = b.im;
// 		return*this;
// 	}
// };

// int main() {
// 	Complex a(1.0, 1.0);
// 	Complex* b = new Complex(5.0);
// 	Complex c(0, 0);
// 	cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
// 	cout << "b real = " << b->Real() << " b imaginary = " << b->Imag() << endl;
// 	c = a + (*b);
// 	cout << "c real = " <<c.Real() << " c imaginary = " << c.Imag() << endl;
// 	delete b;
// 	return 0;
// }

// ---------------EXERCISE 1.1--------------

// #include<iostream>
// using namespace std;
// class Complex {
// 	int real, imaginary;
// public:
// 	Complex(int r, int i) :real(r), imaginary(i) {}
// 	Complex operator * (Complex c) {
// 		int r = real * c.real - imaginary * c.imaginary;
// 		int i = real * c.imaginary + imaginary * c.real;
// 		return Complex(r, i);
// 	}
// 	~Complex() {}
// 	void print() {
// 		cout << "The product is: (" << real << ", " << imaginary << ")" << endl;
// 	}
// };
// int main() {
// 	Complex c1(12, 13);
// 	Complex c2(14, 15);
// 	Complex c3 = c1 * c2;
// 	c3.print();
// }

// --------------EXAMPLE 1.3--------------

// #include<iostream>
// using namespace std;
// template <class T> T GetMax(T a, T b) {
// 	T result;
// 	result = (a > b) ? a : b;
// 	return result;
// }
// int main() {
// 	int i = 5, j = 6, k;
// 	long l = 10, m = 5, n;
// 	k = GetMax <int>(i, j);
// 	n= GetMax <int>(l , m);
// 	cout << k << endl;
// 	cout << n << endl;
// 	return 0;
// }

// --------------EXAMPLE 1.4--------------

// #include<iostream>
// using namespace std;
// template <class T> class mypair {
// 	T a, b;
// public:
// 	mypair(T first, T second) {
// 		a = first; b = second;
// 	}
// 	T getmax();
// };
// template <class T> T mypair <T>::getmax() {
// 	T retval;
// 	retval = a > b ? a : b;
// 	return retval;
// }
// int main() {
// 	mypair<int> myobject(100, 75);
// 	cout << myobject.getmax();
// 	return 0;
// }

// --------------EXERCISE 1.2--------------

// #include<iostream>
// #include<math.h>
// #include<complex.h>
// using namespace std;
// template <class T> class mypair {
// 	T a, b;
// public:
// 	mypair(T first, T second) {
// 		a = first; b = second;
// 	}
// 	T getmin();
// };
// template <class T> T mypair <T>::getmin() {
// 	T retval;
// 	retval = a < b ? a : b;
// 	return retval;
// }
// int main() {
// 	mypair<int> myobject(100, 75);
// 	cout << myobject.getmin();
// 	return 0;
// }

// --------------EXAMPLE 1.5--------------

// #include<iostream>
// using namespace std;

// template <class T, int N> class mysequence {
// 	T amemblock[N];
// public:
// 	void setmember(int x, T value);
// 	T getmember(int x);
// };
// template <class T, int N> void mysequence<T, N>::setmember(int x,T value) {
// 	memblock[x] = value;
// }
// template <class T, int N> T mysequence<T, N>::getmember(int x) {
// 	return memblock[x];
// }
// int main() {
// 	mysequence <int, 5> myints;
// 	mysequence<double, 5> myfloats;
// 	myints.setmember(0, 100);
// 	myfloats.setmember(3, 3.1416);

// 	cout << myints.getmember(0) << '\n';
// 	cout << myfloats.getmember(3) << '\n';
// 	return 0;
// }

// --------------EXERCISE 1.3--------------

// #include<iostream>
// using namespace std;

// template <class T, int N> class mysequence {
// 	T memblock[N];
// public:
// 	void setmember(int x, T value);
// 	T getmember(int x);
// 	T getmax();
// 	T getmin();
// };
// template <class T, int N> void mysequence<T, N>::setmember(int x, T value) {
// 	memblock[x] = value;
// }
// template <class T, int N> T mysequence<T, N>::getmember(int x) {
// 	return memblock[x];

// }
// template <class T,int N> T mysequence <T,N>::getmin() {
	
// 	T min= memblock[0];
// 	for (int i = 0; i < 5; i++)
// 	{
// 		if (memblock[i] < min) {
// 			min = memblock[i];

// 		}
		
// 	}
// 	return min;
// }

// template <class T, int N> T mysequence <T, N>::getmax() {
// 	T max = memblock[0];
// 	for (int i = 0; i < 5; i++)
// 	{
// 		if (memblock[i] > max) {
// 			max = memblock[i];

// 		}
		
// 	}
// 	return max;
// }
// int main() {
// 	mysequence <int, 5> myints;
// 	mysequence<double, 5> myfloats;

// 	int j = 0;
// 	for (int i = 0; i < 5; i++) {
// 		myints.setmember(i, j);
// 		j++;
// 	}

// 	float k = 1.1;
// 	for (int i = 0; i < 5; i++) {

// 		myfloats.setmember(i, k);
// 		k++;
// 	}
// 	cout << "INT SEQUENCE" << endl;

// 	for (int i = 0; i < 5; i++) {

// 		cout << myints.getmember(i) << " ";
// 	}

// 	cout << "\nFLOAT SEQUENCE" << endl;

// 	for (int i = 0; i < 5; i++) {
		
// 		cout << myfloats.getmember(i) << " ";
// 	}
	
// 	cout <<"\nMinimum of ints = " << myints.getmin() << endl;
// 	cout << "Maximum of ints = " << myints.getmax() << endl;
// 	cout << "Minimum of floats = " << myfloats.getmin() << endl;
// 	cout << "Maximum of floats = " << myfloats.getmax() << endl;
// 	return 0;
// }

// --------------EXAMPLE 1.6--------------

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main() {
// 	ofstream outfile("fout.txt");
// 	ifstream infile("fin.txt");
// 	char ch;
// 	int count = 0;
// 	while (infile.get(ch)) {
// 		outfile << ch;
// 		count++;
// 	}
// 	outfile << "Character count: " << count << endl;
// 	infile.close();
// 	outfile.close();
// 	return 0;
// }

// --------------EXERCISE 1.4--------------

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ifstream inFile("fin.txt");
//     ofstream outFile("fout.txt");

//     char ch;
//     int charCount = 0, wordCount = 0, sentenceCount = 0;

//     while (inFile.get(ch)) {
//         charCount++; 

//         if (ch == ' ' || ch == '\n') {
//             wordCount++;
//         }

//         if (ch == '.' || ch == '!' || ch == '?') {
//             sentenceCount++;
//         }
//     }

//     wordCount++; 

//     outFile << "Character count = " << charCount << endl;
//     outFile << "Word count = " << wordCount << endl;
//     outFile << "Sentence count = " << sentenceCount << endl;

//     inFile.close();
//     outFile.close();

//     return 0;
// }

// --------------EXAMPLE 1.7---------------

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     char name[10];
//     float mt1, mt2, final, avg;

//     ifstream fin;
//     ofstream fout;

//     fin.open("input.dat");
//     fout.open("output.dat");

//     while (!fin.eof()) {
//         fin >> name >> mt1 >> mt2 >> final;
//         avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;
//         fout << name << "\t" << avg << endl;
//     }

//     fin.close();
//     fout.close();

//     return 0;
// }

// --------------EXERCISE 1.5--------------

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// class House {
// public:
//     string owner;
//     string address;
//     int bedrooms;
//     float price;
//     void readData() {
//         cout << "Enter Owner: ";
//         getline(cin, owner);
//         cout << "Enter Address: ";
//         getline(cin, address);
//         cout << "Number of Bedrooms? : ";
//         cin >> bedrooms;
//         cout << "Price: ";
//         cin >> price;
//         cin.ignore(); 
//     }
//     void displayData() const {
//         cout << setw(15) << owner
//              << setw(20) << address
//              << setw(10) << bedrooms
//              << setw(15) << price << endl;
//     }
// };

// int main() {
//     House available[100]; 
//     int count = 0;        
//     char choice;

//     do {
//         cout << "Enter details for house " << count + 1 << ":\n";
//         available[count].readData();
//         count++;

//         cout << "Enter another house? (Y/N): ";
//         cin >> choice;
//         cin.ignore(); 
//     } while (choice == 'Y' || choice == 'y');
//     cout << "\nThe output should look like this:\n";
//     cout << setw(15) << "Owner"
//          << setw(20) << "Address"
//          << setw(10) << "Bedrooms"
//          << setw(15) << "Price" << endl;
//     cout << string(60, '-') << endl; 
//     for (int i = 0; i < count; i++) {
//         available[i].displayData();
//     }

//     return 0;
// }

// --------------EXERCISE 1.6--------------

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     string name;
//     int grades[10];
//     float average;

//     void readData(ifstream &file, int numGrades) {
//         file >> name;
//         int sum = 0;
//         for (int i = 0; i < numGrades; i++) {
//             file >> grades[i];
//             sum += grades[i];
//         }
//         average = sum / (float)numGrades;
//     }
// };

// int main() {
//     ifstream file;
//     string filename;
//     cout << "Enter the filename: ";
//     cin >> filename;
//     file.open(filename);

//     int numStudents, numGrades;
//     file >> numStudents >> numGrades;

//     Student students[100];
//     for (int i = 0; i < numStudents; i++) {
//         students[i].readData(file, numGrades);
//     }

//     cout << "\nName\tGrades\t\tAverage\n";
//     for (int i = 0; i < numStudents; i++) {
//         cout << students[i].name << "\t";
//         for (int j = 0; j < numGrades; j++) {
//             cout << students[i].grades[j] << " ";
//         }
//         cout << "\t" << students[i].average << endl;
//     }

//     float classAverage = 0, highest = students[0].average, lowest = students[0].average;
//     for (int i = 0; i < numStudents; i++) {
//         classAverage += students[i].average;
//         if (students[i].average > highest) highest = students[i].average;
//         if (students[i].average < lowest) lowest = students[i].average;
//     }
//     classAverage /= numStudents;

//     cout << "\nClass Average: " << classAverage;
//     cout << "\nHighest Average: " << highest;
//     cout << "\nLowest Average: " << lowest;

//     cout << "\n\nStudents with Average less than Class Average:\n";
//     for (int i = 0; i < numStudents; i++) {
//         if (students[i].average < classAverage) {
//             cout << students[i].name << endl;
//         }
//     }

//     file.close();
//     return 0;
// }