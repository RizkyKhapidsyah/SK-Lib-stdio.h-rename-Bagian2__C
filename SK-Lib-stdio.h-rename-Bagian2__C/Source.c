
#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char nama_Lama[] = "rizkyKhapidsyah.txt";
	char nama_Baru[] = "khapidsyahRizky.txt";
	int hasil;

	hasil = rename(nama_Lama, nama_Baru);

	if (!hasil) {
		printf("%s", "Nama file berhasil diganti");
	} else {
		perror("Error");
	}

	_getch();
	return 0;
}
