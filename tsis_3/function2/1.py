
def above_5half( dict, movie ):
    for i in range( len( dict )):
        if dict[ i ][ "name" ] == movie:
            if dict[ i ][ "imdb" ] > 5.5:
                return True
            else:
                return False  

def movies_above_5half( dict ):
    newlist = list()
    for i in range( len( dict )):
        if dict[ i ][ "imdb" ] > 5.5:
            newlist.append(dict[ i ][ "name" ] )
        else:
            continue 

    return newlist
    
def category_filter( dict, category ):
    newlist = list()
    for i in range(len( dict )):
        if dict[ i ][ "category" ] == category:
            newlist.append( dict[ i ][ "name" ] )
        else:
            continue
    
    return newlist

def average_imdb( dict, mylist ):
    average = float(0)
    number = int(0)
    sum = float(0)
    for i in range(len( dict )):
        if dict[ i ][ "name" ] in mylist:
            sum += int( dict[ i ][ "imdb" ] )
            number += 1
    
    average = sum / number
    return average
    
def average_imdb_category( dict, category):
    mylist = category_filter( dict, category)
    return average_imdb( dict, mylist)

movies = [
{
"name": "Usual Suspects", 
"imdb": 7.0,
"category": "Thriller"
},
{
"name": "Hitman",
"imdb": 6.3,
"category": "Action"
},
{
"name": "Dark Knight",
"imdb": 9.0,
"category": "Adventure"
},
{
"name": "The Help",
"imdb": 8.0,
"category": "Drama"
},
{
"name": "The Choice",
"imdb": 6.2,
"category": "Romance"
},
{
"name": "Colonia",
"imdb": 7.4,
"category": "Romance"
},
{
"name": "Love",
"imdb": 6.0,
"category": "Romance"
},
{
    "name": "Bride Wars",
"imdb": 5.4,
"category": "Romance"
},
{
"name": "AlphaJet",
"imdb": 3.2,
"category": "War"
},
{
"name": "Ringing Crime",
"imdb": 4.0,
"category": "Crime"
},
{
"name": "Joking muck",
"imdb": 7.2,
"category": "Comedy"
},
{
"name": "What is the name",
"imdb": 9.2,
"category": "Suspense"
},
{
"name": "Detective",
"imdb": 7.0,
"category": "Suspense"
},
{
"name": "Exam",
"imdb": 4.2,
"category": "Thriller"
},
{
"name": "We Two",
"imdb": 7.2,
"category": "Romance"
}
]

print ( above_5half( movies, "We Two"))
print ( movies_above_5half( movies ))
print ( category_filter( movies, "Romance" ))
print ("%.1f" %average_imdb( movies, movies_above_5half( movies ) ))
print ("%.1f" %average_imdb_category( movies, "Romance" ))