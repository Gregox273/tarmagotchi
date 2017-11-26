#include "Hardware.h"
#include "status.h"
#include "sensors.h"
#include <stdlib.h>
#include <cmath>
#include <iostream>
#include <string>
#include <limits>
#include "images.h"
#include "eyes.h"
#include "rtos.h"

DigitalOut  led1(PD_9, 1);
DigitalOut  led2(PA_12, 1);
DigitalOut  led3(PD_8, 1);
DigitalOut  led4(PA_11, 1);
DigitalOut  led5(PD_9, 1);
DigitalOut  led6(PE_0, 1);
DigitalOut  led7(PB_6, 1);
DigitalOut  led8(PC_2, 1);
Thread thread;

Mutex wait_mtx;

//Mail<Status, 1> mail_box;

Status tarm;

InterruptIn button_1(PF_2);
InterruptIn button_2(PG_4);

void lcd_print(const char* message) {
    //lcd.cls();
    lcd.locate(0, 3);
    lcd.printf(message);
}
Sht31 sht31(PF_0, PF_1);
void read_temp() {
    float t = sht31.readTemperature();
    float h = sht31.readHumidity();
    char val[32];
    sprintf(val, "TEMP: %3.2fC, HUM: %3.2f%%", t, h);
    lcd_print(val);
}


void update_hunger(){
    tarm.hunger.set_value(0);
    }

void extraEmotion(int extraEmotions) {
    lcd.cls();
    if (extraEmotions ==1){
        //Surprised
        wait_mtx.lock();
        lcd.print_bm(eyesSurprised,41,0);
        lcd.copy_to_lcd();
        wait(1);
        wait_mtx.unlock();
    } else if (extraEmotions ==2){
        //Dizzy
        wait_mtx.lock();
        lcd.print_bm(eyesDizzy,41,0);
        lcd.copy_to_lcd();
        wait(3);
        wait_mtx.unlock();
    } else if (extraEmotions ==3){
        //Love
        wait_mtx.lock();
        lcd.print_bm(eyesLove,41,0);
        lcd.copy_to_lcd();
        wait(5);
        wait_mtx.unlock();
    } else if (extraEmotions ==4){
        //Dollar
        wait_mtx.lock();
        lcd.print_bm(eyesDollar,41,0);
        lcd.copy_to_lcd();
        wait(3);
        wait_mtx.unlock();
    }
}


void cycleExtraEmotions() {
    //extraEmotions = rand() % 4 + 1;
    extraEmotion(3);
}

void eyesThread() {
    
    while (alive ==1){
        //osEvent evt = mail_box.get();
        //if (evt.status == osEventMail){
        //Status *mail = (Status*)evt.value.p;
        //Status tarm = *mail;
        
        
        lcd.cls();
        randomNumber1 = rand() % 3 + 1; //Random number 1-3 for looking around
        randomNumber2 = rand() % 4 + 1; //Random number 1-4 for blinking
        
        if (randomNumber2 ==1) {
            
            lcd.fillrect(41,  eyeHeight , 87, eyeHeight +1, 1); //Blink height dependent on happiness
            Thread::wait(300);
            lcd.cls();
            //Length of blink based on tiredness

        }
        
        
            
    
        //Find which emotion is greatest
        if (tarm.discomfort.get_value() >= emotionTrigger && tarm.discomfort.get_value() >= tarm.hunger.get_value() && tarm.discomfort.get_value() >=tarm.tiredness.get_value()&& tarm.discomfort.get_value() >=tarm.unfitness.get_value()&& tarm.discomfort.get_value() >= tarm.boredom.get_value()) {
            //discomfort is largest
            lcd.print_bm(eyesDiscomfort,41,0);
            lcd.copy_to_lcd();
            Thread::wait(300);
            lcd.cls();
            lcd.print_bm(eyesDiscomfort,39,0);
            lcd.copy_to_lcd();
            Thread::wait(300);
            lcd.cls();
            lcd.print_bm(eyesDiscomfort,43,0);
            lcd.copy_to_lcd();
            Thread::wait(300);
            lcd.cls();
            lcd.print_bm(eyesDiscomfort,39,0);
            lcd.copy_to_lcd();
            Thread::wait(300);
            lcd.cls();
            lcd.print_bm(eyesDiscomfort,41,0);
            eyeHeight = 20;
            lcd_print("Uncomfy");
        } else if (tarm.tiredness.get_value() >= emotionTrigger &&tarm.tiredness.get_value()> tarm.discomfort.get_value() &&tarm.tiredness.get_value()> tarm.hunger.get_value() &&tarm.tiredness.get_value()>tarm.unfitness.get_value()&&tarm.tiredness.get_value()> tarm.boredom.get_value()) {
            //tiredness is largest
            eyeHeight = 20;
            if (randomNumber2 ==2) {
                Thread::wait(300);
                lcd.fillrect(41,  eyeHeight , 87, eyeHeight +1, 1); //Blink height dependent on happiness
                Thread::wait(300);
                lcd.cls();
                //Length of blink based on tiredness

            }
            lcd.print_bm(eyesTired,41,0);
            lcd_print("Tired");

        } else if (tarm.unfitness.get_value() >= emotionTrigger &&tarm.unfitness.get_value()> tarm.discomfort.get_value() &&tarm.unfitness.get_value()>tarm.tiredness.get_value()&&tarm.unfitness.get_value()> tarm.hunger.get_value() &&tarm.unfitness.get_value()> tarm.boredom.get_value()) {
            //unfit is largest
            lcd.print_bm(eyesUnfit,41,0);
            eyeHeight = 20;
            lcd_print("Unfit");
        } else if (tarm.boredom.get_value() >= emotionTrigger &&tarm.boredom.get_value()> tarm.discomfort.get_value() &&tarm.boredom.get_value()>tarm.tiredness.get_value()&&tarm.boredom.get_value()>tarm.unfitness.get_value()&&tarm.boredom.get_value()> tarm.hunger.get_value()) {
            //bored is largest
            lcd.print_bm(eyesBored,41,0);
            eyeHeight = 18;
            lcd_print("Bored");
        } else if (tarm.hunger.get_value() >= emotionTrigger && tarm.hunger.get_value() > tarm.discomfort.get_value() && tarm.hunger.get_value() >tarm.tiredness.get_value()&& tarm.hunger.get_value() >tarm.unfitness.get_value()&& tarm.hunger.get_value() > tarm.boredom.get_value()) {
            //bored is largest
            lcd.print_bm(eyesHungry,41,0);
            eyeHeight = 16;
            lcd_print("Hungry");
        } else {
            //Neutral mode
            eyeHeight = 16;
            if (randomNumber1 == 1) {
                 lcd.print_bm(eyesNeutral,41,0);
            } else if (randomNumber1 == 2) {
                 lcd.print_bm(eyesLeft,41,0);
            } else if (randomNumber1 == 3) {
                 lcd.print_bm(eyesRight,41,0);
            }
        
        
        }    
        lcd.copy_to_lcd();
        //char val[32];
        //sprintf(val, "Tiredness: %d", tiredness);
        //lcd_print(val);
        
        //mail_box.free(mail);
        Thread::wait(1000);
            
            
        
        
    }

    
}






