class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans;
        
        double kelvin = celsius +273.15;
        double fahrenheit = (1.8 * celsius) + 32;
        ans.push_back(kelvin);
        ans.push_back(fahrenheit);
        
        return ans;

    }
};