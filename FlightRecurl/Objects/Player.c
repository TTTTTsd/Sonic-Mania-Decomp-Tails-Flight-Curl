#include "Player.h"
#include "GameAPI/Game.h"

ObjectPlayer *Player;

void Player_State_TailsFlight_Hook(void) {
	RSDK_THIS(Player); 
	if (self->jumpPress && self->down) {
            RSDK.SetSpriteAnimation(self->aniFrames, ANI_JUMP, &self->animator, false, 0);
            self->state = Player_State_Air;  
	}
}