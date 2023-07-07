0x1A-hash_tables

A hash function is any function that can be used to map data of arbitrary size to fixed-size values, though there are some hash functions that support variable length output.[1] The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are usually used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.

Hash functions and their associated hash tables are used in data storage and retrieval applications to access data in a small and nearly constant time per retrieval. They require an amount of storage space only fractionally greater than the total space required for the data or records themselves. Hashing is a computationally and storage space-efficient form of data access that avoids the non-constant access time of ordered and unordered lists and structured trees, and the often exponential storage requirements of direct access of state spaces of large or variable-length keys.

Use of hash functions relies on statistical properties of key and function interaction: worst-case behaviour is intolerably bad with a vanishingly small probability, and average-case behaviour can be nearly optimal (minimal collision).[2]: 527 

Hash functions are related to (and often confused with) checksums, check digits, fingerprints, lossy compression, randomization functions, error-correcting codes, and ciphers. Although the concepts overlap to some extent, each one has its own uses and requirements and is designed and optimized differently. The hash function differs from these concepts mainly in terms of data integrity.

A hash table in C/C++ is a data structure that maps keys to values. A hash table uses a hash function to compute indexes for a key. You can store the value at the appropriate location based on the hash table index.

The benefit of using a hash table is its very fast access time. Typically, the time complexity (amortized time complexity) is a constant O(1) access time.

If two different keys get the same index, you will need to use other data structures (buckets) to account for these collisions. If you choose a very good hash function, the likelihood of a collision can be negligible.

. . .
