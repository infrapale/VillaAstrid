#define MAX_MENU_INDX  32
struct unit_type_entry {
  char addr[6];	
  char name[9];
  char system_sketch[5];
  char hardware_sketch[5];
  char software_sketch[5];
  char version[6];
  char index;
};
struct time_type {
   unsigned int year;
   byte month;
   byte day;
   byte hour;
   byte minute;
   byte second;
};

#ifdef MENU_DATA
struct menu_relay_entry {
  char menu[3];
  char cmnd[6];
  byte ru;
  byte ri;
};





menu_relay_entry menu_table[MAX_MENU_INDX]= {
  {"11","RMH11",3,1},
  {"12","RMH12",3,2},
  {"13","RMH13",3,3},
  {"14","RMH14",3,4},
  {"21","RMH21",5,1},  //MH2
  {"22","RMH22",5,2},  //MH2
  {"23","RMH23",5,3},  //MH2
  {"31","RTK_1",1,1},  //TK Katto
  {"32","RET_1",6,3},  //Eteinen 
  {"33","RWC_1",2,3},  //katossa 
  {"34","RWC_2",6,6},  //Halogen spot 
  {"41","RKOK1",4,1},  //Liesi
  {"42","RKOK2",4,2},  //Kylskap
  {"43","RKOK3",4,3},  //Bord
  {"44","RKOK4",4,4},  //Bord
  {"51","RTUP1",1,3},  //Tupa katto
  {"52","RTUP2",1,4},  //Tupa katto
  {"53","RPARV",1,2},  //Parvi Katto
  {"61","RKHH1",1,5},  //KHH loisteputki
  {"62","RKHH2",6,1},  //KHH halo/LED
  {"63","RPSH1",6,2},  //PSH LED
  {"64","RSAU1",2,2},
  {"71","RPIHA",1,7},  //Etupiha 
  {"72","RTERA",1,8},  //Terassi
  {"73","RPOLK",2,5},  //Polku rantaan
  {"74","RJOUL",1,6},  //Jouluvalot
  {"81","RVESI",2,1},  //Vesi ventiili
  {"82","RHALO",2,4},  //MH1-2 valokeskukset
  {"83","RTERM",2,6},  //Termostaatti: kotona/poissa
  {"84","RVAR1",2,7},  //Varalla
  {"85","RVAR2",2,8}   //Varalla
    
};





#endif
// Unit addresses
const char TERM_ADDR[5][5] = {
   {"UDEF"},
   {"TMH1"}, 
   {"TMH2"}, 
   {"TTK_"}, 
   {"TKHH"} 
};

const char RELAY_ADDR[7][5] = {
   {"UDEF"},
   {"RM11"},
   {"RM12"}, 
   {"RM21"}, 
   {"RM22"}, 
   {"TTK1"}, 
   {"TTK2"} 
};



//  '4' '1' '*'  -> "KOK1" -> ru=1, ri=4 
