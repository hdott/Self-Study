## The Activity Life Cycle
- [GeoQuiz](./GeoQuiz)
- [GeoQuiz - Graded Quiz](./GeoQuiz_GradedQuiz)
- [GeoQuiz - Preventing Repeat Answers](./GeoQuiz_PreventingRepeatAnswers)

Learnt about:
- the 4 states: resumed, paused, stopped, nonexistent
- lifecycle callbacks
![activity lifecycle](https://www.researchgate.net/profile/Chang_Xu2/publication/264500161/figure/fig1/AS:667640737583121@1536189364852/Activity-lifecycle-diagram.png)
- `android.util.log` class
    - `public static int d(String, String)` debug
- configuration qualifiers
- `protected void onSavedInstanceState(Bundle outState)` directs all of the activity's views to save their state as data in thhe Bundle object
- Bundle
    - maps string keys to values
    - primitive types and implementations of Serializable or Parcelable

#### Notes
- Pressing back destroys the activity
- Override onStop() to save any permanent data
- Processes containing foreground get higher priority
![Log Levels and Methods](https://www.oreilly.com/library/view/android-programming-the/9780134171517/tfActivityLifecycle/Log_Levels.png)