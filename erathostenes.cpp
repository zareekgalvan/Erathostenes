vector<int> eratosthenes(int nPrimos) {
	vector<int> primes;
	bool isPrime[nPrimos + 5];

	primes.push_back(2);

	for(int i=4; i<nPrimos+2; i+=2) {
		isPrime[i]=1;
	}

	for(int i=3; i<nPrimos+2; i+=2) {
		if(!isPrime[i]) {
			primes.push_back(i);

			for(int j=1; j*i<nPrimos; j++){
				isPrime[j*i]=1;
			}
		}
	}

	return primes;
}