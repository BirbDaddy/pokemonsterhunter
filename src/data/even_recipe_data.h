#include "even_crafting.h"

const struct CraftingIngredient sPotionIngredients[] =
{
    [0] =
    {
        .item = ITEM_ORAN_BERRY,
        .count = 1,
        .isConsumed= TRUE,
    },
};

const struct CraftingIngredient sMegaPotionIngredients[] =
{
    [0] =
    {
        .item = ITEM_ORAN_BERRY,
        .count = 1,
        .isConsumed= TRUE,
    },
    [1] =
    {
        .item = ITEM_FRESH_WATER,
        .count = 1,
        .isConsumed= TRUE,
    },
};

const struct CraftingRecipe sCraftingRecipes[] =
{
    [RECIPE_POTION] =
    {
        .outputItem = ITEM_POTION,
        .outputQuantity = 1,
        .ingredientCount = 1,
        .numDifferentIngredients = 1,
        .ingredients = sPotionIngredients,
        .recipeName = _("Potion"),
        .category = RECIPE_CATEGORY_MEDICINE,
        .isDiscoverable = TRUE,
    },
    [RECIPE_MEGA_POTION] =
    {
        .outputItem = ITEM_MEGA_POTION,
        .outputQuantity = 1,
        .ingredientCount = 2,
        .numDifferentIngredients = 2,
        .ingredients = sMegaPotionIngredients,
        .recipeName = _("Mega Potion"),
        .category = RECIPE_CATEGORY_MEDICINE,
        .isDiscoverable = TRUE,
    }
};

const u8 sItemIngredientSettings[ITEMS_COUNT] =
{
    //  Add ingredients here with all the flags that they should have
    [ITEM_ORAN_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_SITRUS_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_POMEG_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_KEE_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_MARANGA_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_PECHA_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_RAWST_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_FRESH_WATER] = 1u << INGREDIENT_CATEGORY_FLUID | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_ABSORB_BULB] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
};
