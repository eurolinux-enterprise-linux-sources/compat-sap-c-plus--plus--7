/* { dg-do compile } */

int a, b, c;
long *d;
void fn1()
{
  for (; 0 < a;)
    a++;
}
void fn3()
{
  for (; c; c++)
    d[c] = 0;
}
void fn2()
{
  if (b)
    fn3();
  fn1();
}
