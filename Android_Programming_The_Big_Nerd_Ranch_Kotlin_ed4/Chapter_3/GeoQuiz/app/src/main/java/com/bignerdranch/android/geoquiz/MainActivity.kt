package com.bignerdranch.android.geoquiz

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.Gravity
import android.view.View
import android.widget.Button
import android.widget.ImageButton
import android.widget.TextView
import android.widget.Toast
import androidx.core.view.isVisible
import java.text.DecimalFormat

private const val TAG = "MainActivity"

class MainActivity : AppCompatActivity() {

    private lateinit var trueButton: Button
    private lateinit var falseButton: Button
//    private lateinit var nextButton: Button
//    private lateinit var prevButton: Button
    private lateinit var nextButton: ImageButton
    private lateinit var prevButton: ImageButton
    private lateinit var questionTextView: TextView

    private val questionBank = listOf(
        Question(R.string.question_australia, true),
        Question(R.string.question_oceans, true),
        Question(R.string.question_mideast, false),
        Question(R.string.question_africa, false),
        Question(R.string.question_americas, true),
        Question(R.string.question_asia, true)
    )

    private var currentIndex = 0;
    private var answers = IntArray(questionBank.size)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        Log.d(TAG, "onCreate(Bundle?) called")


        nextButton = findViewById(R.id.next_button)
        prevButton = findViewById(R.id.previous_button)
        questionTextView = findViewById(R.id.question_text_view)

        trueButton = findViewById(R.id.true_button)
        trueButton.setOnClickListener { view: View ->
//            var toast = Toast.makeText(
//                this,
//                R.string.correct_toast,
//                Toast.LENGTH_SHORT
//            )
//            toast.setGravity(Gravity.TOP, 0,0)
//            toast.show()
            checkAnswer(true)
        }

        falseButton = findViewById(R.id.false_button)
        falseButton.setOnClickListener { view: View ->
//            var toast = Toast.makeText(
//                this,
//                R.string.incorrect_toast,
//                Toast.LENGTH_SHORT
//            )
//            toast.setGravity(Gravity.TOP, 0,0)
//            toast.show()
            checkAnswer(false)
        }

        nextButton.setOnClickListener {
            currentIndex = (currentIndex + 1) % questionBank.size
            updateQuestion()
        }

        prevButton.setOnClickListener {
            if(currentIndex - 1 < 0){
                currentIndex = questionBank.size
            }
            currentIndex = (currentIndex - 1) % questionBank.size
            updateQuestion()
        }
        //setting prevButton disabled as I forgot to duplicate the app in ch2
        prevButton.isEnabled = false
        prevButton.isVisible = false

        questionTextView.setOnClickListener {
            currentIndex = (currentIndex + 1) % questionBank.size
            updateQuestion()
        }

        updateQuestion()
    }

    private fun buttonsAreEnabled(status: Boolean){
        trueButton.isEnabled = status;
        falseButton.isEnabled = status;
    }

    private fun updateQuestion() {
        buttonsAreEnabled(true)
        val questionTextResId = questionBank[currentIndex].textResId
        questionTextView.setText(questionTextResId)
    }

    private fun answeredAllQuestions(messageId: Int){
        if (messageId == R.string.correct_toast){
            answers[currentIndex] = 1
        }else{
            answers[currentIndex] = 0
        }

        if (currentIndex == questionBank.size - 1){
            var count = 0;
            for (i:Int in answers){
                if (i == 1){
                    ++count
                }
            }

            val percentage = count * 100.0 / questionBank.size
            DecimalFormat("#.##").format(percentage)
            val message = getString(messageId).plus("\n").plus(DecimalFormat("#.##").format(percentage))
                .plus("% Correct Answers!")
            Toast.makeText(this,
                message,
                Toast.LENGTH_SHORT).show()
        }
    }

    private fun checkAnswer(userAnswer : Boolean){
        buttonsAreEnabled(false)
        val correctAnswer = questionBank[currentIndex].answer;

        val messageResId = if (userAnswer == correctAnswer){
            R.string.correct_toast
        }else{
            R.string.incorrect_toast
        }

        Toast.makeText(this, messageResId, Toast.LENGTH_SHORT).show()
        answeredAllQuestions(messageResId)
    }

    override fun onStart() {
        super.onStart()
        Log.d(TAG, "onStart() called")
    }

    override fun onResume() {
        super.onResume()
        Log.d(TAG, "onResume() called")
    }

    override fun onPause() {
        super.onPause()
        Log.d(TAG, "onPause() called")
    }

    override fun onStop() {
        super.onStop()
        Log.d(TAG, "onStop() called")
    }

    override fun onDestroy() {
        super.onDestroy()
        Log.d(TAG, "onDestroy() called")
    }
}
