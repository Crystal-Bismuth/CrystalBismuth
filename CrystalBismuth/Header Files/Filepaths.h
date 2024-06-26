#pragma once
#include <string>

const std::string RESOURCES_DIRECTORY = "Resource Files/";
const std::string ANIMATIONS_DIRECTORY = "Animations/";
const std::string EGG_DIRECTORY = "Eggs/";
const std::string CHICKS_DIRECTORY = "Chicks/";
const std::string CHICKENS_DIRECTORY = "Chickens/";
const std::string BACKGROUNDS_DIRECTORY = "Backgrounds/";

const std::string CHICK_FILENAME = "Chick.png";
const std::string CHICKEN_FILENAME = "Chicken.png";
const std::string EGG_FILENAME = "Chicken Egg.png";
const std::string EGG_HATCHING_FILENAME = "Egg Hatching.png";
const std::string CHICK_GROWING_FILENAME = "Chick Growing.png";
const std::string CHICK_WALKING_FILENAME = "Chick Walking.png";
const std::string CHICKEN_WALKING_FILENAME = "Chicken Walking.png";
const std::string CHICKEN_DEATH_FILENAME = "Chicken Death.png";
const std::string CHICKEN_BLACKHOLE_DEATH_FILENAME = "Blackhole Death-Sheet.png";
const std::string CHICK_CHAO_GROW_FILENAME = "Chick Chao.png";
const std::string CHICK_MORPH_FILENAME = "Chick Grow 3-Sheet.png";
const std::string CHICK_FF7HATCH_FILENAME = "Chicken Hatching 3 Sheet.png";
const std::string CHICKEN_MAGIC_CIRCLE_FILENAME = "Chicken Fall Into Circle.png";

const std::string FUNKY_CHICKEN_FILENAME = "Funky Chicken Evolution.png";
const std::string FUNKY_CHICKEN_WALKING_FILENAME = "Funky Chicken Evolution Walking.png";

const std::string UI_DIRECTORY = "UI/";
const std::string MAIN_BUTTONS_DIRECTORY = "Main Buttons/";
const std::string TREE_BUTTONS_DIRECTORY = "Tree Buttons/";
const std::string BUTTONS_DIRECTORY = "Buttons/";
const std::string BUILDINGS_DIRECTORY = "Buildings/";

const std::string RESEARCH_TREES_DIRECTORY = "Research Tree Layouts/";
const std::string SYRINGES_DIRECTORY = "Syringes/";
const std::string CURRENCY_DIRECTORY = "Currency/";


const std::string SETTINGS_BUTTON_FILENAME = "Settings Button.png";
const std::string SETTINGS_BUTTON_ANIMATION_FILENAME = "Settings Button Hover Animation.png";

const std::string SHOP_BUTTON_FILENAME = "Shop Button.png";
const std::string COOP_BUTTON_FILENAME = "Coop Button.png";
const std::string PEN_BUTTON_FILENAME = "Pen Button.png";
const std::string HATCHERY_BUTTON_FILENAME = "Hatchery Button.png";
const std::string SCIENCE_BUTTON_FILENAME = "Science Button.png";

const std::string WINDOWS_DIRECTORY = "Windows/";
const std::string BUTTON_WINDOWS_DIRECTORY = "Button Windows/";
const std::string BASE_WINDOW_FILENAME = "Base Window.png";
const std::string COOP_WINDOW_FILENAME = "Coop Window.png";
const std::string PEN_WINDOW_FILENAME = "Pen Window.png";
const std::string HATCHERY_WINDOW_FILENAME = "Hatchery Window.png";
const std::string SCIENCE_WINDOW_FILENAME = "Science Window.png";

const std::string MONEY_UI_FILENAME = "Money UI.png";
const std::string SCIENCE_UI_FILENAME = "Science UI.png";

const std::string BACKGROUND_FILENAME = "Background (TILES).png";

const std::string BASE_RESEARCH_TREE_FILENAME = "Base Research Tree.png";
const std::string COOP_TREE_BUTTON_FILENAME = "Coop Building Button.png";
const std::string BASIC_TREE_BUTTON_FILENAME = "Basic Button.png";
const std::string ADVANCED_TREE_BUTTON_FILENAME = "Advanced Button.png";
const std::string PEN_TREE_BUTTON_FILENAME = "Pen Building Button.png";
const std::string HATCHERY_TREE_BUTTON_FILENAME = "Hatchery Building Button.png";

const std::string SCIENCE_RESEARCH_TREE_FILENAME = "Science Research Tree.png";
const std::string SCIENCE_TREE_BUTTON_FILENAME = "Science Building Button.png";

const std::string PURPLE_SYRINGE_FILENAME = "Purple Syringe.png";
const std::string BLACK_SYRINGE_FILENAME = "Black Syringe.png";
const std::string BLUE_SYRINGE_FILENAME = "Blue Syringe.png";
const std::string LIGHT_BLUE_SYRINGE_FILENAME = "Light Blue Syringe.png";
const std::string GREEN_SYRINGE_FILENAME = "Green Syringe.png";
const std::string YELLOW_SYRINGE_FILENAME = "Yellow Syringe.png";
const std::string RED_SYRINGE_FILENAME = "Red Syringe.png";

