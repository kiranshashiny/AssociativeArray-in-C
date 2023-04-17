#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

   int size;
   void **keys;
   void **values;
} hash_t;
hash_t *hash_new (int size) {

   hash_t *h = calloc(1, sizeof (hash_t));
   h->keys = calloc(size, sizeof (void *));
   h->values = calloc(size, sizeof (void *));
   h->size = size;
   return h;
}

int hash_index (hash_t *h, void *key) {

   int i = (int) key % h->size;
   while (h->keys[i] && h->keys[i] != key)
       i = (i + 1) % h->size;
   return i;
}

void hash_insert (hash_t *h, void *key, void *value) {

   int i = hash_index(h, key);
   h->keys[i] = key;
   h->values[i] = value;
}

void *hash_lookup (hash_t *h, void *key) {

   int i = hash_index(h, key);
   return h->values[i];
}
int main () {

   hash_t *h = hash_new(400);
   hash_insert(h, "hello", "world");
   hash_insert(h, "shashi", "kiran");
   hash_insert(h, "a", "b");

hash_insert(h, "Shiggaon","Basavaraj Bommai");
hash_insert(h, "Nippani","Shashikala Annasaheb Jolle");
hash_insert(h, "Chikkodi-Sadalga","Ramesh Katti");
hash_insert(h, "Athani","Mahesh Kumathalli");
hash_insert(h, "Kagwad","Shrimant Balasaheb Patil");
hash_insert(h, "Kudachi (SC)","P. Rajeev");
hash_insert(h, "Raybag (SC)","Duryodhan Mahalingappa Aihole");
hash_insert(h, "Hukkeri","Nikhil Katti");
hash_insert(h, "Arabhavi","Balachandra Jarakiholi");
hash_insert(h, "Gokak","Ramesh Jarakiholi");
hash_insert(h, "Yemkanmardi (ST)","Basavaraj Hundri");
hash_insert(h, "Belgaum Uttar","Dr. Ravi Patil");
hash_insert(h, "Belgaum Dakshin","Abhay Patil");
hash_insert(h, "Belgaum Rural","Nagesh Mannolkar");
hash_insert(h, "Khanapur","Vittal Halagekar");
hash_insert(h, "Kittur","Mahantesh Doddagoudar");
hash_insert(h, "Bailhongal","Jagdish Channappa Metgud");
hash_insert(h, "Saundatti Yellamma","Ratna Vishwanath Mamani");
hash_insert(h, "Ramdurg","Chikka Revanna");
hash_insert(h, "Mudhol (SC)","Govind Karjol");
hash_insert(h, "Terdal","Siddu Savadi");
hash_insert(h, "Jamkhandi","Jagadish Gudagunti");
hash_insert(h, "Bilgi","Murugesh Rudrappa Nirani");
hash_insert(h, "Badami","Shantha Gowda Patil");
hash_insert(h, "Bagalkot","Veerabhadrayya Charantimath");
hash_insert(h, "Hungund","Doddanagouda G Patil");
hash_insert(h, "Muddebihal","AS Patil Nadahalli");
hash_insert(h, "Babaleshwar","Vijugouda S Patil");
hash_insert(h, "Bijapur City","B R Patil (Yatnal)");
hash_insert(h, "Sindgi","Ramesh Bhusanur");
hash_insert(h, "Afzalpur","Malikaiah Guttedar");
hash_insert(h, "Jewargi","Shivanagoudapatil Raddevadagi");
hash_insert(h, "Shorapur (ST)","Narasimha Nayak (Rajugouda)");
hash_insert(h, "Shahapur","Ameenreddy Yalagi");
hash_insert(h, "Yadgir","Venkatareddy Mudnal");
hash_insert(h, "Chittapur (SC)","Manikanta Rathod");
hash_insert(h, "Chincholi (SC)","Dr. Avinash Jadhav");
hash_insert(h, "Gulbarga Rural (SC)","Basavaraj Mattimod");
hash_insert(h, "Gulbarga Dakshin","Dattatraya Patil Revoor");
hash_insert(h, "Gulbarga Uttar","Chandrakant Patil");
hash_insert(h, "Aland","Subhash Guttedar");
hash_insert(h, "Basavakalyan","Sharanu Salagar");
hash_insert(h, "Humnabad","Siddu Patil");
hash_insert(h, "Bidar South","Dr. Shailendra Beldale");
hash_insert(h, "Aurad (SC)","Prabhu Chavan");
hash_insert(h, "Raichur Rural (ST)","Tipparaju Havaldar");
hash_insert(h, "Raichur","Dr. Shivaraj Patil");
hash_insert(h, "Devedurga (ST)","K Shivanagouda Nayak");
hash_insert(h, "Lingsugur (SC)","Manappa D Vajjal");
hash_insert(h, "Sindhanur","K Kariyappa");
hash_insert(h, "Maski (ST)","Pratapgouda Patil");
hash_insert(h, "Kushtagi","Doddanagouda Patil");
hash_insert(h, "Kanakagiri (SC)","Basavaraj Dadesaguru");
hash_insert(h, "Yelburga","Halappa Basappa Achar");
hash_insert(h, "Shirahatti (SC)","Dr. Chandru Lamani");
hash_insert(h, "Gadag","Anil Menasinakai");
hash_insert(h, "Nargund","C.C. Patil");
hash_insert(h, "Navalgund","Shankar Patil Munenakoppa");
hash_insert(h, "Kundgol","M R Patil");
hash_insert(h, "Dharwad","Amrut Ayyappa Desai");
hash_insert(h, "Hubli-Dharwad-East (SC)","Arvind Bellad");
hash_insert(h, "Hubli-Dharwad-West","Dr. Kranti Kiran");
hash_insert(h, "Haliyal","Sunil Hegde");
hash_insert(h, "Karwar","Rupali Santosh Nayak");
hash_insert(h, "Kumta","Dinakar Shetty");
hash_insert(h, "Bhatkal","Sunil Baliya Nayak");
hash_insert(h, "Sirsi","Vishweshwar Hegde Kageri");
hash_insert(h, "Yellapur","Shivaram Hebbar");
hash_insert(h, "Byadgi","Virupakshappa Ballari");
hash_insert(h, "Hirekerur","B.C. Patil");
hash_insert(h, "Ranibennur","Arun Kumar Pujar");
hash_insert(h, "Hadagalli (SC)","Krishna Naik");
hash_insert(h, "Vijayanagara","Siddharth Singh");
hash_insert(h, "Kampli (ST)","T H Suresh Babu");
hash_insert(h, "Siruguppa (ST)","M.S. Somalingappa");
hash_insert(h, "Bellary (ST)","B. Sriramulu");
hash_insert(h, "Bellary City","Gali Somashekhara Reddy");
hash_insert(h, "Sandur (ST)","Shilpa Raghavendra");
hash_insert(h, "Kudligi (ST)","Lokesh V Nayaka");
hash_insert(h, "Molakalmuru (ST)","S. Thippeswamy");
hash_insert(h, "Challakere (ST)","Anilkumar");
hash_insert(h, "Chitradurga","G H Thippareddy");
hash_insert(h, "Hiriyur","K. Poornima Srinivas");
hash_insert(h, "Hosadurga","S Lingamurthy");
hash_insert(h, "Holalkere (SC)","M. Chandrappa");
hash_insert(h, "Jagalur (ST)","S V Ramachandra");
hash_insert(h, "Harihar","B.P. Harish");
hash_insert(h, "Honnali","M P Renukacharya");
hash_insert(h, "Shimoga Rural (SC)","Ashok Nayak");
hash_insert(h, "Bhadravati","Mangoti Rudresh");
hash_insert(h, "Tirthahalli","Araga Jnanendra");
hash_insert(h, "Shikaripur","BY Vijayendra");
hash_insert(h, "Sorab","Kumar Bangarappa");
hash_insert(h, "Sagar","Haratalu H. Halappa");
hash_insert(h, "Kundapura","Kiran Kumar Kodgi");
hash_insert(h, "Udupi","Yashpal Suvarna");
hash_insert(h, "Kapu","Gurme Suresh Shetty");
hash_insert(h, "Karkal","V. Sunil Kumar");
hash_insert(h, "Sringeri","D. N. Jeevaraj");
hash_insert(h, "Chikmagalur","C T Ravi");
hash_insert(h, "Tarikere","D S Suresh");
hash_insert(h, "Kadur","K S Prakash");
hash_insert(h, "Chikkanayakanahalli","J.C. Madhuswamy");
hash_insert(h, "Tiptur","B.C. Nagesh");
hash_insert(h, "Turuvekere","Masala Jayaram");
hash_insert(h, "Kunigal","D Krishna Kumar");
hash_insert(h, "Tumkur City","G.B. Jyothi Ganesh");
hash_insert(h, "Tumkur Rural","B Suresh Gowda");
hash_insert(h, "Koratagere (SC)","Anil Kumar");
hash_insert(h, "Sira","Dr. Rajesh Gowda");
hash_insert(h, "Pavagada (SC)","Krishna Nayak");
hash_insert(h, "Madhugiri","LC Nagaraj");
hash_insert(h, "Gauribidanur","Dr. Shashidhar");
hash_insert(h, "Bagepalli","C Muniraju");
hash_insert(h, "Chikkaballapur","Dr. K. Sudhakar");
hash_insert(h, "Chintamani","Venu Gopal");
hash_insert(h, "Srinivaspur","Gunjuru Srinivas Reddy");
hash_insert(h, "Mulbagal (SC)","Shigehalli Sundar");
hash_insert(h, "Bangarapet (SC)","M. Narayanswamy");
hash_insert(h, "Kolar","Varthur Prakash");
hash_insert(h, "Malur","KS Manjunath Gowda");
hash_insert(h, "Yelahanka","S.R. Vishwanath");
hash_insert(h, "K.R. Pura","BA Basavaraj");
hash_insert(h, "Byatarayanapura","Thammesh Gowda");
hash_insert(h, "Yeshvanthapura","S.T. Somashekar");
hash_insert(h, "Rajarajeshwarinagar","Munirathna Naidu");
hash_insert(h, "Dasarahalli","S Muniraju");
hash_insert(h, "Mahalakshmi Layout","K. Gopalaiah");
hash_insert(h, "Malleshwaram","C.N. Ashwathnarayana");
hash_insert(h, "Pulakeshinagar (SC)","Murali");
hash_insert(h, "Sarvagnanagar","Padmanabha Reddy");
hash_insert(h, "C.V. Raman Nagar (SC)","S. Raghu");
hash_insert(h, "Shivajinagar","N. Chandra");
hash_insert(h, "Shanti Nagar","Shiva Kumar");
hash_insert(h, "Gandhi Nagar","A.R. Sapthagiri Gowda");
hash_insert(h, "Rajaji Nagar","S. Suresh Kumar");
hash_insert(h, "Vijay Nagar","H Raveendra");
hash_insert(h, "Chamrajpet","Bhaskar Rao");
hash_insert(h, "Chickpet","Uday Garudachar");
hash_insert(h, "Basavanagudi","Ravisubramanya");
hash_insert(h, "Padmanaba Nagar","R. Ashoka");
hash_insert(h, "B.T.M. Layout","Sridhar Reddy");
hash_insert(h, "Jayanagar","C K Ramamurthy Shri Sathish Reddy");
hash_insert(h, "Bommanahalli","Sathish Reddy");
hash_insert(h, "Bangalore South","M Krishnappa");
hash_insert(h, "Anekal (SC)","Hullalli Srinivas");
hash_insert(h, "Hosakote","M.T.B. Nagraj");
hash_insert(h, "Devanahalli (SC)","Pilla Munishamappa");
hash_insert(h, "Doddaballapur","Dhiraj Muniraju");
hash_insert(h, "Nelamangala (SC)","Sapthagiri Naik");
hash_insert(h, "Magadi","Prasad Gowda");
hash_insert(h, "Ramanagaram","Goutham Gowda");
hash_insert(h, "Kanakapura","R. Ashok");
hash_insert(h, "Channapatna","CP Yogeshwar");
hash_insert(h, "Malavalli (SC)","Muniraju");
hash_insert(h, "Maddur","S P Swamy");
hash_insert(h, "Melukote","Dr. Indresh Kumar");
hash_insert(h, "Mandya","Ashok Jayaram");
hash_insert(h, "Shrirangapattana","Indavalu Sachidananda");
hash_insert(h, "Nagamangala","Sudha Shivaram");
hash_insert(h, "Krishnarajpet","Dr. K.C. Narayanagowda");
hash_insert(h, "Belur","Hullalli K Suresh");
hash_insert(h, "Hassan","J Preetham Gowda");
hash_insert(h, "Holenarasipur","Devaraje Gowda");
hash_insert(h, "Arkalgud","Yoga Ramesh");
hash_insert(h, "Sakleshpur (SC)","Cement Manju");
hash_insert(h, "Belthangady","Harish Poonja");
hash_insert(h, "Moodabidri","Umanath Kotian");
hash_insert(h, "Mangalore City North","Y. Bharat Shetty");
hash_insert(h, "Mangalore City South","Vedavyas Kamath");
hash_insert(h, "Mangalore","Sathish Kumpala");
hash_insert(h, "Bantval","Rajesh Naik");
hash_insert(h, "Puttur","Asha Thimmappa");
hash_insert(h, "Sullia (SC)","Bhagirathi Murulya");
hash_insert(h, "Madikeri","M P Appachu Ranjan");
hash_insert(h, "Virajpet","K G Bopaiah");
hash_insert(h, "Piriyapatna","C. H. Vijayashankar");
hash_insert(h, "Krishnarajanagara","Venkatesh Hosalli");
hash_insert(h, "Hunsur","Devarahalli Somashekhar");
hash_insert(h, "Nanjangud (SC)","B. Harshavardhan");
hash_insert(h, "Chamundeshwari","Kaveesh Gowda");
hash_insert(h, "Chamaraja","L. Nagendra");
hash_insert(h, "Narasimharaja","Sandesh Swami");
hash_insert(h, "Varuna","V. Somanna");
hash_insert(h, "T. Narasipur (SC)","Dr. Revanna");
hash_insert(h, "Hanur","Dr. Preetham Nagappa");
hash_insert(h, "Kollegal (SC)","N. Mahesh");
hash_insert(h, "Chamarajanagar","V. Somanna");
hash_insert(h, "Gundlupet","C.S. Niranjan Kumar");
hash_insert(h, "Devar Hippargi","Somanagouda Patil (Sasanur)");
hash_insert(h, "Basavana Bagevadi","SK Bellubbi");
hash_insert(h, "Indi","Kasagouda Biradar");
hash_insert(h, "Gurmitkal","Kum. Lalitha Anapur");
hash_insert(h, "Bidar","Eshwar Singh Thakur");
hash_insert(h, "Bhalki","Prakash Khandre");
hash_insert(h, "Gangawati","Paranna Munavalli");
hash_insert(h, "Kalghatgi","Nagaraj Chabbi");
hash_insert(h, "Hangal","Shivaraj Sajjanar");
hash_insert(h, "Haveri (SC)","Gavisiddappa Dyamannavar");
hash_insert(h, "Harapanahalli","Karunakara Reddy");
hash_insert(h, "Davanagere North","Lokikere Nagaraj");
hash_insert(h, "Davanagere South","Ajay Kumar");
hash_insert(h, "Mayakonda (SC)","Basavaraja Naik");
hash_insert(h, "Channagiri","Shiv Kumar");
hash_insert(h, "Byndoor","Gururaj Gantihole");
hash_insert(h, "Mudigere (SC)","Deepak Doddalah");
hash_insert(h, "Gubbi","SD Dileep Kumar");
hash_insert(h, "Sidlaghatta","Ramachandra Gowda");
hash_insert(h, "Kolar Gold Field (SC)","Ashwini Sampangi");
hash_insert(h, "Shravanabelagola","Chidananda");
hash_insert(h, "Arsikere","GV Basavaraju");
hash_insert(h, "Heggadadevankote (ST)","Krishna Naik");


   printf("hello => %s\n", hash_lookup(h, "hello"));
   printf("herp => %s\n", hash_lookup(h, "herp"));
   printf("shashi => %s\n", hash_lookup(h, "shashi"));
   printf("Arsikere => %s\n", hash_lookup(h, "Arsikere"));
   printf("Byndoor => %s\n", hash_lookup(h, "Byndoor"));
   printf("a => %s\n", hash_lookup(h, "a"));
   return 0;
}
