# Enhanced-Client-Messages

This is a cool include that you need to enhance the experience of your players!

Function: `SendEnhancedClientMessage(playerid, caption, string);`

Arguments explanation:
- playerid - The ID of the player to display the message to.
- caption - The header of the client message.
- string - The content of the client message.

Example:

```
public OnPlayerConnect(playerid)
{
    SendEnhancedClientMessage(playerid, "Notification", "Hello world.");
    return 1;
}
```

NOTE: This is the first repository I made so please don't bash me if I did something wrong. :>
