
//Matthew Domenick 
//back of tv lights to make it look cool




#include<Metro.h>


int button_change_delay_multi = 2;
int button_change_hold_time = 3;


bool button_delay_state = false;
bool button_hold_state = false;




//controls the milliseconds used for fade in loops
// 1 is real fast
float fade_in_dim = 1;

// multiplier for all diming loops
// 1 is real fast
// 5 is decent fast
// 10 is nice fast
// 20 is soft
// 35 is slow
// 50 is  gentle lighting    0,1, 2, 3, 4, 5
static int delay_array [] = {1,5,10,20,35,50};

int delay_multi =  delay_array[4];


//controls the milliseconds used for fade out loops
int fade_out_dim = 1;

//variable that is counted up to or down to, # is in milli seconds *now* because of Metro
int mirco_seconds = 255;


// milliseconds used for holding functions of all lights
//effects how long after a color is reached it holds that time in milliseconds
//                         0,     1,   2,   3,     4,   5,
const int hold_array [] = {500, 1000, 2000, 3000, 4000, 8000}; 

int hold_time = hold_array[2];


struct led
{
  int r=0;
  int g=0;
  int b=0;
};





//declare leds here
led LED1;

led LED2;

// fades out all led colors
void fade_out(led LED)
{

  
  
    digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, LOW);
  
}



//-------------------------------fade in and out red
void fade_in_red(led LED)
{

 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  


  




}

void hold_red(led LED)
{


     for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.r, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(500);
    

   

  }
  
}

void fade_out_red(led LED)
{
  
     for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    
  
    

   
 
  }


  
}

//-------------------------------fade in and out red
//-------------------------------fade in and out blue
void fade_in_blue(led LED)
{
     for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  
}



void hold_blue(led LED)
{

       for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.b, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(500);
    

   

  }
}



void fade_out_blue(led LED)
{
  
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    

   

  }
}

//-------------------------------fade in and out blue


//-------------------------------fade in and out green
void fade_in_green(led LED)
{
     for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  
}

void hold_green(led LED)
{

       for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.g, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(500);
    

   

  }
}

void fade_out_green(led LED)
{
  
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    

   

  }
}

//-------------------------------fade in and out green

//-------------------------------fade in and out purple
void fade_in_purple(led LED)
{
     for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  
}

void hold_purple(led LED)
{
       for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.r, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(500);
    

   

  }
}

void fade_out_purple(led LED)
{
  
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    

   

  }
}

//-------------------------------fade in and out purple


//-------------------------------fade in and out yellow
void fade_in_yellow(led LED)
{
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  
}

void hold_yellow(led LED)
{
       for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.r, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(500);
    

   

  }
}

void fade_out_yellow(led LED)
{
  
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    

   

  }
}

//-------------------------------fade in and out yellow



//-------------------------------fade in and out cyan
void fade_in_cyan(led LED)
{

   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   

  }
  
}

void hold_cyan(led LED)
{
       for (int fadeValue = 0 ; fadeValue <= hold_time; fadeValue += 1) {

    // sets the value (range from 0 to 255):

    
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds(500);
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(500);
    

   

  }
}


void fade_out_cyan(led LED)
{
  

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {

    // sets the value (range from 0 to 255):

    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_out_dim) * delay_multi);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_out_dim)) * delay_multi);
    

   

  }
}

//-------------------------------fade in and out cyan



//--------------------------------------------------------------------------------------fading one color to another RED TO ALL

void red_to_red (led LED)
{

      hold_red(LED);

  
  
}

void red_to_blue (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired

    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    }

    // ----------increaseing a color desired
    
   

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, LOW);
  
}

void red_to_green (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired

    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    
    // ----------decreaseing a color undesired
    
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
}


void red_to_purple (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    //digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.b, HIGH);
    //digitalWrite(LED.r, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired
    
    
    }

    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, LOW);
  
}

