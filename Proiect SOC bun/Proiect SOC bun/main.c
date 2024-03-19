typedef unsigned char byte;


extern byte add_func(byte a, byte b);
extern byte factorial_func(byte n);

void main() {
  
  byte result_1 = add_func(5, 3);
  byte result_2 = factorial_func(5);
  
  while (1);
}
