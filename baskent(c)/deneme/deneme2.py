   from pydub import AudioSegment

   # Load the OGG file
   audio = AudioSegment.from_ogg("/Users/metinhunelierdamar/Documents/GitHub/cpp/baskent(c)/deneme/ses.ogg")

   # Export as WAV
   audio.export("/Users/metinhunelierdamar/Documents/GitHub/cpp/baskent(c)/deneme/ses.wav", format="wav")