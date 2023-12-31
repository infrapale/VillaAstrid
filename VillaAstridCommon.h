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
