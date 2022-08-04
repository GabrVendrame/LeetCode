class Solution {
public:
    int romanToInt(string roman) {
        int i = 0, integer = 0;
        while(i < roman.size()){
            if(roman[i] == 'I'){
                if(roman[i+1] == 'V'){
                    integer+=4;
                    i+=2;
                } else if(roman[i+1] == 'X'){
                    integer+=9;
                    i+=2;
                } else{
                    integer++;
                    i++;
                }
            } else if(roman[i] == 'V'){
                integer+=5;
                i++;
            } else if(roman[i] == 'X'){
                if (roman[i + 1] == 'L'){
                    integer += 40;
                    i+=2;
                } else if (roman[i + 1] == 'C'){
                    integer += 90;
                    i+=2;
                } else{
                    integer+=10;
                    i++;
                }
            } else if(roman[i] == 'L'){
                integer+=50;
                i++;
            } else if(roman[i] == 'C'){
                if (roman[i + 1] == 'D'){
                    integer += 400;
                    i+=2;
                } else if (roman[i + 1] == 'M'){
                    integer += 900;
                    i+=2;
                } else{
                    integer+=100;
                    i++;
                }
            } else if(roman[i] == 'D'){
                integer+=500;
                i++;
            } else {
                integer+=1000;
                i++;
            }
        }
        return integer;
    }
};