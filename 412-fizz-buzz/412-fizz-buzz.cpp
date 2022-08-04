class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        string FiBu, Fizz, Buzz, number;
        FiBu = "FizzBuzz";
        Fizz = "Fizz";
        Buzz = "Buzz";
        for(int i = 1; i <= n; i++){
            number = to_string(i);
            if(i % 3 == 0 and i % 5 == 0){
                answer.push_back(FiBu);
            } else if(i % 3 == 0){
                answer.push_back(Fizz);
            } else if(i % 5 == 0){
                answer.push_back(Buzz);
            } else{
                answer.push_back(number);
            }
        }
    return answer; 
    }
};