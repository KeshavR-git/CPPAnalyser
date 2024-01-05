int XX_MARKER_XX;
class EggCartons
{
public:
    int minCartons(int n);
};


//return minimum number of 6 or 8 egg cartons needed to acheive n
//if no answer can be found, return -1
int EggCartons::minCartons(int n)
{
    if(n % 2 == 1 || n < 6 || n > 100) return -1; //no answer
    if(n % 8 == 0) return n / 8; //best case
    if(n == 6) return 1;

    //count 6s added to number until it is divisible by 8

    int remainder = n - 6;
    int cartonCount = 1;

    while (remainder > 5)
    {
        if (remainder % 8 == 0) return cartonCount + remainder / 8;

        remainder -= 6;
        cartonCount++;
        if (remainder == 0) return cartonCount;
    }
    //if no answer found
    return -1;
}
