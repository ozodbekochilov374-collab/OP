# Operatsion tizimlar — C dasturlash tili bo‘yicha amaliy topshiriqlar

## 1. Loyiha haqida

Ushbu repozitoriyda C dasturlash tilida bajarilgan amaliy topshiriqlar jamlangan. Dasturlar matn bilan ishlash, pointerlar, funksiyalar, massivlarni saralash va dinamik xotirani boshqarish kabi muhim dasturlash tushunchalarini o‘rganishga mo‘ljallangan.

Loyihaning asosiy maqsadi — C tilidagi nazariy bilimlarni amaliy masalalar orqali mustahkamlash, algoritmik fikrlashni rivojlantirish va dastur kodini yozish, kompilyatsiya qilish hamda tekshirish ko‘nikmalarini oshirish.

## 2. C dasturlash tili haqida

C — umumiy maqsadlarda foydalaniladigan, kompilyatsiya qilinadigan dasturlash tili. U 1970-yillarning boshlarida Dennis Ritchie tomonidan ishlab chiqilgan. C dasturlash tilining asosiy xususiyatlari — tezkor ishlashi, xotira bilan bevosita ishlash imkoniyati va dastur tuzilishini aniq boshqarishdir.

C tili operatsion tizimlar, qurilma drayverlari, o‘rnatilgan tizimlar, kompilyatorlar va boshqa tizimli dasturlarni ishlab chiqishda qo‘llaniladi.

### C tilining asosiy xususiyatlari

- **Tezkorlik:** C dasturlari mashina kodiga kompilyatsiya qilinadi va odatda yuqori unumdorlikka ega bo‘ladi.
- **Pointerlar:** xotira manzillari bilan ishlash imkonini beradi.
- **Funksiyalar:** dasturni kichik, qayta ishlatiladigan qismlarga ajratishga yordam beradi.
- **Massivlar:** bir xil turdagi bir nechta qiymatni ketma-ket saqlash imkonini beradi.
- **Dinamik xotira:** dastur ishlayotgan vaqtda kerakli hajmda xotira ajratish va uni bo‘shatish mumkin.
- **Portativlik:** standartlarga mos yozilgan kodni turli operatsion tizimlarda mos kompilyator yordamida ishlatish mumkin.

### C tilida ishlatiladigan asosiy elementlar

| Element | Vazifasi |
|---|---|
| `#include` | Kerakli kutubxona sarlavhasini ulaydi |
| `main()` | Dastur bajarilishi boshlanadigan asosiy funksiya |
| `printf()` | Ekranga ma’lumot chiqaradi |
| `scanf()` | Foydalanuvchidan ma’lumot qabul qiladi |
| `fgets()` | Matnni satr ko‘rinishida o‘qiydi |
| `if / else` | Shart asosida qaror qabul qiladi |
| `for / while` | Takrorlanuvchi amallarni bajaradi |
| Pointer | Xotira manzilini saqlaydi |
| `malloc()` | Dinamik xotira ajratadi |
| `free()` | Dinamik xotirani bo‘shatadi |

## 3. Repozitoriydagi fayllar

Ushbu loyihada uchta C dasturi mavjud:

1. `1.c` — matndagi so‘zlar sonini va eng uzun so‘zni aniqlash.
2. `2.c` — pointer yordamida eng uzun so‘zni aniqlash va uning manzilini ko‘rsatish.
3. `3.c` — dinamik xotiradan foydalanib, massivni tanlangan mezon bo‘yicha saralash.

---

## 4. 1.c — Matndagi so‘zlar soni va eng uzun so‘zni topish

### Dasturning maqsadi

`1.c` dasturi foydalanuvchi kiritgan matnni tahlil qiladi. U matndagi so‘zlar sonini hisoblaydi, eng uzun so‘zni aniqlaydi va shu so‘zning uzunligini ekranga chiqaradi.

Bu dastur satrlar bilan ishlash, belgilarni tekshirish, sikllar va shart operatorlarini o‘rganishga yordam beradi.

