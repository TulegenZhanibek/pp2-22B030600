from datetime import datetime, timedelta
print(datetime.now().strftime("%A"))
b = datetime.now() - timedelta(5)  
print(b.strftime("%A"))