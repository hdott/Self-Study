## The Activity Life Cycle
- [GeoQuiz](./GeoQuiz)
- [GeoQuiz - Graded Quiz](./GeoQuiz_GradedQuiz)
- [GeoQuiz - Preventing Repeat Answers](./GeoQuiz_PreventingRepeatAnswers)

Learnt about:
- the 4 states: resumed, paused, stopped, nonexistent
- lifecycle callbacks
![activity lifecycle](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.researchgate.net%2Ffigure%2FActivity-lifecycle-diagram_fig1_264500161&psig=AOvVaw0t4LzTfqAyBZvB0EitSXQx&ust=1590442233601000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCNjvrqK5zekCFQAAAAAdAAAAABAQ)
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