const std::string PURPLE_SYRINGE_BUTTON_FILENAME = "Purple Syringe Button.png";
const std::string BLACK_SYRINGE_BUTTON_FILENAME = "Black Syringe Button.png";
const std::string BLUE_SYRINGE_BUTTON_FILENAME = "Blue Syringe Button.png";
const std::string LIGHT_BLUE_SYRINGE_BUTTON_FILENAME = "Light Blue Syringe Button.png";
const std::string GREEN_SYRINGE_BUTTON_FILENAME = "Green Syringe Button.png";
const std::string YELLOW_SYRINGE_BUTTON_FILENAME = "Yellow Syringe Button.png";
const std::string RED_SYRINGE_BUTTON_FILENAME = "Red Syringe Button.png";

const std::string SCIENCE_BUILDING_FILENAME = "Science Building.png";

/////////////////////////////////////////////////////////////////////////////////
// Combined Filepaths (so code looks less gross when we use these filepaths

const std::string SHOP_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BASE_WINDOW_FILENAME;
const std::string SHOP_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + SHOP_BUTTON_FILENAME;

const std::string COOP_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BUTTON_WINDOWS_DIRECTORY + COOP_WINDOW_FILENAME;
const std::string COOP_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + COOP_BUTTON_FILENAME;

const std::string PEN_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BUTTON_WINDOWS_DIRECTORY + PEN_WINDOW_FILENAME;
const std::string PEN_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + PEN_BUTTON_FILENAME;

const std::string HATCHERY_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BUTTON_WINDOWS_DIRECTORY + HATCHERY_WINDOW_FILENAME;
const std::string HATCHERY_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + HATCHERY_BUTTON_FILENAME;

const std::string SCIENCE_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BUTTON_WINDOWS_DIRECTORY + SCIENCE_WINDOW_FILENAME;
const std::string SCIENCE_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + SCIENCE_BUTTON_FILENAME;

const std::string SETTINGS_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + WINDOWS_DIRECTORY + BASE_WINDOW_FILENAME;
const std::string SETTINGS_UI_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + MAIN_BUTTONS_DIRECTORY + SETTINGS_BUTTON_FILENAME;

const std::string MONEY_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + CURRENCY_DIRECTORY + MONEY_UI_FILENAME;
const std::string SCIENCE_COUNT_UI_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + CURRENCY_DIRECTORY + SCIENCE_UI_FILENAME;

const std::string BASE_RESEARCH_TREE_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + RESEARCH_TREES_DIRECTORY + BASE_RESEARCH_TREE_FILENAME;
const std::string COOP_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + COOP_TREE_BUTTON_FILENAME;
const std::string BASIC_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + BASIC_TREE_BUTTON_FILENAME;
const std::string ADVANCED_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + ADVANCED_TREE_BUTTON_FILENAME;
const std::string PEN_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + PEN_TREE_BUTTON_FILENAME;
const std::string HATCHERY_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + HATCHERY_TREE_BUTTON_FILENAME;

const std::string SCIENCE_RESEARCH_TREE_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + RESEARCH_TREES_DIRECTORY + SCIENCE_RESEARCH_TREE_FILENAME;
const std::string RED_SYRINGE_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + RED_SYRINGE_BUTTON_FILENAME;
const std::string SCIENCE_TREE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + SCIENCE_TREE_BUTTON_FILENAME;

const std::string PURPLE_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + PURPLE_SYRINGE_FILENAME;
const std::string BLACK_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + BLACK_SYRINGE_FILENAME;
const std::string BLUE_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + BLUE_SYRINGE_FILENAME;
const std::string LIGHT_BLUE_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + LIGHT_BLUE_SYRINGE_FILENAME;
const std::string GREEN_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + GREEN_SYRINGE_FILENAME;
const std::string YELLOW_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + YELLOW_SYRINGE_FILENAME;
const std::string RED_SYRINGE_FILEPATH = RESOURCES_DIRECTORY + SYRINGES_DIRECTORY + RED_SYRINGE_FILENAME;

const std::string PURPLE_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + PURPLE_SYRINGE_BUTTON_FILENAME;
const std::string BLACK_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + BLACK_SYRINGE_BUTTON_FILENAME;
const std::string BLUE_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + BLUE_SYRINGE_BUTTON_FILENAME;
const std::string LIGHT_BLUE_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + LIGHT_BLUE_SYRINGE_BUTTON_FILENAME;
const std::string GREEN_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + GREEN_SYRINGE_BUTTON_FILENAME;
const std::string YELLOW_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + YELLOW_SYRINGE_BUTTON_FILENAME;
const std::string RED_SYRINGE_BUTTON_FILEPATH = RESOURCES_DIRECTORY + UI_DIRECTORY + BUTTONS_DIRECTORY + TREE_BUTTONS_DIRECTORY + RED_SYRINGE_BUTTON_FILENAME;

const std::string SCIENCE_BUILDING_FILEPATH = RESOURCES_DIRECTORY + BUILDINGS_DIRECTORY + SCIENCE_BUILDING_FILENAME;

const std::string FUNKY_CHICKEN_FILEPATH = RESOURCES_DIRECTORY + CHICKENS_DIRECTORY + FUNKY_CHICKEN_FILENAME;
const std::string FUNKY_CHICKEN_WALKING_FILEPATH = RESOURCES_DIRECTORY + CHICKENS_DIRECTORY + ANIMATIONS_DIRECTORY + FUNKY_CHICKEN_WALKING_FILENAME;