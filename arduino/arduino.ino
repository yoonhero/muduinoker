int piezoPin = 8; // Connect buzzer to the d8 pin

// ----------------------------------
// ADD YOUR MELODY AND NOTE DATA HERE
// ----------------------------------

void setup() { 
  pinMode (piezoPin, OUTPUT); 
} 

void loop() { 
  for (int i = 0; i < notes.length; i++) { 
    tone (piezoPin, notes[i], tempo); 
    delay(200); 
  } 
  delay(100); 
}