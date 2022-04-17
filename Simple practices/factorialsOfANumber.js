function factorial(n) {
    let i = 1,
        factorial = 1;
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }
    return factorial;
}