void red_to_yellow (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
   
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    
   

    }
    
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
  
}


void red_to_cyan (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, LOW);


// ----------decreaseing a color undesired
    
    
    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired

    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, LOW);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, HIGH);
  
}



//------------------------------------------------------------------------------------fading one color to another RED TO ALL






//--------------------------------------------------------------------------------------fading one color to another BLUE TO ALL

void blue_to_red (led LED)
{

      

        //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   digitalWrite(LED.b, LOW);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    
    }

    // ----------increaseing a color desired
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);

  
  
}

void blue_to_blue (led LED)
{

    hold_blue(LED);
  
}

void blue_to_green (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired
    
    }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
}


void blue_to_purple (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, LOW);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, HIGH);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    //digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    
    
    }

    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, LOW);
  
}

void blue_to_yellow (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.r, LOW);


    
    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired

    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    }
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
  
}


void blue_to_cyan (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    //digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    //digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, HIGH);
    
   delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired
    
    // ----------decreaseing a color undesired
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, HIGH);
  
}



//------------------------------------------------------------------------------------fading one color to another BLUE TO ALL









//--------------------------------------------------------------------------------------fading one color to another GREEN TO ALL

void green_to_red (led LED)
{

      

        //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   digitalWrite(LED.g, LOW);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    
    }

    // ----------increaseing a color desired
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);

  
  
}

void green_to_green (led LED)
{

    hold_green(LED);
  
}

void green_to_blue (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    }
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
}


void green_to_purple (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, LOW);
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.g, HIGH);

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {    
  
    digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, LOW);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }


  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, LOW);
  
}

void green_to_yellow (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    //digitalWrite(LED.g, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    // ----------increaseing a color desired
    
    
    }
    
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
  
}


void green_to_cyan (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    digitalWrite(LED.b, LOW);
    //digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.b, HIGH);
    //digitalWrite(LED.g, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired
    
    // ----------decreaseing a color undesired
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, HIGH);
  
}



//------------------------------------------------------------------------------------fading one color to another GREEN TO ALL







//--------------------------------------------------------------------------------------fading one color to another PURPLE TO ALL

void purple_to_red (led LED)
{

      

        //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, LOW);

    

    
    // ----------decreaseing a color undesired
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    digitalWrite(LED.b, HIGH);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    digitalWrite(LED.b, LOW);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);

  
  
}

void purple_to_green (led LED)
{

    //before loop start to turn fully on starting light color
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.r, HIGH);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    
    
    
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
}

void purple_to_blue (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.r, HIGH);

    // fade 
    
    
    // ----------decreaseing a color undesired
    
    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    
    digitalWrite(LED.r, HIGH);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, LOW);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
}


void purple_to_purple (led LED)
{

  hold_purple(LED);
  
}

void purple_to_yellow (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    //digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, HIGH);
    //digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired
   

    }
    
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
  
}


void purple_to_cyan (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.g, LOW);
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.r, HIGH);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.r, HIGH);
    //digitalWrite(LED.b, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.b, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    
    // ----------increaseing a color desired
    

    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, HIGH);
  
}



//------------------------------------------------------------------------------------fading one color to another PURPLE TO ALL




//--------------------------------------------------------------------------------------fading one color to another YELLOW TO ALL

void yellow_to_red (led LED)
{

      

        //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.b, LOW);

    // fade 
    
    
    // ----------decreaseing a color undesired
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
  
    
    
    digitalWrite(LED.g, HIGH);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    digitalWrite(LED.g, LOW);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);

  
  
}

void yellow_to_green (led LED)
{

    //before loop start to turn fully on starting light color
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.r, HIGH);

    // fade 
  
    
    // ----------decreaseing a color undesired
    
    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    
    digitalWrite(LED.r, HIGH);
    //digitalWrite(LED.b, HIGH);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.b, LOW);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
}

