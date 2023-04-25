import psycopg2
import csv

connect = psycopg2.connect(
    database="postgres",
    user="postgres",
    password="123456",
    host="localhost",
    port="5432"
)

cur = connect.cursor()

# cur.execute("CREATE table PhoneBook (id SERIAL PRIMARY KEY, first_name VARCHAR(30), last_name VARCHAR(30), phone VARCHAR(15));")

# with open('data.csv', 'r') as f:
#     reader = csv.reader(f)
#     for row in reader:
#         cur.execute("INSERT INTO PhoneBook (name, phone) VALUES (%s, %s)", (row[0], row[1]))
try:
    name = input("Enter name: ")
    surname = input("Enter surname: ")
    phone = input("Enter phone number: ")

    cur.execute("INSERT INTO PhoneBook (first_name, last_name, phone) VALUES (%s, %s, %s)", (name, surname, phone))

    cur.execute("SELECT * FROM PhoneBook")
    print(cur.fetchall())
    cur.execute("UPDATE PhoneBook SET phone = '45454' WHERE first_name = 'Zhanibek';")

    cur.execute("SELECT id, first_name FROM PhoneBook")
    print(cur.fetchall())

    cur.execute("DELETE FROM PhoneBook WHERE first_name = 'Zhanibek'")
except psycopg2.DatabaseError:
    connect.rollback()
finally:
    connect.commit()
    cur.close()
    connect.close()