// main() runs in its own thread in the OS
int main() {
    cout<<"Here"<<endl;
    Hardware_init();
    //Status tarm;
    
    thread.start(eyesThread);
    //thread.start(extraEmotion);
    
    tarm.happiness.set_value(100);
    tarm.happiness.set_value(-20+(100-tarm.unfitness.get_value())+(100-tarm.discomfort.get_value())+(100-tarm.tiredness.get_value())+(100-tarm.hunger.get_value())+(100-tarm.boredom.get_value()));
    
    int i=0;
    int shakes = 0;
    tarm.unfitness.set_value(100);
    while (true) {
        
        wait_mtx.lock();
        
        //lcd.printf("Happiness: %u", tarm.happiness.get_value());
        tarm.happiness.set_value(-20+(0.25*(0.25*(100-tarm.unfitness.get_value())+(100-tarm.discomfort.get_value())+(100-tarm.tiredness.get_value())+(100-tarm.hunger.get_value())+(100-tarm.boredom.get_value()))));
        //led2.write(0);
        //led3=1;
        //led1=1;
        //led4=1;
        if(tarm.happiness.get_value()>=10) {
            led1=0;
            }
        if(tarm.happiness.get_value()<10){
            led1=1;
            }
        if(tarm.happiness.get_value()>=20) {
            led2=0;
           }
        if(tarm.happiness.get_value()<20) {
            led2=1;
           }
        if(tarm.happiness.get_value()>=40) {
            led3=0;
            }
        if(tarm.happiness.get_value()<40) {
            led3=1;
            }
        if(tarm.happiness.get_value()>=50) {
            led4=0;
            }
         if(tarm.happiness.get_value()<50) {
            led4=1;
            }
        
        //TEMP select random extra emotion
        button_2.rise(&cycleExtraEmotions);
           
               
        sensors Sensors=GetSensors();
        //State Selection
        if(accel.shaken()) {
            shakes++;
            tarm.boredom.set_value(0);
            tarm.unfitness.set_value(tarm.unfitness.get_value()-20); //set_add(-20) ?
            if (shakes%6==3){
                extraEmotion(2);
            } else {
                extraEmotion(1);
            }
            
        }
        if(Sensors.visible < 100) {
            tarm.tiredness.set_value(0);
            }
        
        button_1.rise(&update_hunger);
        
        float temp_wt=((28-abs(Sensors.temperature))*20)-10;
        float air_wt=Sensors.humidity*0.3f+Sensors.air_quality_co2*0.01f+Sensors.air_quality_tvoc*0.01f;
        float disc_wt=temp_wt;//+air_wt;
        tarm.discomfort.set_value((uint8_t)((int)disc_wt));
      
        

        if(i%2==0){
            tarm.update(); 
        }
    
   
        i++;
        Thread::wait(10);
        //Status *mail = mail_box.alloc();
        //*mail = tarm;
        //mail_box.put(mail);
        wait_mtx.unlock();
    }
    
   return 0; 
}
