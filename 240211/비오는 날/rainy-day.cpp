#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Forecast {
    public:
        string date;
        string week;
        string wether;

        Forecast(string date, string week, string wether) {
            this->date = date;
            this->week = week;
            this->wether = wether;
        }

        Forecast() {}

        bool operator < (Forecast & forecast) {
            return this->date > forecast.date;
        }

};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Forecast* forecasts = new Forecast[n];

    for(int i = 0; i < n; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        forecasts[i] = Forecast(a,b,c);
    }
    
    sort(forecasts, forecasts+n);

    cout << forecasts[0].date << " " << forecasts[0].week << " " << forecasts[0].wether;
    return 0;
}