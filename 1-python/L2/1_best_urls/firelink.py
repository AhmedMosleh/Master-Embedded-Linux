import webbrowser

my_urls = {
    'YouTube': 'https://www.youtube.com/',
    'LinkedIn': 'https://www.linkedin.com/',
    'Twitter': 'https://twitter.com/',
    'Facebook': 'https://www.facebook.com/'
}

def Firefox(web):
    # webbrowser.open(my_urls[web])
    webbrowser.get('firefox').open(my_urls[web])

# Firefox('YouTube')