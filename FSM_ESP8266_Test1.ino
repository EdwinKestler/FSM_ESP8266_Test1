#define DEBUG 1
#define STATE_IDLE 0
#define STATE_1 1
#define STATE_2 2
#define STATE_3 3
#define TIME_DELAY 3000 //sets delay value in all delay() calls

int fsm_state; // our state variable

void setup() {
  Serial.begin(115200); // start serial communication at 9600 bps:
  if(DEBUG){
    Serial.println("Serial communication started");
  }
  fsm_state = STATE_IDLE; // state variable initialization
}

void loop(){
  switch(fsm_state) { // start of switch case
    
    case STATE_IDLE:
    //do instructions in STATE_IDLE
    delay(TIME_DELAY);
    if(DEBUG){
      Serial.println("I am IDLE ");
    }
    fsm_state = STATE_1;
    break;
    case STATE_1:
    //do instructions in STATE_1
    delay(TIME_DELAY);
    if(DEBUG){
      Serial.println("I am in STATE_1 ");
    }
    fsm_state = STATE_2;
    break;
    case STATE_2:
    //do instructions in STATE_2
    delay(TIME_DELAY);
    if(DEBUG){
      Serial.println("I am in STATE_2 ");
    }
    fsm_state = STATE_3;
    break;
    case STATE_3:
    //do instructions in STATE_3
    delay(TIME_DELAY);
    if(DEBUG){
      Serial.println("I am in STATE_3 ");
    }
    fsm_state = STATE_IDLE;
    break;
  }//end of switch case
}// end of loop()

