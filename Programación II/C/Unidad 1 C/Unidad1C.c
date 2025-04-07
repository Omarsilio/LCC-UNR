#include <stdio.h>
#include <stdlib.h>

//Unidad 1 C
//1.Entrada/Salida

// Ejercicio 1 ¿Cuáles las alida del siguiente programa?
//int main () {
//int a, b, c, d=6, e;
// a = b = 3;
// c = a*b+d;
// e = (c + 5) / 4-3;
// e +=5;
//printf("Los resultados son %d y %d ", c, e);
// return 0;
//}

//Respuesta: devuelve 15 y 7

// Ejercicio 2 ¿Cuál es la salida del siguiente programa?
//int main () {
//  int a, b, c, d=6, e;
//  a = 3; 
//  b = a - d / 3; //b = 1
//  a *= b; // a = a* b = 3
//  c = a + d / a- 3 / a * b; // c = 4
// e = c + 8 / 4-b; //  e = 5
//  e+=5; // e = 10
//  printf("Los resultados son %d y %d ", c, e);
//  return 0;
//}

//Respuesta: c = 4 y e = 10

//Ejercicio 3 Determine la salida del siguiente programa:
//int main () {
// float x, y;
// printf ("Introduzca 2 números:\n"); 
// scanf ("%f%f", &x, &y);  // 1 = x e y = 2 
// printf ("La suma de %f y %f vale %f\n", x, y, x+y);  //La suma de 1.000000 y 2.000000 vale 3.000000
// printf ("La suma de %4f y %4.2f vale %10.3f\n", x, y, x+y); //La suma de 1.000000 y 2.00 vale      3.000
// printf ("La suma de %e y %e vale %e\n", x, y, x+y); //La suma de 1.000000e+00 y 2.000000e+00 vale 3.000000e+00
// return 0;
//}

//2.Selección
//Ejercicio 4
void estado(){
  int t;
  printf("Ingrese la temperatura del agua: ");
  scanf("%d", &t);
  if (t <= 0) {
    printf("El estado del agua es solido");
  }
  else if (t < 100) {
    printf("El estado del agua es liquido");
  }
  else {
    printf("El estado del agua es gaseoso");
  }
}

//Ejercicio 5
// version if secuenciales
void nota_secuen(int n){
  if (n >= 2 && n <= 5){
    printf("Insuficiente");
  }
  if (n == 6){
    printf("Aprobado");
  }
  if (n == 7){
    printf("Bueno");
  }
  if (n == 8){
    printf("Muy bueno");
  }
  if (n == 9){
    printf("Distinguido");
  }
  if (n == 10){
    printf("Sobresalient");
  }
}

//void nota_anidados(int n){
// ver de hacer despues
//}

//Ejercicio 6
//la mierda del switch

//Ejercicio 7
int bisiesto(){
  int year;
  printf("Ingrese un ano: ");
  scanf("%d", &year);
  return year%400 == 0 ||(year%100 != 0 && year%4 == 0);
}

//Ejercicio 8

//3.Bucle while
//Ejercicio 9
void uno_cien(){
  int i = 1;
  while (i < 101){
    printf("%d\n", i);
    i++;
  }
}

//Ejercicio 10
void uno_imp_cien(){
  int i = 1;
  while (i < 101){
    if (i%2 != 0){
      printf("%d\n", i);
    }
    i++;
  }
}

//Ejercicio 11
void n_a_m(){
  int n = 0, m = 0;
  while (n >= m){
  printf("Ingrese los dos numeros: ");
  scanf("%d %d", &n, &m);
  }
  while (n < m+1){
    printf("%d\n", n);
    n++;
  }
}

//Ejercicio 12
void es_primo(){
  int n, i = 2;
  printf("Ingrese un numero: ");
  scanf("%d", &n);

  while (n%i != 0 && i <= n/2){
    i++;
  }
  if (i > n/2 && n != 1){
    printf("%d es primo", n);
  }
  else{
    printf("%d no es primo", n);
  }
}

//Ejercicio 13
double factorial(int n){
  double fact = 1;
  int i = 1;
  while (i <= n){ // mejor en vez de usar un i seria while n > 1: fact *= i; n--; y asi
    fact = fact * i;
    i++;
  }

  return fact;
}

//Ejercicio 14
void hospital(int p){
  int edad, cantingr = 0, cantop = 0, i = 0;
  float ind, edpromin = 0, edprom = 0, edpromop = 0;

  while (i < p){
    i++;
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &edad);
    printf("Ingrese el indice del paciente: ");
    scanf("%f", &ind); 
    edprom += edad;
    if (ind > 0.6 && ind <= 0.9){
      cantingr++;
      edpromin += edad;
    }
    else if (ind > 0.9){
      cantop++;
      edpromop += edad;
    }
    edad = 0;
    ind = 0;
  }
  edpromin = edpromin/cantingr;
  edpromop = edpromop/cantop;
  edprom = edprom/p;

  printf("Edad promedio analizados: %.2f\n", edprom);
  printf("Edad promedio ingresados: %.2f\n", edpromin);
  printf("Edad promedio operados: %.2f", edpromop);
}

//4.Funciones
//Ejercicio 15
int maximo(int n, int m){
  int max;
  if (n < m){
    max = m;
  }
  else{
    max = n;
  }

  return max;
}

int max_4(){
  int n1, n2, n3, n4;
  printf("Ingrese los 4 enteros: ");
  scanf("%d %d  %d  %d", &n1, &n2, &n3, &n4);
  return maximo(maximo(n1,n2),maximo(n3,n4));
}