### Dasturning ishlash tartibi

1. Foydalanuvchidan matn kiritish so‘raladi.
2. `fgets()` yordamida matn o‘qiladi.
3. Dastur matn belgilarini birma-bir tekshiradi.
4. Bo‘sh joy, tabulyatsiya va yangi qator kabi belgilar so‘zlar orasidagi ajratkich sifatida aniqlanadi.
5. So‘z boshlanganda uning uzunligi hisoblanadi.
6. So‘z tugaganda umumiy so‘zlar soni oshiriladi.
7. Joriy so‘zning uzunligi avvalgi eng uzun so‘z bilan taqqoslanadi.
8. Eng uzun so‘zning boshlanish pozitsiyasi va uzunligi saqlanadi.
9. Oxirida so‘zlar soni, eng uzun so‘z va uning uzunligi ekranga chiqariladi.

### Muhim o‘zgaruvchilar

- `s[1000]` — kiritilgan matnni saqlaydigan belgilar massivi.
- `sozlar` — aniqlangan so‘zlar soni.
- `joriy` — hozir tekshirilayotgan so‘zning uzunligi.
- `eng_uzun` — hozirgacha topilgan eng uzun so‘zning uzunligi.
- `bosh` — joriy so‘zning boshlanish indeksi.
- `eng_bosh` — eng uzun so‘zning boshlanish indeksi.
- `ichida` — dastur ayni paytda so‘z ichidami yoki yo‘qmi, shuni bildiradi.

### Muhim funksiya: `bosh_joy()`

Ushbu funksiya berilgan belgining ajratkich ekanini tekshiradi. U oddiy bo‘sh joy, tabulyatsiya, yangi qator va boshqa standart bo‘shliq belgilarini aniqlaydi.

Agar belgi bo‘shliq bo‘lsa, funksiya `1`, aks holda `0` qaytaradi.

### `fgets()` funksiyasi

`fgets()` foydalanuvchi kiritgan matnni belgilangan bufer hajmi doirasida o‘qiydi. Bu usul matnni `scanf()` orqali bitta so‘z sifatida o‘qishdan farq qiladi, chunki unda bo‘sh joylar ham saqlanadi.

### Kutiladigan natija

Masalan, foydalanuvchi quyidagi matnni kiritsa:

`C dasturlash tilini organaman`

Natija mazmunan quyidagicha bo‘ladi:

- So‘zlar soni: 4
- Eng uzun so‘z: `dasturlash`
- Uzunligi: 10

Bu misolda eng uzun so‘z `dasturlash` hisoblanadi.

### Ushbu topshiriqda o‘rganiladigan bilimlar

- Belgilar massivi va satrlar bilan ishlash.
- `for` sikli yordamida belgilarni ketma-ket tekshirish.
- Shart operatorlaridan foydalanish.
- So‘z chegaralarini aniqlash.
- Massiv indekslari bilan ishlash.
- Hisoblash natijalarini ekranga chiqarish.

---

## 5. 2.c — Pointer yordamida eng uzun so‘zni topish

### Dasturning maqsadi

`2.c` dasturi ham matndagi eng uzun so‘zni aniqlaydi. Biroq bunda asosiy e’tibor pointerlardan foydalanishga qaratilgan.

Birinchi dasturda eng uzun so‘zning boshlanish indeksi saqlansa, ikkinchi dasturda eng uzun so‘zning xotiradagi manzilini ifodalovchi pointer qaytariladi. Shuningdek, so‘z uzunligi funksiya argumenti orqali tashqariga uzatiladi.

### Dasturning ishlash tartibi

1. Foydalanuvchi matn kiritadi.
2. `fgets()` yordamida matn o‘qiladi.
3. `eng_uzun()` funksiyasi matn belgilarini pointer yordamida tekshiradi.
4. So‘zning boshlanishi va uzunligi hisoblab boriladi.
5. Eng uzun so‘z topilganda uning boshlanish manzili saqlanadi.
6. Funksiya eng uzun so‘zning manzilini qaytaradi.
7. `uzunlik` ko‘rsatkichi orqali so‘zning uzunligi asosiy funksiyaga uzatiladi.
8. Dastur so‘zni, uning uzunligini va pointer manzilini ekranga chiqaradi.

