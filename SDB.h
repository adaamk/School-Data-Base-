bool SDB_IsFull ();
uint8 SDB_GetUsedSize();
bool SDB_AddEntry(void);
void SDB_DeletEntry (uint32 id);
bool SDB_ReadEntry (uint32 id);
void SDB_GetList ();
bool SDB_IsIdExist (uint32 id);
void SDB_APP ();
void SDB_action (uint8 choice);


typedef struct SimpleDb
{
  uint32 Student_ID;
  uint32 Student_year;
  uint32 Course1_ID;
  uint32 Course1_grade;
  uint32 Course2_ID;
  uint32 Course2_grade;
  uint32 Course3_ID;
  uint32 Course3_grade;
} student;


