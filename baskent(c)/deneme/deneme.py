import speech_recognition as sr

# Path to the audio file
audio_file = "/Users/metinhunelierdamar/Documents/GitHub/cpp/baskent(c)/deneme/ses.wav"
recognizer = sr.Recognizer()

with sr.AudioFile(audio_file) as source:
    audio_data = recognizer.record(source)

# Use CMU Sphinx for local transcription
try:
    transcription = recognizer.recognize_sphinx(audio_data)
    print(transcription)
except sr.UnknownValueError:
    print("Sphinx could not understand audio")
except sr.RequestError as e:
    print(f"Sphinx error; {e}")