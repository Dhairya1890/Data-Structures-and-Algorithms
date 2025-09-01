from flask import Flask, render_template #this lib is used to render html files into the app

app = Flask(__name__)

all_posts = [ # list of dictionaries
    {
        "Title" : "Post1",
        "Content" : "Body - This is the body for post 1 ",
        "Author" : "Not A Real Person",
    },
    {
        "Title" : "Post2",
        "Content" : "Body2 - This is the body for post 2"
    }
]

@app.route('/')
def hello():
    return render_template('index.html')

@app.route('/posts' or '/POSTS')
def posts():
    return render_template('posts.html', posts=all_posts) #define a variable that calls the list of dictionaries called all_posts

if __name__ == "__main__":
    app.run(debug=True)