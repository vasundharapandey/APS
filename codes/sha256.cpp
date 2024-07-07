#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <openssl/sha.h>

using namespace std;


string gethash(string input) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input.c_str(), input.length());
    SHA256_Final(hash, &sha256);
    
    stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    
    return ss.str();
}

// Driver code
int main() {
    try {
      

        string s1 = "20percentoff";
        cout << "\n" << s1 << " : " << gethash(s1) << endl;

    } catch (...) {
        cout << "Exception thrown\n";
    }
    
    return 0;
}
