#include <stdio.h>

typedef enum syllable{
Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Si=7
} Syllable;

void Sound(Syllable sy){
  switch(sy){
    case Do:
      puts("도는 하얀 도라지"); return;
    case Re:
      puts("레는 상큼한 레몬"); return;
    case Mi:
      puts("미는 향긋한 미나리"); return;
    case Fa:
      puts("파는 예쁜 파랑새"); return;
    case So:
      puts("솔은 솔솔 솔바람"); return;
    case La:
      puts("라는 라디오고요"); return;
    case Si:
      puts("시는 재밌는 시소"); return;
  }
  puts("switch~case sentence finish");
}

int main(void) {
  Syllable tone;
  
  for(tone=Do;tone<=Si;tone+=1){
    Sound(tone);
  }
  return 0;
}