
void fun4() {
  int a = 20;
  int b = 30;
  int i = 0;
  for (i=0; i<30; i++) {
    for (i=0; i<30; i++) {
      if (i>a) {
        b += i;
      } else {
        b -= i;
      }
    }
    if (i>a) {
      b += i;
    } else {
      b -= i;
    }
  }
}

void fun5() {
  int x = 0;
  fun1();
}

void fun6() {
  int a = 0;
  int i = 0;
  int s = 0;
  for (i=0; i<30; i++) {
    for (i=0; i<30; i++) {

      for (a=0; a<i; a++) {
        s += 1
      }
    }
    for (a=0; a<i; a++) {
      s += 1
    }
  }
}
