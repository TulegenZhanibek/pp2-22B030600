import json

with open('1.json') as find:
    imdata = json.load(find)

cnt = 0
print("Interface Status")
print("================================================================================")       
print("DN                                                 Description           Speed    MTU")                           
print("-------------------------------------------------- --------------------  ------  ------")
for i in imdata["imdata"]:
    
    dn = i["l1PhysIf"]["attributes"]["dn"]
    describes = i["l1PhysIf"]["attributes"]["descr"]
    speed = i["l1PhysIf"]["attributes"]["speed"]
    mtu = i["l1PhysIf"]["attributes"]["mtu"]
    output = dn + "                              " + describes + speed + "   " + mtu
    if(cnt < 3):
        print(output, end = "\n")
    cnt += 1