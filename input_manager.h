#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "game_math.h"

class InputManager
{
public:
    InputManager();

    static void init();
    static void update();
    static bool getKey(unsigned int key);
    static bool getKeyUp(unsigned int key);
    static bool getKeyDown(unsigned int key);
    static bool getMouseClick(unsigned int button);
    static bool getMouseButtonDown(unsigned int button);
    static bool getMouseButtonUp(unsigned int button);
    static Vec2i getMouseCursorLocation();
};

#endif // INPUT_MANAGER_H
