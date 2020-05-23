## Your First Android Application

- [GeoQuiz](./GeoQuiz)
- [GeoQuiz - Customizing The Toast](./GeoQuiz_CustomizingTheToast)

This chapter introduced the following topics:
- Activities
- Layouts
- Widgets `building blocks making up the ui`
- Linear Layout
- String resources
- AppCommpatActivity
- Resource IDs
- Toasts
- Graddle

#### Notes
- XML Elements -> Attributes -> Intructions about the configuration oof the widget
- The root element must specify the Android XML Namespace: http://schemas.android.com/apk/res/android
- LinearLayout <- ViewGroup <- View
- dp = density-independent pixels
- padding `tell the widget to add the specified amount of space to its contents when determining its size`
- AppCompatActivity <- Activity `provides compatibility for older versions of Android
- setContentView() `inflates a layout`
- android:id `generate ID`
- `@+ creating ID`
- `@ referencing ID`
- findViewById() `reference to inflated widget`
- public static Toast makeText()
- http://www.developer.android.com/tools/publishing/preparing.xhtml
- AAPT - Android Asset Packaging Tool `compiles layout resources`
- LayoutInflater class