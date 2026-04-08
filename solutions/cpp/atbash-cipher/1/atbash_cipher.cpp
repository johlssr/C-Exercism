#include "atbash_cipher.h"


namespace atbash_cipher {

// TODO: add your solution here
    std::string encode (std::string plain) {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        std::string alphabet2 = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";
        std::string result = "";
        size_t x = 0;
        int i = 0;
        while (x < plain.size()){  
        if ((i != 0) && (i%5 == 0) && (x != plain.size()-1)) {
            result += " ";
            i = 0;
        }
        else if (plain[x] == ' ') {
            x++;
        }
        else if (isalpha(plain[x])) {
            int num = alphabet.find(plain[x]);
            if (num > 26) { 
                num = num - 26;
            }
            result += alphabet2[num];
            i++;
            x++;
        }
        else if (isalnum(plain[x])) {
            result += plain[x];
            i++;
            x++;
        }
        else {
            x++;
        }
        }
        return result;
    }
    std::string decode (std::string cipher) {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        std::string alphabet2 = "zyxwvutsrqponmlkjihgfedcba";
        std::string result = "";
        size_t x = 0;
        while (x < cipher.size()){
            if (isalpha(cipher[x])) {
                int num = alphabet.find(cipher[x]);
                result += alphabet2[num];
                x++;
            }
            else if (isalnum(cipher[x])) {
                result += cipher[x];
                x++;
            }
            else {
                x++;
            }
        }
        return result;
    }

}  // namespace atbash_cipher