### Muhim funksiya: `eng_uzun()`

Funksiya quyidagi ma’lumotlarni qabul qiladi:

- `char *s` — matnning boshlang‘ich manzili.
- `int *uzunlik` — so‘z uzunligini saqlash uchun ishlatiladigan pointer.

Funksiya matn bo‘ylab yurib, eng uzun so‘zning boshlanish manzilini topadi. Topilgan so‘zning uzunligi `*uzunlik` orqali yoziladi, so‘ng funksiya so‘zning boshlanish manzilini qaytaradi.

Agar matnda so‘z bo‘lmasa, funksiya `NULL` qaytaradi.

### Pointer nima?

Pointer — boshqa obyekt yoki o‘zgaruvchining xotiradagi manzilini saqlaydigan o‘zgaruvchi.

Masalan:

- `char *p` — belgiga yoki belgilar ketma-ketligining bir qismiga ishora qilishi mumkin.
- `int *uzunlik` — `int` turidagi qiymat joylashgan manzilni saqlaydi.
- `*uzunlik = eng` — pointer ko‘rsatayotgan xotira joyiga `eng` qiymatini yozadi.

### `p++` va `p - joriy` qanday ishlaydi?

- `p++` pointer manzilini keyingi belgi joylashgan manzilga siljitadi.
- `p - joriy` joriy so‘zning boshlanish manzilini aniqlashda ishlatiladi. Chunki `p` so‘z tugagan joyni ko‘rsatsa, `joriy` esa so‘z uzunligini bildiradi.

Bu amallar pointer arifmetikasiga misol bo‘ladi.

### `printf("%.*s", uzunlik, p)` nima qiladi?

Bu format yozuvi `p` ko‘rsatgan joydan boshlab, aynan `uzunlik` ta belgi chiqaradi. Shuning uchun dastur so‘zdan keyin keladigan bo‘sh joylarni yoki boshqa matnni chiqarib yubormaydi.

`printf("Pointer manzili: %p\n", (void *)p)` esa pointer ko‘rsatgan manzilni chiqaradi. Manzil dastur ishga tushishiga va xotira joylashuviga qarab o‘zgarishi mumkin.

### Kutiladigan natija

Kiritilgan matn:

`Men C dasturlash tilini organaman`

Natijada dastur eng uzun so‘zni va uning uzunligini chiqaradi. Bundan tashqari, shu so‘z boshlanadigan xotira manzili ham ko‘rsatiladi.

### Ushbu topshiriqda o‘rganiladigan bilimlar

- Pointerlar va xotira manzillari.
- Funksiyaga pointer uzatish.
- Pointer orqali qiymatni o‘zgartirish.
- Funksiyadan pointer qaytarish.
- Pointer arifmetikasi.
- `NULL` qiymatini tekshirish.
- `printf()` yordamida ma’lum uzunlikdagi satrni chiqarish.

### 1.c va 2.c o‘rtasidagi farq

Har ikkala dastur ham matndagi so‘zlar sonini yoki eng uzun so‘zni aniqlash bilan bog‘liq, ammo vazifalari bir xil emas. `1.c` so‘zlar sonini ham hisoblaydi va eng uzun so‘zning boshlanish indeksini saqlaydi. `2.c` esa eng uzun so‘zning manzilini pointer orqali qaytaradi va uzunligini pointer argumenti orqali uzatadi.

---

## 6. 3.c — Pointerlar, dinamik xotira va funksional ko‘rsatkich yordamida massivni saralash

### Dasturning maqsadi

`3.c` dasturi foydalanuvchi kiritgan butun sonlar massivini uch xil mezondan biri bo‘yicha saralaydi:

