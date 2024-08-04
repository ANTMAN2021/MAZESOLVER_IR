


#define m1 13  // Right Motor MA1
#define m2 12  // Right Motor MA2
#define m3 9   // Left Motor MB1
#define m4 8   // Left Motor MB2
#define e1 11  // Right Motor Enable Pin EA
#define e2 10  // Left Motor Enable Pin EB

#define IR A1
#define IR2 A2
#define IR3 A3
#define IR4 A4
#define IR5 A5
int ir1;
int ir2;
int ir3;
int ir4;
int ir5;

//*************Function Declarations*************//
void gpioInit(void);
void readSensors(void);
bool stopmouse(void);
bool moveforward(void);
void pid(void);
//void conditions(void);
bool forward(void);
bool moveright(void);
bool moveleft(void);
bool backward(void);
bool forward(void);
int P, D, I, previousError, PIDvalue, error;
int lsp, rsp;
int lfspeed = 200;                               

float Kp = 7.5 ;
float Kd = 1.7 ;
float Ki = 0 ;

