void Test(int num, double a, double b, double c, int real_amount_sl, double real_x1, double real_x2 )
{
        double x1=0, x2=0;
        int amount_sl = SolveSq(a,b,c, &x1, &x2);

        if ((real_amount_sl != amount_sl) || (real_x1 != x1) || (real_x2 !=  x2)){

            printf("\nFailed test %d\n", num);
            printf("input:   a=%lf, b=%lf, c=%lf\n", a,b,c);
            printf("results: amount_ls=%d, x1=%lf, x2=%lf", amount_sl, x1, x2);
            printf("correct: amount_ls=%d, x1=%lf, x2=%lf", real_amount_sl, real_x1, real_x2);

        }
        else
            printf("\nSuccessful test %d", num);

}


void Start_test(){

    Test(1,0.0, 0.0 ,0.0, 7, 0.0, 0.0);
    Test(2,0.0, 1.0, 2.0,1, -2.0, 0.0);
    Test(3,2.0, 0.0 ,3.0, 0, 0.0, 0.0);
    Test(4,23.0, 3.0 ,2.0, 0, 0.0, 0.0);
    Test(5,-1.0, 0.0, 0.0,1, 0.0, 0.0);
    Test(6,11.0, 11.0 ,11.0, 0, 0, 0);
    Test(7,0.1, 0.2, 0.1,1, -1.0, 0.0);
    Test(8,0.22, 0.1 ,0.2, 0, 0, 0);
    Test(9,0.23, 0.2 ,0.12, 0, 0, 0);
    Test(10,11.0, 11.0 ,11.0, 0, 0, 0);
}
