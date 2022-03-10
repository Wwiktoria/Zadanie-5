#include <stdio.h>

int main(void) {
  printf("Równanie ma postać ax^2+bx+c\n");
  int a,b,c;
  printf("Wprowadź współczynnik a: ");
  scanf("%d",&a);
  printf("Wprowadź współczynnik b: ");
  scanf("%d",&b);
  printf("Wprowadź współczynnnik c: ");
  scanf("%d",&c);
  int delta;
  delta=pow(b,(2))-4*a*c;
  float pierwiastek;
  pierwiastek=pow(delta,(1/2));
  printf("%f\n",pierwiastek);
  
  if (delta<0){
    float i;
    i=pow((-1),(1/2));
    float d;
    d=pierwiastek*i;
    float x1,x2,x3;
    x1=-b/(2*a);
    x2=-d/(2*a);
    x3=d/(2*a);
    printf("Rozwiązanie to: %.2f  %.2f i\n",x1,x2);
    printf("Rozwiązanie to: %.2f + %.2f i\n",x1,x3);
    
  }
  else if (delta==0){
    float x;
    x=-b/(2*a);
      printf("Rozwiązanie to; %f\n",x);
  }
  else{
    float y,z;
    y=(-b+pierwiastek)/2*a;
    z=(-b-pierwiastek)/2*a;
    printf("Rozwiązania to: x1=%f\n",y);
    printf(&"x2=%f\n",z);
      
  }
  return 0;
}