struct str {
    uint16_t a; /* a gap of 4 bytes */
    uint64_t b; 
};
struct str mystr;
fread( &mystr, sizeof( str ), 1, f );