void yellow_to_blue (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.r, HIGH);


    // ----------decreaseing a color undesired
    
    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    
    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }



    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
}


void yellow_to_purple (led LED)
{

  

  
  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, HIGH);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, LOW);

    // fade 



    // ----------decreaseing a color undesired

    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
  
    
    
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, LOW);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }
    
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
  
}

void yellow_to_yellow (led LED)
{

  hold_yellow(LED);
  
}


void yellow_to_cyan (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.r, HIGH);


    

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired

    digitalWrite(LED.r, HIGH);
    digitalWrite(LED.b, LOW);
    //digitalWrite(LED.g, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    

    digitalWrite(LED.r, LOW);
    digitalWrite(LED.b, HIGH);
    //digitalWrite(LED.g, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);

    // ----------increaseing a color desired

    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, HIGH);
  digitalWrite(LED.g, HIGH);
  
}



//------------------------------------------------------------------------------------fading one color to another YELLOW TO ALL






//--------------------------------------------------------------------------------------fading one color to another CYAN TO ALL

void cyan_to_red (led LED)
{

      

        //before loop start to turn fully on starting light color
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, HIGH);
    
    digitalWrite(LED.r, LOW);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    
   digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, LOW);
    digitalWrite(LED.r, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    }

    // ----------increaseing a color desired
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);

  
  
}

void cyan_to_green (led LED)
{

    //before loop start to turn fully on starting light color
      digitalWrite(LED.r, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, HIGH);

    // fade 
    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    
    //digitalWrite(LED.g, HIGH);
    digitalWrite(LED.b, HIGH);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
   // digitalWrite(LED.g, LOW);
    digitalWrite(LED.b, LOW);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.b, LOW);
  digitalWrite(LED.g, HIGH);
  
}

void cyan_to_blue (led LED)
{

  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, HIGH);

    // fade 
    
    
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    
    
    //digitalWrite(LED.r, HIGH);
    digitalWrite(LED.g, HIGH);
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);
    
    //digitalWrite(LED.r, LOW);
    digitalWrite(LED.g, LOW);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

   // ----------decreaseing a color undesired

  }

  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, LOW);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
}


void cyan_to_purple (led LED)
{

 
  //before loop start to turn fully on starting light color
      digitalWrite(LED.b, HIGH);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.r, LOW);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.g, HIGH);
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.b, LOW);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    digitalWrite(LED.g, LOW);
    //digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, HIGH);
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    

    // ----------increaseing a color desired
    
    // ----------decreaseing a color undesired

    }
    
    
  
  //after loop end to turn fully on ending light color
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.b, HIGH);
  
  
}

void cyan_to_yellow (led LED)
{

  
  //before loop start to turn fully on starting light color
      digitalWrite(LED.r, LOW);
      digitalWrite(LED.g, HIGH);
      digitalWrite(LED.b, HIGH);

    // fade 
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {

    // ----------increaseing a color desired
    digitalWrite(LED.b, HIGH);
    digitalWrite(LED.r, LOW);
    //digitalWrite(LED.g, LOW);
    
    delayMicroseconds((mirco_seconds - floor(fadeValue * fade_in_dim)) * delay_multi);

    digitalWrite(LED.b, LOW);
    digitalWrite(LED.r, HIGH);
    //digitalWrite(LED.g, HIGH);
    
    delayMicroseconds(floor(fadeValue * fade_in_dim) * delay_multi);
    // ----------increaseing a color desired
    
    
    }
    
    

  //after loop end to turn fully on ending light color
  digitalWrite(LED.g, LOW);
  digitalWrite(LED.r, HIGH);
  digitalWrite(LED.g, HIGH);
  
}


void cyan_to_cyan (led LED)
{

  hold_cyan(LED);
}



//------------------------------------------------------------------------------------fading one color to another CYAN TO ALL