1. O‘sish tartibida.
2. Kamayish tartibida.
3. Sonlarning modul qiymati bo‘yicha o‘sish tartibida.

Ushbu dastur dinamik xotira ajratish, pointerlar, funksiyaga ko‘rsatkichlar (function pointers), massivlar va saralash algoritmlarini o‘rganishga yordam beradi.

### Dasturning ishlash tartibi

1. Foydalanuvchi massiv elementlari sonini kiritadi.
2. Dastur kiritilgan qiymat musbat ekanini va xotira hajmini hisoblash mumkinligini tekshiradi.
3. `malloc()` yordamida massiv uchun dinamik xotira ajratiladi.
4. Xotira ajratilishi muvaffaqiyatli bo‘lmasa, dastur xatolik haqida xabar beradi.
5. Foydalanuvchi massiv elementlarini kiritadi.
6. Dastur saralash mezonini tanlashni so‘raydi.
7. Tanlangan mezonga mos funksiya ko‘rsatkichi aniqlanadi.
8. `sarala()` funksiyasi massivni Bubble Sort algoritmi yordamida saralaydi.
9. Saralangan massiv ekranga chiqariladi.
10. `free()` yordamida ajratilgan xotira bo‘shatiladi.

### Dinamik xotira nima?

Dinamik xotira dastur ishlayotgan paytda kerakli hajmda xotira ajratish imkonini beradi. Bu dastur bajarilishidan oldin massivning aniq hajmi ma’lum bo‘lmaganda foydali hisoblanadi.

### `malloc()` funksiyasi

`malloc()` kerakli hajmdagi xotirani ajratadi va uning boshlang‘ich manzilini qaytaradi.

Dasturda quyidagi ifoda ishlatiladi:

`int *a = malloc((size_t)n * sizeof(int));`

Bu yerda:

- `a` — massivning birinchi elementiga ishora qiluvchi pointer.
- `n` — massiv elementlari soni.
- `sizeof(int)` — bitta `int` elementining xotira hajmi.
- `malloc()` — barcha elementlar uchun yetarli xotira ajratadi.

`malloc()` muvaffaqiyatsiz bo‘lsa, `NULL` qaytaradi. Shu sababli dastur xotira ajratilganini tekshiradi.

### `free()` funksiyasi

`free(a)` oldin `malloc()` yordamida ajratilgan xotirani bo‘shatadi. Bu dinamik xotiradan to‘g‘ri foydalanishning muhim qismidir.

Dasturda xatolik yuz bergan ayrim holatlarda ham `free(a)` chaqiriladi, shunda ajratilgan xotira bo‘shatiladi.

### Funksiyaga ko‘rsatkich nima?

Funksiyaga ko‘rsatkich — funksiyaning manzilini saqlash va shu funksiya orqali amal bajarish imkonini beradigan mexanizm.

Dasturda quyidagi tur aniqlangan:

`typedef int (*Mezon)(int, int);`

Bu `Mezon` nomli tur ikki `int` argumentini qabul qilib, `int` qiymat qaytaradigan funksiyaga ko‘rsatkichni ifodalaydi.

Ushbu yondashuv tufayli `sarala()` funksiyasini har bir saralash usuli uchun qaytadan yozish shart emas. U taqqoslash mezonini argument sifatida qabul qiladi.

### Saralash funksiyalari

#### 1. `osish()`

Ikki sonni taqqoslaydi va birinchi son ikkinchi sondan katta bo‘lsa, `1` qaytaradi. Saralash jarayonida elementlar kerakli tartibga keltirilib, yakunda o‘sish tartibi hosil bo‘ladi.

Masalan:

`8 3 6 1` → `1 3 6 8`

#### 2. `kamayish()`

Birinchi son ikkinchi sondan kichik bo‘lsa, `1` qaytaradi. Natijada massiv kamayish tartibida saralanadi.

Masalan:

`8 3 6 1` → `8 6 3 1`

#### 3. `modul()`

Sonlarni ularning modul qiymati bo‘yicha taqqoslaydi. Modul — sonning ishorasiz qiymati. Masalan, `|-5| = 5` va `|3| = 3`.

