/*
 * ---------------------------------------------------
 *                ESTRUCTURAS DE DATOS
 * ---------------------------------------------------
 *              Manuel Montenegro Montes
 *              Facultad de Informática
 *         Universidad Complutense de Madrid
 * ---------------------------------------------------
 */

/*
 * Definición de la clase Complejo, junto con las operaciones
 * de suma y multiplicación, expresadas como funciones externas.
 */

#include <iomanip>
#include <iostream>

class Complejo {
public:
  Complejo(double real, double imag) : real(real), imag(imag) {}

  double get_real() const { return real; }
  double get_imag() const { return imag; }

  void display() {
    std::cout << real << std::showpos << imag << std::noshowpos << "i";
  }

private:
  double real, imag;
};

Complejo suma(const Complejo &z1, const Complejo &z2) {
  return {z1.get_real() + z2.get_real(), z1.get_imag() + z2.get_imag()};
}

Complejo multiplica(const Complejo &z1, const Complejo &z2) {
  double z1_real = z1.get_real(), z1_imag = z1.get_imag();
  double z2_real = z2.get_real(), z2_imag = z2.get_imag();
  return {z1_real * z2_real - z1_imag * z2_imag,
          z1_real * z2_imag + z1_imag * z2_real};
}
