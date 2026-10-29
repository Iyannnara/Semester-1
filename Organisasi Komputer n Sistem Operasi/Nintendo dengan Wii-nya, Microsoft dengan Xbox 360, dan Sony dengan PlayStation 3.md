# Nintendo dengan Wii-nya, Microsoft dengan Xbox 360, dan Sony dengan PlayStation 3

Mungkin banyak yang belum tahu, di era ketiga raksasa konsol dunia yaitu Nintendo dengan Wii-nya, Microsoft dengan Xbox 360, dan Sony dengan PlayStation 3, semuanya kompak ditenagai oleh satu arsitektur prosesor yang sama buatan IBM, yaitu PowerPC (PPC)."
### Generasi ke-6 (Nintendo GameCube & Wii)
Nintendo sebelumnya sempat memakai MIPS di N64, tapi kemudian beralih ke IBM PowerPC.
Di GameCube (tahun 2001), Nintendo memakai chip bernama *Gekko*, 
lalu di-upgrade lagi pada konsol Wii di tahun 2006 dengan chip bernama *Broadway*.

Dari sisi teknis, 
- IBM merancang Floating-Point Unit (FPU) khusus yang bisa memproses dua data sekaligus (paired-single), sangat membantu perhitungan koordinat 3D.
- L2 Cache langsung ditanam di dalam chip agar komunikasi data lebih cepat.
- Fokus Nintendo di sini bukan sekadar adu tenaga mentah, tapi efisiensi daya agar konsol bisa dibuat kecil tanpa takut kepanasan atau overheating.

### Generasi ke-7 (Puncak Kejayaan IBM - Xbox 360 & PS3)
puncaknya ada di Generasi ke-7. Di sinilah IBM benar-benar mendominasi pasar lewat dua monster konsol: Xbox 360 dan PlayStation 3.
#### Xbox 360:
Microsoft menggunakan chip buatan IBM bernama Xenon. 
- Isinya ada 3 inti (core) PowerPC 64-bit berkecepatan 3.2 GHz, yang masing-masing mendukung SMT (Simultaneous Multithreading), jadi totalnya ada 6 thread jalan bersamaan.
- IBM juga membekurinya dengan ekstensi VMX128 supaya konsol ini sanggup memproses fisika game dan AI yang rumit.

#### PlayStation 3:
Sony punya pendekatan yang berbeda lewat konsorsium STI (Sony, Toshiba, IBM) dengan menciptakan Cell Broadband Engine. 
Ini arsitektur heterogen yang unik: 
- 1 inti utama bernama PPE berbasis PowerPC untuk ngurusin OS dan logika dasar,
- 8 unit ko-prosesor bernama SPE khusus untuk kalkulasi matematika berat.
  
Hasilnya? 

Pada tahun 2005-2006, performa Cell BE ini mirip seperti komputer super (supercomputer) rumahan, melampaui kemampuan PC biasa pada masa itu.
implementasi arsitektur IBM PowerPC pada konsol generasi ke-6 dan ke-7 adalah salah satu tonggak sejarah paling penting di dunia video game. 
IBM berhasil membuktikan bahwa arsitektur RISC mampu mendominasi komputasi grafis 3D dan pemrosesan paralel secara masif.
