#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Kickboxer increases the power of kicking moves", s16 damage)
{
    u32 move;
    u16 ability;
    PARAMETRIZE { move = MOVE_BLAZE_KICK; ability = ABILITY_KICKBOXER; }
    PARAMETRIZE { move = MOVE_BLAZE_KICK; ability = ABILITY_STEADFAST; }
    PARAMETRIZE { move = MOVE_BODY_SLAM; ability = ABILITY_KICKBOXER; }
    PARAMETRIZE { move = MOVE_BODY_SLAM; ability = ABILITY_STEADFAST; }

    GIVEN {
        ASSUME(IsKickingMove(MOVE_BLAZE_KICK));
        ASSUME(!IsKickingMove(MOVE_BODY_SLAM));
        PLAYER(SPECIES_GALLADE) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.2), results[0].damage);
        EXPECT_EQ(results[2].damage, results[3].damage);
    }
}