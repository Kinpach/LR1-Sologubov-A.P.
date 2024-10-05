//Вариант 18 Сологубов

#include <iostream>

int main()
{
  double Ax, Bx, Cx, Ay, By, Cy, Dx, Dy, Ox, Oy, lx, ly, x, c1, c;

  std::cout << "Input x coordinate of A: ";
  std::cin >> Ax;
  std::cout << "Input y coordinate of A: ";
  std::cin >> Ay;
  std::cout << "Input x coordinate of B: ";
  std::cin >> Bx;
  std::cout << "Input y coordinate of B: ";
  std::cin >> By;
  std::cout << "Input x coordinate of C: ";
  std::cin >> Cx;
  std::cout << "Input x coordinate of C: ";
  std::cin >> Cy;

  lx = Cx - Bx, ly = Cy - By;
  x = lx / ly;
  c = Cy - (Cx * x);
  c1 = Ay - (Ax * (-1/x));
  Ox = (c1 - c)/(x+1/x), Oy = x*Ox + c;
  Dx = Ox - (Ax - Ox), Dy = Oy - (Ay - Oy);

  if (lx == 0)
  {
    std::cout << "D = (" << 2*Cx-Ax << "; " << ")" << std::endl;
  }
  else
  {
    std::cout << "D = (" << Dx << "; " << Dy << ")" << std::endl;
  };
};
