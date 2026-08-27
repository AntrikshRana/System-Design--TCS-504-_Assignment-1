# Core Entity Classes

| Class | Data members | Methods | Access modifiers |
|-------|--------------|---------|-------------------|
| Movie | `string title`<br>`string language`<br>`float duration` | `getTitle()`<br>`getLanguage()`<br>`getDuration()` | `Members : private`<br>`Methods : publilc` |
| Seat | `int seatNumber`<br>`string type` | `getNumber()`<br>`getType()` | `Members : private`<br>`Methods : publilc` |
| Screen | `int screenNumber`<br>`vector<Seat> seats` | `getScreenNumber()`<br>`getSeat()` | 