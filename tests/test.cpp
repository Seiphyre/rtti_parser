class FakeClass
{
  private:
    int   fake_int;
    float fake_int;
}

void do_math(int *x)
{
    *x += 5;
}

int main(void)
{
    int result = -1, val = 4;
    do_math(&val);
    return result;
}