//Ejercicio 16
int tri(int l1, int l2, int l3){
  if (l1 > l2 && l1 > l3){
    if (l1 < (l2+l3)){
      return 1;
    }
    else{
      return 0;
    }
  }
  else if (l2 > l1 && l2 > l3){
    if (l1 < (l1+l3)){
      return 1;
    }
    else{
      return 0;
    }
  }
  else{
    if (l1 < (l1+l3)){
      return 1;
    }
    else{
      return 0;
    }
  }
}

//Ejercicio 17
int max3(int a, int b, int c){
  if (a > b && a > c){
    return a;
  }
  else if (b > a && b > c){
    return b;
  }
  else{
    return c;
  }
}

int hipotenusa(int a, int b, int c){
  if ((a*a) == (b*b)+(c*c)){
    return 1;
  }
  else{
    return 0;
  }
}

int esrect(int l1, int l2, int l3){
  int max;
  max = max3(l1,l2,l3);
  if (max == l1){
    return hipotenusa(max, l2, l3);
  }
  else if (max == l2){
    return hipotenusa(max, l1, l3);
  }
  else{
    return hipotenusa(max, l1, l2);
  }

}

//Ejercicio 18


//Ejercicio 19
int f (int n){
  if (n == 0){
    return 0;}
  else if (n == 1){
    return 1;}
  else{
    return f(n-1)+f(n-2);}
}








//Ejercicios de repaso
//Ej 4 practica 1
void tempe(){
  int t;
  printf("Ingrese una temperatura: ");
  scanf("%d", &t);
  if(t <= 0){
    printf("El agua está en estado solido\n");
  }
  else if (t <= 100){
    printf("El agua esta en estado liquido\n");
  }
  else{
    printf("El agua esta en estado gaseoso");
  }
}

//Ej 
//if-elses
void notaselse(){
  int n;
  printf("Ingrese una nota: ");
  if(scanf("%d",&n)!=1 || n<2 || n>10){
    printf("Tipo de dato incorrecto");
  }
  else if (n >= 2 && n <=5){
    printf("Insuficiente");
  }
  else if (n==6)
  {
   printf("Aprobado");
  }
  else if (n == 7)
  {
    printf("Bueno");
  }
  else if (n == 8){
    printf("Muy bueno");
  }
  else if ( n == 9){
    printf("dISTINGUIDO");
  }
  else{
    printf("Excelente");
  }
}


//ej 9
void muestro(){
  int i = 0;
  while (i < 100){
  i++;
  printf("%d",i);
  }
}

//ej 10
void impares_1_100(){
  int i = 0;
  while (i < 100){
    i++;
    if (i%2 != 0){
      printf("%d",i);
    }
  }
}

//Ej 11
void de_n_hasta_m(){
  int n,m;
  n = m = 0;
  while (n >= m){
    printf("Ingrese el primer y segundo numero: ");
    scanf("%d %d", &n, &m);
  }
  while(n<m+1){
    printf("%d\n", n);
    n++;
  }
}

//EJ 12

//Ej 13
void factos(){
  int n;
  double factos = 1;
  printf("Ingrese el numero: ");
  scanf("%d", &n);
  while(n>0){
    factos *= n;
    n--;
  }
  printf("%f", factos);
}

//Ej 14
void hospi(){
  int edad, edadt, edadop, edading, cantp, cantop, canting;
  cantop = canting = 0;
  edadt = edading = edadop = 0;
  float ind, prompa, promingr, promop;

  printf("Ingrese la cantidad de pacientes: ");
  scanf("%d", &cantp);

 int n = cantp;

  while (n > 0){
    n--;
    printf("Ingrese la edad del paciente: \n");
    scanf("%d", &edad);
    printf("Ingrese el indice del paciente: \n");
    scanf("%f", &ind);

    edadt += edad;
  
    if (ind > 0.9){
      cantop++;
      edadop += edad;
    }
    else if (ind > 0.6){
      canting++;
      edading += edad;
    }
    edad = 0;
    ind = 0;
  }

  prompa = edadt/cantp;
  printf("El promedio de edad de los pacientes analizdos es de: %f", prompa);

  promingr = edading/canting;
  printf("El promedio de edad de los ingresados es de: %f\n", promingr);

  promop = edadop/cantop;
  printf("El promedio de edad de los operados es de: %f", promop);

}

//Funciones
//Ej 15
int maxin(int n, int m){
  if (n>m) return n;
  else return m;
}

int maximiliano(){
  int n1,n2,n3,n4;
  printf("Ingrese los cuatro enteros: ");
  scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
  return maxin(maxin(n1,n2),maxin(n3,n4));
}

//Ej 19
int fibonacci(int n){
  if (n == 0){
  return 0;}
  else if (n == 1){
    return 1;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

int main(){
  //estado(); 
  //nota_secuen(2);
  //nota_anidados();
  //bisiesto();
  //uno_cien();
  //uno_imp_cien();
  //n_a_m();
  //es_primo();
  //factorial(10);
  //hospital(10);
  //max_4();
  //tri(1,2,3);
  //esrect(7,3,5);
  //f(9);

  // A partir de aca los ejercicios son para repasar:
  //Practica 1 seccion 2 ej 4
  //tempe();
  //notaselse();
  //Seccion 3 ej 9 bucles while
  //muestro();
  //impares_1_100();
  //de_n_hasta_m();
  //factos();
  //hospi();
  //maximiliano();
  int x;
  x = fibonacci(4);
  printf("%d", x);
  return 0;
}
