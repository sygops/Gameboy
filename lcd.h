struct colour {
    unsigned char r, g, b;
} colour;

struct LCD {
    int windowX;
    int windowY;
    int scrollX;
    int scrollY;
    int line;
    int lyCompare;
} LCD;

// LCD Control 
struct LCDC {
    int lcdDisplay; // 7
    int windowTileMap; // 6
    int windowDisplay; // 5
    int tileDataSelect; // 4
    int tileMapSelect; // 3
    int spriteSize; // 2
    int spriteDisplay; // 1
    int bgWindowDisplay; // 0
} LCDC;

// LCD STAT
struct LCDS {
    int lyInterrupt;
    int oamInterrupt;
    int vblankInterrupt;
    int hblankInterrupt;
    int lyFlag;
    int modeFlag;
} LCDS;

void setLCDC(unsigned char address);
void setLCDS(unsigned char address);
void setBGPalette(unsigned char address);
void setSpritePalette1(unsigned char address);
void setSpritePalette2(unsigned char address);
void setScrollX(unsigned char address);
void setScrollY(unsigned char address);
void setWindowX(unsigned char address);
void setWindowY(unsigned char address);
void setLyCompare(unsigned char address);

unsigned char getLCDC(void);
unsigned char getLCDS(void);
unsigned char getScrollX(void);
unsigned char getScrollY(void);
unsigned char getWindowX(void);
unsigned char getWindowY(void);
int getLine(void);