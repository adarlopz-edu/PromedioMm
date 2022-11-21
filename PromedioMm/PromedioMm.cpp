#include <iostream>

using namespace std;

int main()

{
	int nd, p, s{}, cal[20], ncal{}, M{}, m;

	cout << "Introduce el numero de datos (maximo 20): ";
	cin >> nd;

	if ((nd < 1) || (nd > 20)) {
		cout << "Introduce un valor correcto";
	}
	else {
		do {
			cout << "Introduce un dato: ";
			cin >> cal[ncal];
			s = s + cal[ncal];

			p = s / nd;
			ncal++;
		} while (ncal < nd);

		for (ncal = 0;
			ncal < nd; ncal++) {
			cout << "" << cal[ncal] << "\n";
		}

		cout << "El promedio es: " << p << "\n";

		for (ncal = 0;
			ncal < nd; ncal++) {
			if (M < cal[ncal]) {
				if (cal[ncal] > cal[ncal + 1]) {
					M = cal[ncal];
				}
				if (cal[ncal] < cal[ncal + 1]) {
					M = cal[ncal + 1];
				}
			}
		}

		m = M;
		for (ncal = 0;
			ncal < nd; ncal++)
		{
			if (m > cal[ncal]) {
				if (cal[ncal] < cal[ncal + 1]) {
					m = cal[ncal];
				}
				if (cal[ncal] > cal[ncal + 1]) {
					m = cal[ncal + 1];
				}
			}
		}
		cout << "El dato mayor es: " << M << "\n";
		cout << "El dato menor es: " << m << "\n";
	}
}