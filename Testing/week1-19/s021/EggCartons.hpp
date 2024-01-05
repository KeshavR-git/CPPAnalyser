int XX_MARKER_XX;

class EggCartons
{
public:
    int minCartons(int n)
    {
        if (n%2 != 0 || n < 6)
        {
            return -1;
        }

        int sixCarton = (4 - ((n%8) / 2)) % 4;

        int remainder = n - sixCarton*6;
        if (remainder < 0)
        {
            return -1;
        }
        else
        {
            return sixCarton + (remainder / 8);
        }
    }
};