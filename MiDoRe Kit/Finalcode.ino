void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT); //2
  pinMode(3,OUTPUT); //3
  pinMode(11,OUTPUT);//4
  pinMode(4,OUTPUT);//5
  pinMode(6,OUTPUT);//6
  pinMode(10,OUTPUT);//7
  Serial.begin(9600);
  
}

  
void loop() {
  // put your main code here, to run repeatedly:
  
  int notes[8][4]={{3,11,0,0},  
                   {3,11,4,0},
                   {9,3,4,0},
                   {9,4,0,0},
                   {9,3,11,0},
                   {9,3,11,4},
                   {9,11,4,0},
                   {9,3,6,10}}; //{A,B,C,D,E,F,G,R}
  int song[]={2,2,6,6,0,0,6,7,5,5,4,4,3,3,2,7,6,6,5,5,4,4,3,7,6,6,5,5,4,4,3,7,2,2,6,6,0,0,6,7,5,5,4,4,3,3,2,7};  //{C,C,G,G,A,A,G}]
  int len = sizeof(song)/sizeof(song[0]);
  for(int i=0;i<len;i++)
  { 
     int x=song[i];
     for(int j=0;j<4;j++)
     {
     analogWrite(notes[x][j],250);
     //Serial.println(notes[x][4]);
     Serial.print("Activated pin is: ");
     Serial.println(notes[x][j]);   
     //delay(60);
     }
     delay(60);
     for(int k=0;k<4;k++)
     {
      analogWrite(notes[x][k],0);
      Serial.print("Deactivated pin is ");
      Serial.println(notes[x][k]);   
     }
     delay(1000);
    
}
delay(5000);
}
