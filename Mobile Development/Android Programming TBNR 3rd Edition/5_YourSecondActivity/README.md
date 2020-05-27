## Your Second Activity
- [GeoQuiz](./GeoQuiz)
- [GeoQuiz - Closing Loopholes For Cheaters](./GeoQuiz_ClosingLoopholesForCheaters)

Learnt about:
- tools:text `provides a dummy text to be displayed only in Android Studio preview
- `public void startActivity(Intent)`
- An *intent* is an object that a *component* can use to communicate with the OS
- Intent are multipurpose communication tools
- `public Intent(Context, Class<?>)`
- explicit intent -> start activites in your app
- implicit intent -> start activities in other apps
- extras in Intent
- `public Intent putExtra(String, boolean)`
- `public boolean getBooleanExtra(String, boolean)`
- `public void startActivityForResult(Intent, int)`
    - *request code* is a user-defined integer that is sent back and forth between parent and child
- `public final void setResult(int)`
- `public final void setResult(int, Intent)`
    - Activity.RESULT_OK
    - Activity.REESULT_CANCELED
    - Activity.RESULT_FIRST_USER `defining your own codes`
- `protected void onActivityResult(int, int, Intent)`

#### Notes
- Ctrl + Shift + N `quick open dialog`
- Activity Manager creates Activities
- Components are: services, broadcast receivers, content providers
- Definee Keys for extras on activitiees which receive and use them