void color(led LED1)
{
  

  int i = floor(random(1,7)); // led 1 color randomized
  
  
  Serial.print(i);
  


//-------------------fade in led1
  switch (i)
  {
    case 1:  
    fade_in_red(LED1);
   
    break;

    case 2:  
    fade_in_green(LED1);
    
    break;

    case 3:  
    fade_in_blue(LED1);
    
    break;

    case 4:  
    fade_in_yellow(LED1);
    
    break;
    
    case 5:  
    fade_in_cyan(LED1);
    
    break;

    case 6:  
    fade_in_purple(LED1);
    
    break;

    
    
  }
  //-------------------fade in led1






  
  //-------------------fade out led1
  switch (i)
  {
    case 1:  
    
    fade_out_red(LED1);
    break;

    case 2:  
    
    fade_out_green(LED1);
    break;

    case 3:  
    
    fade_out_blue(LED1);
    break;

    case 4:  
    
    fade_out_yellow(LED1);
    break;
    
    case 5:  
    
    fade_out_cyan(LED1);
    break;

    case 6:  
    
    fade_out_purple(LED1);
    break;

    
    
  }
  //-------------------fade out led1


}

void color(led LED1,int i)
{
  

  
  


//-------------------fade in led1
  switch (i)
  {
    case 1:  
    fade_in_red(LED1);
   
    break;

    case 2:  
    fade_in_green(LED1);
    
    break;

    case 3:  
    fade_in_blue(LED1);
    
    break;

    case 4:  
    fade_in_yellow(LED1);
    
    break;
    
    case 5:  
    fade_in_cyan(LED1);
    
    break;

    case 6:  
    fade_in_purple(LED1);
    
    break;

    
    
  }
  //-------------------fade in led1






  
  //-------------------fade out led1
  switch (i)
  {
    case 1:  
    
    fade_out_red(LED1);
    break;

    case 2:  
    
    fade_out_green(LED1);
    break;

    case 3:  
    
    fade_out_blue(LED1);
    break;

    case 4:  
    
    fade_out_yellow(LED1);
    break;
    
    case 5:  
    
    fade_out_cyan(LED1);
    break;

    case 6:  
    
    fade_out_purple(LED1);
    break;

    
    
  }
  //-------------------fade out led1


}







void chain()
{
  // does 1 random color and repeats it in a chain to all lights
  int i = floor(random(1,7)); // led 1 color randomized

  color(LED1, i);

  color(LED2, i);

  
 

 delay(hold_time);
  
}




void different_colors()
{
  // does seprate random functions for LEDS
  int i = floor(random(1,7)); // led 1 color randomized
  int z = floor(random(1,7)); // led 1 color randomized
  
  color  (LED1);

  color(LED2);
  
  
}


