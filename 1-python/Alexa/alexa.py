# import library
import webbrowser
from time import ctime
import os
import playsound
from gtts import gTTS
import random
import speech_recognition as sr

# Initialize recognizer class (for recognizing the speech)
r = sr.Recognizer()


# Reading Audio file as source
# listening the audio file and store in audio_text variable
def Bixby_Speak(audios):
    tts = gTTS(text=audios, lang='en', slow=False)
    # tts = gTTS(text=audios, lang='en')
    audioF = 'audio.mp3'
    tts.save(audioF)
    playsound.playsound(audioF)
    print(audios)
    os.remove(audioF)


def record(ask=False):
    with sr.Microphone(device_index=None) as source:
        r.adjust_for_ambient_noise(source)
        if ask:
            Bixby_Speak(ask)
        audio = r.listen(source)
        voice_data = ''
        try:
            voice_data = r.recognize_google(audio, language="ar")
        except sr.UnknownValueError:
            Bixby_Speak("sorry i did not get that")
        except sr.RequestError:
            Bixby_Speak("sorry Service is Down")
        return voice_data.lower()


def Respond(voice_data):
    if 'الاسم' in voice_data or 'اسم' in voice_data:
        Bixby_Speak('My name is Ahmed Mosleh')
        # Bixby_Speak('Moatasem Big Boss')
    if 'time' in voice_data or 'hour' in voice_data:
        Bixby_Speak(ctime())
    if 'بحث' in voice_data or 'البحث' in voice_data:
        search = record('العبد الله كفاية بس جوجل حكايه')
        # search = record('what dow want to search')
        url = 'https://google.com/search?q=' + search
        webbrowser.get().open(url)
        # Bixby_Speak('Here is what i Found For' + search)

        Bixby_Speak('خلصانه بشياكه' + search)

    if 'المكان' in voice_data or 'فين' in voice_data:
        location = record("ملوك الشوارع بتمسى عليك ")
        # location = record("what is the location do want ")
        url = 'https://google.nl/maps/place/' + location + '/&amp'
        webbrowser.get().open(url)
        # Bixby_Speak('Here is what i Found For' + location)
        Bixby_Speak('خلصانه بشياكه' + search)

    if 'exit' in voice_data:
        exit()
    # Bixby_Speak('How Can I help You')


Bixby_Speak('صباح الفل')
while 1:
    voice_data = record()
    Respond(voice_data)
