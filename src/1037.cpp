#include <iostream>

struct Price
{
    long long gallon;
    long long sickle;
    long long knut;
};

int main()
{
    int g2s = 17, s2k = 29;

    Price P, A, R;

    long r;

    scanf("%lld.%lld.%lld %lld.%lld.%lld", &P.gallon, &P.sickle, &P.knut, &A.gallon, &A.sickle, &A.knut);

    r = A.gallon * g2s * s2k + A.sickle * s2k + A.knut - (P.gallon * g2s * s2k + P.sickle * s2k + P.knut);

    if (r < 0)
    {
        std::cout << "-";
        r = r * (-1);
    }

    R.knut = r % s2k;
    R.sickle = r / s2k % g2s;
    R.gallon = r / s2k / g2s;

    printf("%lld.%lld.%lld", R.gallon, R.sickle, R.knut);
}