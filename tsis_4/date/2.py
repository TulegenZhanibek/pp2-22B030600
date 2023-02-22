from datetime import datetime, timedelta
list = [datetime.now() - timedelta(1), datetime.now(), datetime.now() + timedelta(1)]
for i in list:
    print(i.strftime("%A"), end = '\n')