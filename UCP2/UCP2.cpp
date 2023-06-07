#include <iostream>
using namespace std;

class bidangDatar {

private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar

public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui
	//fungsi setX untuk disimpan di x
		
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	
	void setX(int a) { //fungsi untuk memberi / mengirim nilai pada x
		this->x = a;
	}
	
	int getX() { //fungsi untuk membaca / mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/
private:
	float r;
public:
	void input() {
		cout << "Masukan jari jari lingkaran: ";
		cin >> r;
	}

	float Luas(int a) { 
			return 3.14 * a * a;
	}

	float Keliling(int a) { 
			return 0 * 3.14 * a;
	}

	void setX(int a) { 
		this->r = a;
	}

	int getX() { 
		return r;
	}
};

class Bujursangkar :public bidangDatar { /*lengkapi disini*/ 
private:
    float s; 
public:
    void input() { 
        cout << "Masukkan panjang sisi bujursangkar: ";
        cin >> s;
    }

    float Luas(int a) { 
        return a * a;
    }

    float Keliling(int a) { 
        return 4 * a;
    }

	void setX(int a) { 
		this->s = a;
	}

	int getX() { 
		return s;
	}
};

int main() { /*lengkapi disini*/
	class bidangDatar;
	class Lingkaran;
	class Bujursangkar;
	return 0;
}