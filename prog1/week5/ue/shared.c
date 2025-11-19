int ggT(int a, int b) {
    if (a == 0) return b;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    return a;
}