void chain_fade_to_colors()
{
  

  // struct for the number of lights to converge back colors, n is the color it was randomized, LED is it's LED pins
struct da_lights{
  int n; // n is the current color for the light
  int o; // o is it's numbered order
  led LED; // LED is it's pin numbers
  
};



// repeat for each rgb led. There is no way to know the pin numbers unless you set them. this can't be changed
da_lights frist_light;
frist_light.LED = LED1;

da_lights second_light;
second_light.LED = LED2;


//update this int to be the total number of lights 
int big_o = 2;
 

// my_list is the number of lights being used, update to how many lights you need, this is also determines fade out array
da_lights my_list[big_o];
my_list[0] = frist_light;
my_list[1] = second_light;







for (int a = 0; a < big_o; a++)
{

Serial.println("HI MATT");
  
// sets lights to random colors, then all colors fade into that color one at a time
  int i = floor(random(1,7)); // starting colors randomized
  

switch (i)
  {
    case 1:  
    fade_in_red(my_list[a].LED);
    my_list[a].n = i;  // current random color becomes this light's n value
    my_list[a].o = a;  // current a value becimes this light's o value
    break;

    case 2:  
    fade_in_green(my_list[a].LED);
    my_list[a].n = i;
    my_list[a].o = a;  
    break;

    case 3:  
    fade_in_blue(my_list[a].LED);
    my_list[a].n = i;
    my_list[a].o = a;  
    break;

    case 4:  
    fade_in_yellow(my_list[a].LED);
    my_list[a].n = i;
    my_list[a].o = a;  
    break;
    
    case 5:  
    fade_in_cyan(my_list[a].LED);
    my_list[a].n = i;
    my_list[a].o = a;  
    break;

    case 6:  
    fade_in_purple(my_list[a].LED);
    my_list[a].n = i;
    my_list[a].o = a;  
    break;
  }

}

  
  

  
 //------------
 //  1 = red
 //  2 = green
 //  3 = blue
 //  4 = purple
 //  5 = yellow
 //  6 = cyan
 //
 //-------



 int c = floor(random(1,7)); // convergeing color randomized




//put the highest o value here*
for(int lights = 0; lights < big_o; lights++ )
{

Serial.println("yo");

//master block determines what the converging color is
switch (c) {
  case  1:
  // all red statments
  
  
  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_red(my_list[lights].LED);
  break;
  case 2:
  green_to_red(my_list[lights].LED);
  break;
  case 3:
  blue_to_red(my_list[lights].LED);
  break;
  case 4:
  purple_to_red(my_list[lights].LED);
  break;
  case 5:
  yellow_to_red(my_list[lights].LED);
  break;
  case 6:
  cyan_to_red(my_list[lights].LED);
  break;
  

  
    
  }



  
  break;
  case  2:
  // all green statments

  
  
  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_green(my_list[lights].LED);
  break;
  case 2:
  green_to_green(my_list[lights].LED);
  break;
  case 3:
  blue_to_green(my_list[lights].LED);
  break;
  case 4:
  purple_to_green(my_list[lights].LED);
  break;
  case 5:
  yellow_to_green(my_list[lights].LED);
  break;
  case 6:
  cyan_to_green(my_list[lights].LED);
  break;
  

  
    
  }



  
  break;
  case  3:
  // all blue statments

  
  
  

  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_blue(my_list[lights].LED);
  break;
  case 2:
  green_to_blue(my_list[lights].LED);
  break;
  case 3:
  blue_to_blue(my_list[lights].LED);
  break;
  case 4:
  purple_to_blue(my_list[lights].LED);
  break;
  case 5:
  yellow_to_blue(my_list[lights].LED);
  break;
  case 6:
  cyan_to_blue(my_list[lights].LED);
  break;
    
  }




  
  break;
  case  4:
  // all purple statments



  
  
  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_purple(my_list[lights].LED);
  break;
  case 2:
  green_to_purple(my_list[lights].LED);
  break;
  case 3:
  blue_to_purple(my_list[lights].LED);
  break;
  case 4:
  purple_to_purple(my_list[lights].LED);
  break;
  case 5:
  yellow_to_purple(my_list[lights].LED);
  break;
  case 6:
  cyan_to_purple(my_list[lights].LED);
  break;


  }

  
  break;
  case  5:
  // all yellow statments


  
  
  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_yellow(my_list[lights].LED);
  break;
  case 2:
  green_to_yellow(my_list[lights].LED);
  break;
  case 3:
  blue_to_yellow(my_list[lights].LED);
  break;
  case 4:
  purple_to_yellow(my_list[lights].LED);
  break;
  case 5:
  yellow_to_yellow(my_list[lights].LED);
  break;
  case 6:
  cyan_to_yellow(my_list[lights].LED);
  break;

  }

  
  break;
  case  6:
  // all cyan statments

  
  
  switch (my_list[lights].n){
  // the lights random color
  case 1:
  red_to_cyan(my_list[lights].LED);
  break;
  case 2:
  green_to_cyan(my_list[lights].LED);
  break;
  case 3:
  blue_to_cyan(my_list[lights].LED);
  break;
  case 4:
  purple_to_cyan(my_list[lights].LED);
  break;
  case 5:
  yellow_to_cyan(my_list[lights].LED);
  break;
  case 6:
  cyan_to_cyan(my_list[lights].LED);
  break;

  }

  
  break;
   
  
}// master switch block

}// for loop for lights
 
 
//all the lights are the same color and hold for this time in milliseconds
 delay(hold_time);

  
 //------------
 //  1 = red
 //  2 = green
 //  3 = blue
 //  4 = purple
 //  5 = yellow
 //  6 = cyan
 //
 //-------

 

 

