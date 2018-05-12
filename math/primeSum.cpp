vector<int> Solution::primesum(int A) {
    // Sieve of Eratosthenes is the algorithm used for finding the prime numbers
    // time complexity is O(n*loglogn)
    vector<bool> primes(A+1);
    primes[0]=primes[1]=false;
    
    for(int i=2;i<=A; i++) primes[i]= true;
    
    for(int i=2; i*i<=A; i++){
        if(primes[i]==true){
            for(int j=2; i*j<=A; j++){
                primes[i*j]= false;
            }
        }
    }
    
    vector<int> out;
    for(int i=0; i<A+1;i++){
        if(primes[i] && primes[A-i]){
            out.push_back(i);
            out.push_back(A-i);
            break;
        }
    }
    return out;
}
