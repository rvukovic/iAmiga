 /*
  * UAE - The Un*x Amiga Emulator
  *
  * disk support
  *
  * (c) 1995 Bernd Schmidt
  */

extern void DISK_init (void);
extern void DISK_select (uae_u8 data);
extern uae_u8 DISK_status (void);
extern void disk_eject (int num);
extern int disk_empty (int num);
extern void disk_insert (int num, const char *name);
extern void DISK_check_change (void);
extern FILE *DISK_validate_filename (const char *, int, int *);
extern void DISK_handler (void);
extern void DISK_update (void);
extern void DISK_reset (void);

extern void DSKLEN (uae_u16 v, int hpos);
extern uae_u16 DSKDATR (int hpos);
extern uae_u16 DSKBYTR (int hpos);
extern void DSKDAT (uae_u16);
extern void DSKSYNC (uae_u16);
extern void DSKPTL (uae_u16);
extern void DSKPTH (uae_u16);

class DiskDrives {
public:
	void init (void);
	void select (uae_u8 data);
	uae_u8 status (void);
	void disk_eject (int num);
	int disk_empty (int num);
	void disk_insert (int num, const char *name);
	void check_change (void);
	FILE *DISK_validate_filename (const char *, int, int *);
	
	void handler (void);
	
	void update (void);
	void reset (void);
	
	void DSKLEN (uae_u16 v, int hpos);
	uae_u16 DSKDATR (int hpos);
	uae_u16 DSKBYTR (int hpos);
	void DSKDAT (uae_u16);
	void DSKSYNC (uae_u16);
	void DSKPTL (uae_u16);
	void DSKPTH (uae_u16);
	
	
private:
	
};