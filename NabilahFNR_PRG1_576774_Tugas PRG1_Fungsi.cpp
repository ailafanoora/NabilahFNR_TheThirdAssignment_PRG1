// Nama: Nabilah Fatahillah Noor Ramadhani
// NIM: 26/576774/PA/24102
// Kelas: PRG1

/* Create a recursive function and program for following equation!
f(5) = 5*(4/2)*3*(2/2)*1 (yang dimana sama dengan 5*2*3*1*1 = 30)

f(7) = 7*(6/2)*5*(4/2)*3*(2/2)*1 (yang dimana sama dengan 7*3*5*2*3*1*1 = 630) */

/* Penjelasan
 Dari fungsi rekursif di atas, diketahui bahwa fungsi tersebut mirip seperti fungsi faktorial,
 dimana suatu angka (n) dikalikan dengan angka yang lebih kecil (n-1) dan seterusnya
 sampai n sama dengan 1. Yang membedakan adalah jika n merupakan bilangan genap, maka n dibagi 2 (n/2)
 Maka kita bisa membuat fungsi rekursif dimana:
 - Jika n <= 1, maka mengembalikan 1
 - Jika n bilangan genap (n mod 2 == 0), maka mengembalikan n/2 * f(n-1)
 - Jika n > 1 dan bukan bilangan genap, maka mengembailkan n * f(n-1) 
 n akan selalu memanggil rekursif untuk mengalikan n dengan nilai n yang lebih kecil (n-1) sampai 1,
 dan apabila n bilangan genap, maka n dibagi 2 (n/2), lalu tetap memanggil rekursif untuk mengalikannya
 dengan n yang lebih kecil (n-1)*/

#include <iostream>
using namespace std;

int f(int n) { //buat fungsi f(n), menggunakan int dikarenakan input parameter dan hasil operasi selalu mengembalikan bilangan bulat.
	if (n <= 1){ // Anggap n selalu positif, sehingga jika n kurang dari atau sama dengan 1, maka mengembalikan 1. Ini sebagai base case
		return 1;
	} else if (n % 2 == 0) { // Jika n bilangan genap, maka mengembalikan n/2 yang dikalikan dengan fungsi f(n-1)
		return (n/2)*f(n-1);
	} else { // Selebihnya, mengembalikan n yang dikalikan dengan fungsi f(n-1)
		return n*f(n-1);
	}
}

// Proses ini dilakukan secara rekursif. Memanggil fungsi itu sendiri berulang-ulang sampai akhirnya mencapai base case yaitu n <=1
int main () {
	int n;
	cin >> n; // Input nilai n
	cout << f(n) << endl; // Output nilai fungsi dari input parameter n
}
