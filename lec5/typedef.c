typedef unsigned int uint;

typedef int (*cmp_fn)(int, int);

typedef struct {
    void * data;
    uint size;
    int vec_type;
} vector;

typedef char * string;

int less(int a, int b)
{
    if (a == b) return 0;
    return a < b ? a : b;
}

int main()
{
    cmp_fn compare = less;
    compare(10, 1);

    uint size = 0;
    vector vector;
    string hi = "hello";

    return 0;
}