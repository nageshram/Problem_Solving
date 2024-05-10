burst_time=[]
turn_around_time=[]
waiting_time=[]
time=0

num_of_pro=int(input("Enter how many process : ")) 

for i in range(num_of_pro):
    a=int(input("Enter the burst TIme for P[%d] :"%i))
    burst_time.append(a)

for i in range(num_of_pro):
    ct=burst_time[i]+time
    turn_around_time.append(ct)
    time=turn_around_time[i]

#completion time = total around time in FCFS
#TAT=CT-AT
#WT=TAT-BT

for i in range(num_of_pro):
    wt=turn_around_time[i]-burst_time[i]
    waiting_time.append(wt)

print("\n\nProcess\tBurst_Time\t Waiting_time\tTurn around Time")
for i in range(num_of_pro):
    print(" p%d"%i+"\t\t "+str(burst_time[i])+ "\t\t "+str(waiting_time[i])+"\t\t "+str(turn_around_time[i]))    

print("\n\nAverage waiting time = ",sum(waiting_time)/num_of_pro)
print("Average Turn around Time = ",sum(turn_around_time)/num_of_pro) 