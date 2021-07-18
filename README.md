# Enhanced-Client-Messages

This is a cool include that you need to enhance the experience of your players!

## Installation

Installation on a linux software:
```
sampctl package install Sync-07/Enhanced-Client-Message
```

and the inclusion of the script:
```pawn
#include <ECM>
```

## Information

Function: 
```pawn
SendEnhancedClientMessage(playerid, caption, string);
```

Arguments explanation:
- playerid - The ID of the player to display the message to.
- caption - The header of the client message.
- string - The content of the client message.

Example:

```pawn
public OnPlayerConnect(playerid)
{
    SendEnhancedClientMessage(playerid, "Notification", "Hello world.");
    return 1;
}
```

NOTES:
- Use a maximum of 15 characters when captioning an enhanced client message, or it will be disorted. (And the result will annoy you.)
- The main string doesn't require character count, but make sure to not put a long continous word like "supercalifragilisticexpialidocious" because the result will also annoy you.
- This is the first repository I made so please don't bash me if I did something wrong. :>