fade_out(LED1);
fade_out(LED2);
 
 delay(hold_time);
  
} // end for chain to function






void check_buttons(){

  bool temp_button1 = button_delay_state;
  bool temp_button2 = button_hold_state;

  

  if(temp_button1)
  {

    //increament 1 in delay time from delay_array
    switch (delay_multi)
    {
  
      case 1:
      delay_multi = delay_array[1];
      break;
      case 5:
      delay_multi = delay_array[2];
      break;
      case 10:
      delay_multi = delay_array[3];
      break;
      case 20:
      delay_multi = delay_array[4];
      break;
      case 35:
      delay_multi = delay_array[5];
      break;
      case 50:
      delay_multi = delay_array[0];
      break;

  }
    
    
  }

  temp_button1 = false;

  if(temp_button2)
  {

    //increament 1 in delay time
    
  }

  temp_button2 = false;

  
}








// button pins






void setup() 

{
  // put your setup code here, to run once:

// SETS THE PINS FOR BUTTONS
pinMode(button_change_delay_multi, INPUT);
pinMode(button_change_hold_time, INPUT);




  

  //declare what pins each led uses here

  

  LED1.r = 4;
  LED1.g = 5;
  LED1.b = 6;

  LED2.r = 9;
  LED2.g = 10;
  LED2.b = 11;
  


  Serial.begin(9600);

  //declare each of those pins as output

  pinMode(LED1.r, OUTPUT);
  pinMode(LED1.g, OUTPUT);
  pinMode(LED1.b, OUTPUT);

  pinMode(LED2.r, OUTPUT);
  pinMode(LED2.g, OUTPUT);
  pinMode(LED2.b, OUTPUT);


  

}

// set what function to display lights
void loop()
{
  // put your main code here, to run repeatedly:
 

  button_delay_state = digitalRead(button_change_delay_multi);
  if(button_delay_state)
  {
  //increament 1 in delay time from delay_array
    switch (delay_multi)
    {
  
      case 1:
      delay_multi = delay_array[1];
      break;
      case 5:
      delay_multi = delay_array[2];
      break;
      case 10:
      delay_multi = delay_array[3];
      break;
      case 20:
      delay_multi = delay_array[4];
      break;
      case 35:
      delay_multi = delay_array[5];
      break;
      case 50:
      delay_multi = delay_array[0];
      break;
    }
  }

  button_delay_state = false;





  button_hold_state = digitalRead(button_change_hold_time);
  if(button_hold_state)
  {
  //increament 1 in delay time from delay_array
    switch (hold_time)
    {
  
      case 500:
      hold_time = hold_array[1];
      break;
      case 1000:
      hold_time = hold_array[2];
      break;
      case 2000:
      hold_time = hold_array[3];
      break;
      case 3000:
      hold_time = hold_array[4];
      break;
      case 4000:
      hold_time = hold_array[5];
      break;
      case 8000:
      hold_time = hold_array[0];
      break;
    }
  }

Serial.println();
Serial.println(button_hold_state);
Serial.println(hold_time);
Serial.println();


  button_hold_state = false;





  
 
  //different_colors();
  //chain();

  chain_fade_to_colors();


  /*

  fade_in_red(LED1);
  delay(2000);

  red_to_cyan(LED1);
  delay(2000);

  fade_out_cyan(LED1);
*/

}