Ushbu dastur modul qiymatlari teng bo‘lgan sonlarni ham taqqoslaydi.

Masalan:

`-5 3 -2 1` → `1 -2 3 -5`

Bu natija sonlarning modul qiymati o‘sish tartibida joylashganini ko‘rsatadi.

### `sarala()` funksiyasi

`sarala()` uchta argument qabul qiladi:

- `int *a` — massivning boshlang‘ich manzili.
- `int n` — massiv elementlari soni.
- `Mezon mezon` — elementlarni taqqoslash mezonini belgilovchi funksiya ko‘rsatkichi.

Funksiya ichida ikki sikldan foydalaniladi. Qo‘shni elementlar tanlangan mezon bo‘yicha taqqoslanadi. Agar ularning tartibi noto‘g‘ri bo‘lsa, elementlar vaqtinchalik o‘zgaruvchi yordamida almashtiriladi.

Bu usul Bubble Sort deb ataladi.

### `chiqar()` funksiyasi

Ushbu funksiya massiv elementlarini ketma-ket ekranga chiqaradi. U massivning boshlang‘ich manzili va elementlar sonini qabul qiladi.

### `switch` operatori

Foydalanuvchi tanlagan qiymatga qarab, `switch` operatori tegishli funksiyani tanlaydi:

- `1` — `osish`
- `2` — `kamayish`
- `3` — `modul`

Tanlov noto‘g‘ri bo‘lsa, dastur xatolik haqida xabar beradi va ajratilgan xotirani bo‘shatadi.

### Kutiladigan natija

Masalan, foydalanuvchi quyidagi qiymatlarni kiritsa:

- Elementlar soni: `5`
- Massiv: `4 -2 8 -1 3`
- Tanlov: `3`

Natija:

`Saralangan massiv: -1 -2 3 4 8`

Bu natijada modul qiymatlari `1, 2, 3, 4, 8` tartibida joylashgan.

### Ushbu topshiriqda o‘rganiladigan bilimlar

- Dinamik xotira ajratish va bo‘shatish.
- `malloc()` va `free()` funksiyalari.
- Pointerlar orqali massiv bilan ishlash.
- Funksiyaga ko‘rsatkichlar.
- `typedef` yordamida yangi tur nomini aniqlash.
- `switch` operatoridan foydalanish.
- Bubble Sort algoritmi.
- Xatoliklarni tekshirish va xotirani to‘g‘ri boshqarish.

---

## 7. Dasturlarni kompilyatsiya qilish va ishga tushirish

Ushbu dasturlarni GCC kompilyatori yordamida kompilyatsiya qilish mumkin.

### 1-dastur

```bash
gcc 1.c -o 1
./1
```

### 2-dastur

```bash
gcc 2.c -o 2
./2
```

### 3-dastur

```bash
gcc 3.c -o 3
./3
```

Agar kompilyatsiya jarayonida xatolik yuz bersa, terminalda ko‘rsatilgan xabarni tekshirish kerak.

## 8. Xulosa

Ushbu amaliy topshiriqlar C dasturlash tilining muhim imkoniyatlarini o‘rganishga xizmat qiladi. Birinchi dastur matnni tahlil qilish va so‘zlar bilan ishlashni o‘rgatadi. Ikkinchi dastur pointerlar yordamida matnning xotiradagi manzili bilan ishlashni ko‘rsatadi. Uchinchi dastur esa dinamik xotira, funksiyaga ko‘rsatkichlar va massivlarni turli mezonlar bo‘yicha saralashni birlashtiradi.

Uchala dastur orqali funksiyalar, sikllar, shart operatorlari, pointerlar va xotirani boshqarish bo‘yicha amaliy tajriba orttiriladi.

## Muallif

**Ozodbek Ochilov**

**Fan:** Operatsion tizimlar  
**Dasturlash tili:** C  
**Kompilyator:** GCC  
**Ish muhiti:** Kali Linux
